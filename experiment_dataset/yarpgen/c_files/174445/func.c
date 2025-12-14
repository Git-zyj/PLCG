/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174445
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
    var_13 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_10);
                arr_5 [9] = var_2;
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_11 [4ULL] [(short)5] [(signed char)1] [i_2] [4U] [10LL] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((arr_3 [i_2] [i_3]), (arr_3 [i_1] [i_1])))), (((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (6331555163728455721LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_2])))))));
                            var_14 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
                        }
                    } 
                } 
                arr_12 [i_0] [8LL] = ((((/* implicit */unsigned long long int) var_2)) * (((var_3) << (((var_9) - (4015117447449665544ULL))))));
            }
        } 
    } 
}
