#!/usr/bin/env python3
"""
代码简化脚本 - 修复版
"""

import re
import sys
from pathlib import Path

def replace_macro_definitions(content):
    """替换max/min宏定义为简化版本"""
    import re
    
    # 替换max宏定义 - 使用正则表达式处理可能的空格变化
    max_pattern = r'#define max\(a,b\)\s*\\\s*\(\{\s*__typeof__\s*\(a\)\s*_a\s*=\s*\(a\);\s*\\\s*__typeof__\s*\(b\)\s*_b\s*=\s*\(b\);\s*\\\s*_a > _b \? _a : _b;\s*\}\)'
    new_max = '#define max(x,y)    ((x) > (y)? (x) : (y))'
    content = re.sub(max_pattern, new_max, content)
    
    # 替换min宏定义
    min_pattern = r'#define min\(a,b\)\s*\\\s*\(\{\s*__typeof__\s*\(a\)\s*_a\s*=\s*\(a\);\s*\\\s*__typeof__\s*\(b\)\s*_b\s*=\s*\(b\);\s*\\\s*_a < _b \? _a : _b;\s*\}\)'
    new_min = '#define min(x,y)    ((x) < (y)? (x) : (y))'
    content = re.sub(min_pattern, new_min, content)
    
    return content

def extract_and_simplify_test_function(content):
    """提取test()函数内容进行简化，然后替换回原位置"""
    
    # 查找test()函数的开始
    test_start = content.find('void test()')
    if test_start == -1:
        # print("警告: 未找到test()函数")
        return content, False
    
    # 找到test()函数体的开始
    brace_start = content.find('{', test_start)
    if brace_start == -1:
        # print("警告: 未找到test()函数体")
        return content, False
    
    # 计算大括号匹配
    brace_count = 0
    i = brace_start
    end_pos = -1
    
    while i < len(content):
        if content[i] == '{':
            brace_count += 1
        elif content[i] == '}':
            brace_count -= 1
            if brace_count == 0:
                end_pos = i
                break
        i += 1
    
    if end_pos == -1:
        # print("警告: test()函数体不完整")
        return content, False
    
    # 提取test函数内容（包含大括号）
    function_start = test_start
    function_end = end_pos + 1
    
    before_function = content[:function_start]
    function_content = content[function_start:function_end]
    after_function = content[function_end:]
    
    # 提取函数体内容进行简化（不包含void test() { 和最后的 }）
    body_start = function_content.find('{') + 1
    body_end = function_content.rfind('}')
    function_body = function_content[body_start:body_end].strip()
    
    # 简化函数体
    simplified_body = simplify_code_safely(function_body)
    
    # 添加pragma标记
    final_body = "#pragma scop\n" + simplified_body + "\n#pragma endscop"
    
    # 重新构建函数内容
    new_function_content = function_content[:body_start] + "\n" + final_body + "\n" + function_content[body_end:]
    
    # 替换回原位置
    new_content = before_function + new_function_content + after_function
    
    return new_content, True

def simplify_code_safely(content):
    """安全地简化代码内容，避免破坏语法结构"""
    
    # 保存原始行结构
    original_lines = content.split('\n')
    processed_lines = []
    
    for line in original_lines:
        if line.strip():
            # 对每行单独处理
            processed_line = process_single_line(line)
            processed_lines.append(processed_line)
        else:
            processed_lines.append('')
    
    return '\n'.join(processed_lines)

def process_single_line(line):
    """处理单行代码"""
    # 首先处理for循环变量类型
    line = normalize_for_loop_variables(line)
    
    # 移除 /* implicit */ 注释
    line = re.sub(r'\(/\*\s*implicit\s*\*/\s*', '(', line)
    
    # 移除无符号整数字面量的U后缀
    line = remove_unsigned_suffix(line)
    
    # 移除类型转换 - 更精确的匹配
    type_patterns = [
        r'\(\s*signed\s+char\s*\)\s*', 
        r'\(\s*unsigned\s+char\s*\)\s*',
        r'\(\s*short\s*\)\s*', 
        r'\(\s*int\s*\)\s*', 
        r'\(\s*long\s+long\s+int\s*\)\s*', 
        r'\(\s*unsigned\s+long\s+long\s+int\s*\)\s*',
        r'\(\s*_Bool\s*\)\s*', 
        r'\(\s*unsigned\s+short\s*\)\s*',
        r'\(\s*unsigned\s+int\s*\)\s*',
        r'\(\s*long\s+long\s*\)\s*',
        r'\(\s*unsigned\s+long\s+long\s*\)\s*'
    ]
    
    for pattern in type_patterns:
        line = re.sub(pattern, '', line)
    
    # 移除多余的空括号对
    line = re.sub(r'\(\s*\(\s*([^()]+)\s*\)\s*\)', r'(\1)', line)
    
    # 移除 LoopSeq 注释
    line = re.sub(r'/\*\s*LoopSeq\s+\d+\s*\*/', '', line)
    
    # 简化布尔转换
    line = re.sub(r'\(_Bool\)\s*\(([^)]+)\)', r'(\1)', line)
    line = re.sub(r'\(_Bool\)\s*(\w+)', r'(\1)', line)
    
    # 简化数字字面量的类型转换
    line = re.sub(r'\(\s*unsigned\s+char\s*\)\s*(\d+)', r'\1', line)
    line = re.sub(r'\(\s*signed\s+char\s*\)\s*(\d+)', r'\1', line)
    line = re.sub(r'\(\s*short\s*\)\s*(\d+)', r'\1', line)
    line = re.sub(r'\(\s*unsigned\s+short\s*\)\s*(\d+)', r'\1', line)
    line = re.sub(r'\(\s*int\s*\)\s*(\d+)', r'\1', line)
    line = re.sub(r'\(\s*unsigned\s+int\s*\)\s*(\d+)', r'\1', line)
    
    # 谨慎移除多余括号 - 保护三元运算符结构
    line = remove_redundant_parentheses(line)
    
    # 清理多余空格但保持基本格式
    line = re.sub(r'\s+', ' ', line)
    line = line.strip()
    
    return line

def normalize_for_loop_variables(line):
    """将for循环中的循环变量类型统一改为int，并统一步长为1"""
    # 匹配for循环的完整模式：for (type var = ...; ...; ...)
    for_pattern = r'(for\s*\()\s*([^;]+;\s*[^;]+;\s*[^)]+\))'
    
    # 应用替换
    line = re.sub(for_pattern, replace_for_loop, line)
    return line

def replace_for_loop(match):
        for_keyword = match.group(1)  # "for ("
        loop_content = match.group(2)  # 循环内容
        
        # 分割循环的三个部分
        parts = loop_content.split(';', 2)
        if len(parts) >= 3:
            
            # 处理第一个部分（变量声明和初始化）
            init_part = parts[0]
            
            # 替换变量类型为int
            type_replacements = [
                (r'\bunsigned\s+long\s+long\s+int\s+', 'int '),
                (r'\bunsigned\s+long\s+long\s+', 'int '),
                (r'\bunsigned\s+char\s+', 'int '),
                (r'\bsigned\s+char\s+', 'int '),
                (r'\bunsigned\s+short\s+', 'int '),
                (r'\bshort\s+', 'int '),
                (r'\bunsigned\s+int\s+', 'int '),
                (r'\blong\s+long\s+int\s+', 'int '),
                (r'\blong\s+long\s+', 'int '),
                (r'\b_Bool\s+', 'int '),
            ]
            
            for pattern, replacement in type_replacements:
                init_part = re.sub(pattern, replacement, init_part)
                
            # 处理第三个部分（步长部分）
            step_part = parts[2]
            step_part = simplify_loop_step(step_part)
            
            # 重新组合循环内容
            parts[0] = init_part
            parts[2] = step_part
            new_loop_content = ';'.join(parts)
            
            return for_keyword + new_loop_content
        
        return match.group(0)

def simplify_loop_step(step_expr):
    """简化循环步长表达式"""
    # 清理空格
    step_expr = step_expr.strip()
    
    # 处理 += 操作符
    # i += 3 -> i += 1
    # i += -1 -> i -= 1
    # i += -3 -> i -= 1
    step_expr = re.sub(
        r'([a-zA-Z_][a-zA-Z0-9_]*)\s*\+=\s*(\d+)', 
        r'\1 += 1', 
        step_expr
    )
    step_expr = re.sub(
        r'([a-zA-Z_][a-zA-Z0-9_]*)\s*\+=\s*-\s*(\d+)', 
        r'\1 -= 1', 
        step_expr
    )
    
    # 处理 -= 操作符  
    # i -= 3 -> i -= 1
    # i -= -1 -> i += 1
    # i -= -3 -> i += 1
    step_expr = re.sub(
        r'([a-zA-Z_][a-zA-Z0-9_]*)\s*-=\s*(\d+)', 
        r'\1 -= 1', 
        step_expr
    )
    step_expr = re.sub(
        r'([a-zA-Z_][a-zA-Z0-9_]*)\s*-=\s*-\s*(\d+)', 
        r'\1 += 1', 
        step_expr
    )
    
    # 处理 ++ 和 -- 操作符（保持不变）
    # i++ -> i++
    # i-- -> i--
    
    # 处理简单的赋值
    # i = i + 3 -> i += 1
    # i = i - 3 -> i -= 1
    step_expr = re.sub(
        r'([a-zA-Z_][a-zA-Z0-9_]*)\s*=\s*\1\s*\+\s*(\d+)', 
        r'\1 += 1', 
        step_expr
    )
    step_expr = re.sub(
        r'([a-zA-Z_][a-zA-Z0-9_]*)\s*=\s*\1\s*-\s*(\d+)', 
        r'\1 -= 1', 
        step_expr
    )
    step_expr = re.sub(
        r'([a-zA-Z_][a-zA-Z0-9_]*)\s*=\s*\1\s*\+\s*-\s*(\d+)', 
        r'\1 -= 1', 
        step_expr
    )
    step_expr = re.sub(
        r'([a-zA-Z_][a-zA-Z0-9_]*)\s*=\s*\1\s*-\s*-\s*(\d+)', 
        r'\1 += 1', 
        step_expr
    )
    
    return step_expr

def remove_unsigned_suffix(line):
    """移除无符号整数字面量的U后缀"""
    # 匹配数字后跟U,u,L或l后缀，可能有空格
    patterns = [
        r'\b(\d+)\s*[UuLl]*\b'
    ]
    
    for pattern in patterns:
        line = re.sub(pattern, r'\1', line)
    
    return line

def remove_redundant_parentheses(content):
    """移除多余括号的简化版本"""
    old_content = ""
    while old_content != content:
        old_content = content
        
        # 移除简单情况的多余括号，但跳过if/while/for语句的条件表达式
        lines = content.split('\n')
        processed_lines = []
        
        for line in lines:
            processed_line = process_line_parentheses(line)
            processed_lines.append(processed_line)
        
        content = '\n'.join(processed_lines)
    
    return content

def process_line_parentheses(line):
    """处理单行的括号移除"""
    # 如果是if/while/for语句，保护条件表达式
    if re.match(r'^\s*(if|while|for)\s*\(', line):
        # 提取条件表达式部分
        match = re.match(r'^(\s*(if|while|for)\s*\()(.*?)(\)\s*\{?\s*)$', line)
        if match:
            prefix = match.group(1)  # "if ("
            condition = match.group(3)  # 条件内容
            suffix = match.group(4)   # ") {"
            
            # 只简化条件表达式内部的多余括号
            simplified_condition = simplify_expression_parentheses(condition)
            
            return prefix + simplified_condition + suffix
    
    # 对于其他行，正常处理
    return simplify_expression_parentheses(line)

def simplify_expression_parentheses(expr):
    """简化表达式中的多余括号，处理前缀运算符特殊情况"""
    old_expr = ""
    current_expr = expr
    
    while old_expr != current_expr:
        old_expr = current_expr
        
        # 1. 首先处理前缀运算符的特殊情况
        # (--数字) -> 数字
        current_expr = re.sub(r'\(\s*-\s*\(\s*-\s*(\d+)\s*\)\s*\)', r'\1', current_expr)
        # (+-数字) -> -数字
        current_expr = re.sub(r'\(\s*\+\s*\(\s*-\s*(\d+)\s*\)\s*\)', r'-\1', current_expr)
        # (-+数字) -> -数字
        current_expr = re.sub(r'\(\s*-\s*\(\s*\+\s*(\d+)\s*\)\s*\)', r'-\1', current_expr)
        # (++数字) -> 数字
        current_expr = re.sub(r'\(\s*\+\s*\(\s*\+\s*(\d+)\s*\)\s*\)', r'\1', current_expr)
        
        # 2. 处理变量表达式的前缀运算符
        # (--变量) -> 变量
        current_expr = re.sub(r'\(\s*-\s*\(\s*-\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*\)\s*\)', r'\1', current_expr)
        # (+-变量) -> -变量
        current_expr = re.sub(r'\(\s*\+\s*\(\s*-\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*\)\s*\)', r'-\1', current_expr)
        # (-+变量) -> -变量
        current_expr = re.sub(r'\(\s*-\s*\(\s*\+\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*\)\s*\)', r'-\1', current_expr)
        # (++变量) -> 变量
        current_expr = re.sub(r'\(\s*\+\s*\(\s*\+\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*\)\s*\)', r'\1', current_expr)
        
        # 3. 处理单个前缀运算符的多余括号
        # (-数字) -> -数字
        current_expr = re.sub(r'\(\s*-\s*(\d+)\s*\)', r'-\1', current_expr)
        # (+数字) -> 数字
        current_expr = re.sub(r'\(\s*\+\s*(\d+)\s*\)', r'\1', current_expr)
        # (-变量) -> -变量
        current_expr = re.sub(r'\(\s*-\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*\)', r'-\1', current_expr)
        # (+变量) -> 变量
        current_expr = re.sub(r'\(\s*\+\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*\)', r'\1', current_expr)
        
        # 4. 移除其他简单情况的多余括号
        current_expr = re.sub(r'\(\s*\(([^()?]+)\)\s*\)', r'(\1)', current_expr)
        current_expr = re.sub(r'\(\s*([a-zA-Z_][a-zA-Z0-9_]*)\s*\)', r'\1', current_expr)
        current_expr = re.sub(r'\(\s*(-?\d+)\s*\)', r'\1', current_expr)
    
    # 在最终清理部分添加
    current_expr = re.sub(r'\(\s*\+\s*\(([^)]+)\)\s*\)', r'(\1)', current_expr)
    
    return current_expr

def format_code_properly(content):
    """正确格式化代码"""
    lines = content.split('\n')
    formatted_lines = []
    indent_level = 0
    
    for line in lines:
        stripped = line.strip()
        if not stripped:
            formatted_lines.append('')
            continue
        
        # 在添加当前行之前调整缩进
        if stripped.startswith('}') or stripped.endswith('}'):
            indent_level = max(0, indent_level - 1)
        
        # 添加正确缩进
        formatted_line = '    ' * indent_level + stripped
        formatted_lines.append(formatted_line)
        
        # 在添加当前行之后调整缩进
        if stripped.endswith('{'):
            indent_level += 1
    
    return '\n'.join(formatted_lines)

def process_file(input_file, output_file=None):
    """
    处理单个文件
    
    output_file默认为{os.path.basename(input_file).split('.')[0]}_simplified.c
    """
    try:
        with open(input_file, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # print(f"处理文件: {input_file}")
        
        # 检查文件中是否包含for循环，如果没有则跳过处理
        if not contains_for_loop(content):
            # print(f"⚠  {input_file} 中未找到for循环，跳过处理")
            return 'found no for loop'
        
        # 第一步：替换宏定义
        content = replace_macro_definitions(content)
        
        # 第二步：提取并简化test函数，然后替换回原位置
        new_content, success = extract_and_simplify_test_function(content)
        
        if not success:
            # print(f"⚠  {input_file} 中未找到test()函数，跳过处理")
            return 'found no available function'
        
        # 最终格式化
        new_content = format_code_properly(new_content)
        
        if output_file is None:
            output_file = input_file.replace('.c', '_simplified.c')
            if output_file == input_file:
                output_file = input_file + '_simplified.c'
        
        with open(output_file, 'w', encoding='utf-8') as f:
            f.write(new_content)
        
        # print(f"✓ 已处理: {input_file} -> {output_file}")
        
        # 显示统计信息
        original_lines = len(content.split('\n'))
        new_lines = len(new_content.split('\n'))
        # print(f"   原始: {original_lines} 行, 处理后: {new_lines} 行")
        
        return True
        
    except Exception as e:
        # print(f"✗ 处理失败 {input_file}: {e}")
        import traceback
        traceback.print_exc()
        return False

def contains_for_loop(content):
    """检查内容中是否包含for循环"""
    # 简单的检查：包含 "for (" 并且后面有内容
    return 'for (' in content and re.search(r'for\s*\([^)]', content)

def main():
    """主函数"""
    if len(sys.argv) < 2:
        print("代码简化工具 - 修复版")
        print("用法:")
        print("  python simplify_code.py <文件> [输出文件]")
        print("")
        print("示例:")
        print("  python simplify_code.py input.c")
        print("  python simplify_code.py input.c output.c")
        return

    input_file = sys.argv[1]
    output_file = sys.argv[2] if len(sys.argv) > 2 else None
    
    if Path(input_file).is_file():
        process_file(input_file, output_file)
    else:
        print(f"错误: {input_file} 不是有效的文件")

if __name__ == "__main__":
    main()