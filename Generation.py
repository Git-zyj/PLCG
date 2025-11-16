import os
import datetime

today = datetime.datetime.now().strftime('%Y%m%d')

# json & c
os.system('python3 ./random_generation.py')

# pluto & info
os.system('python3 ./optimization_and_analysis.py')

# transformation detection
os.system(f'python3 ./loop_transformation_classifier.py -o classification_output_{today}.csv')

# rag preprocess
os.system(f'python3 ./rag_preprocess.py -c classification_output_{today}.csv')
