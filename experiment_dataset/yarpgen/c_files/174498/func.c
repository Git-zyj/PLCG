/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174498
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = arr_0 [i_1];
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_1] = arr_8 [i_0] [i_1] [i_2];
                            arr_13 [i_0] [i_2] [i_3 - 1] = arr_6 [i_1] [i_0];
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((max((((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) / (arr_3 [i_3] [i_3])))), (min((arr_6 [i_0] [i_0]), (arr_1 [i_0] [i_2]))))) & (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))));
                            var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_4 [i_0]), (1593669817U)))), (((min((arr_2 [i_3 + 1]), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_3])))) | (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1] [i_2] [i_3] [i_3]) / (arr_11 [i_0] [i_1] [i_2] [i_3 + 2]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
