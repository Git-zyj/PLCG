array_names_sequence = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
iterators_sequence = [f'{i}_{suffix}' for i in ['i', 'j', 'k'] for suffix in range(10)]
bound_params_list = ['PB_N', 'PB_M', 'PB_L', 'PB_P', 'PB_Q']
array_index_dim_names_sequence = 'xyzvw'

params_range = [range(4, 9), range(6, 11), [3, 4, 5], [8, 9, 10]]
# params_multiplier = [1e7, 1e3, 1e2, 1e1] # TODO: too large
params_multiplier = [1e3, 10, 10, 1]
# params_multiplier = [10, 1, 1, 1]

# 固定参数 （TODO: 后续考虑部分调整为可变参数）
depth_min = 1 # 最小循环深度

bound_exist_decay_factor = 1/2 # 循环嵌套每深一维变量边界出现概率

prob_array_depth = [4, 16, 1] # 维数为循环维度-1的数组生成概率:维数为循环维度的数组生成概率:循环维度+1的数组生成概率为4:16:1
prob_dep_region = [4, 1] # 强相关（共享循环变量）依赖生成概率:全局依赖生成概率为4:1

# access_fun相关
no_iterator_factor = 1/128
redundant_iterator_factor = 1/4
corresponding_iterator_factor = 2
no_iterator_final_dim_factor = 4

# branch相关
enable_if_branch = False # 是否启用if分支

# 非线性项相关
max_degree = 1 # 最高次数（1=线性，2=二次）
enable_multi_terms = False # 是否允许多基项
more_terms_factor = 1/8
max_terms_per_func = 3 # 每个函数最多基项数（若启用多基项）
enable_reverse_dim = False
prob_has_reverse_dim = 2/10 # 反向循环维度的概率