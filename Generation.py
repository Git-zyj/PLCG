import os
import time

time_start = time.time()

# json & c
os.system('python3 random_generation.py')

time_end1 = time.time()

# pluto & info
os.chdir('./loop_transformation_classifier')
os.system('python3 optimization_and_analysis.py')

time_end2 = time.time()

# transformation detection
os.system('python3 classifier.py')

time_end3 = time.time()

with open('./../time.txt', 'w') as f:
    f.write(f"代码生成时间：{time_end1 - time_start} 秒\n")
    f.write(f"代码优化时间：{time_end2 - time_end1} 秒\n")
    f.write(f"循环变换分析时间：{time_end3 - time_end2} 秒\n")

# ls -l | grep "^-" | wc -l 统计文件数量
