/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174665
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
    var_20 = ((/* implicit */unsigned char) 2147483647);
    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_19)), (max((((/* implicit */unsigned short) var_16)), (var_4)))))), ((((-(var_11))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_18)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0 - 2] [i_0 + 2] [(unsigned short)0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 - 1] [i_1]))))) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_3 [i_0 + 2] [i_0 + 2])), (var_11))) >= (((/* implicit */unsigned long long int) max((-9223372036854775807LL), (((/* implicit */long long int) arr_0 [i_0 + 2])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_4 [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0 - 3] [i_1] [i_2] [i_3 + 1] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_2 [i_0] [i_2])), (2147483647)));
                            var_22 -= arr_2 [i_0 - 3] [i_0 + 1];
                        }
                    } 
                } 
            }
        } 
    } 
}
