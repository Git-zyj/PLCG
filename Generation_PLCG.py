import os
import datetime

today = datetime.datetime.now().strftime('%Y%m%d')

# json & c
os.system('python3 ./random_generation.py -j 32 --option 4')

# pluto & info
os.system('python3 ./optimization_and_analysis.py -j 32')

# transformation detection
os.system(f'python3 ./loop_transformation_classifier.py -j 32 -o classification_output_{today}.csv')

# rag preprocess
os.system(f'python3 ./rag_preprocess.py -j 32 -c classification_output_{today}.csv')
