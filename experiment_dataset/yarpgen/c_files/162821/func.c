/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162821
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [(unsigned char)12] [i_0] [1ULL])), (var_6)));
                            var_17 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0 + 1] [i_3]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 2] [i_3]))) : (4294967294U))))));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (unsigned char)248))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22))) : (min((((/* implicit */long long int) (unsigned char)248)), (-3203885669254684478LL)))));
                            arr_9 [i_3] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1]);
                        }
                    } 
                } 
                arr_10 [i_1] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */int) (unsigned char)17))))) : ((((_Bool)1) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_1])))))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)252))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_4))));
}
