import os
import datetime

today = datetime.datetime.now().strftime('%Y%m%d')

yarpgen_path = '/data2/zyj/Dataset_ISPASS/yarpgen'

# json & c
os.system(f'python3 ./baselines/mytest/run_batch.py -j 32 -o {yarpgen_path}--total 250000')

# pluto & info
os.system(f'python3 ./optimization_and_analysis.py -i {yarpgen_path}')

# transformation detection
os.system(f'python3 ./loop_transformation_classifier.py -j 32 -i {yarpgen_path} -o classification_output_{today}.csv')

# rag preprocess
os.system(f'python3 ./rag_preprocess.py -j 32 -i {yarpgen_path} -c classification_output_{today}.csv -d yarpgen')
