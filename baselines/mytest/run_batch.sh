#!/bin/bash
# run_batch_parallel.sh

TOTAL=100
BASE_DIR="./c_files"
MAX_JOBS=4  # 根据你的CPU核心数调整

# 创建主目录
mkdir -p "$BASE_DIR"

# 定义生成函数
generate_case() {
    local i=$1
    local dir_path="$BASE_DIR/$i"
    
    mkdir -p "$dir_path"
    
    if ../yarpgen/scripts/yarpgen \
        --std=c \
        --emit-align-attr=none \
        --inp-as-args=none \
        --emit-pragmas=none \
        --expl-loop-param=true \
        --seed="$i" \
        -o "$dir_path" 2>/dev/null && \
       [ -f "$dir_path/func.c" ] && \
       python3 ./yarpgen_simplify.py "$dir_path/func.c" 2>/dev/null; then
        echo "✓ Completed test case $i"
        return 0
    else
        echo "✗ Failed test case $i"
        return 1
    fi
}

# 导出函数以便在子进程中使用
export -f generate_case
export BASE_DIR

# 使用parallel或者xargs进行并行处理
echo "Starting parallel generation of $TOTAL test cases..."
seq 1 $TOTAL | xargs -I {} -P $MAX_JOBS bash -c 'generate_case "$@"' _ {}

echo "Batch generation completed!"