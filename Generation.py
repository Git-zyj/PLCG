import os
import datetime
from path_settings import PROJECT_PATH

# pluto_path = os.path.join(PROJECT_PATH, "Compilers/pluto_DA/polycc_multiprocessing")
pluto_path = os.path.join(PROJECT_PATH, "Compilers/pluto/polycc_parallel")

today = datetime.datetime.now().strftime('%Y%m%d')

# json & c
os.system('python3 ./random_generation.py --option 1')

# pluto & info
os.system(f'python3 ./optimization_and_analysis.py -p {pluto_path} -c "-q --tile --parallel --nocloogbacktrack --custom-context --plcg-info"')

# # transformation detection
os.system(f'python3 ./loop_transformation_classifier.py -o classification_output_{today}.csv')

# rag preprocess
os.system(f'python3 ./rag_preprocess.py -bt 5 -c classification_output_{today}.csv')
