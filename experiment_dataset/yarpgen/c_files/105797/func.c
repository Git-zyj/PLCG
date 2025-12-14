/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105797
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0 + 3] [i_2] = ((/* implicit */long long int) (~(((unsigned long long int) min((arr_1 [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_2 [i_2])))))));
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) min((((unsigned long long int) arr_0 [i_2])), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_2])), (((unsigned int) arr_1 [i_2] [i_0]))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_13 += ((/* implicit */long long int) var_5);
                                var_14 = ((/* implicit */short) ((unsigned char) ((int) max((((/* implicit */signed char) arr_3 [i_0])), (arr_4 [i_0 + 1])))));
                            }
                        } 
                    } 
                    arr_15 [i_1] = arr_1 [i_1] [i_2];
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */unsigned int) var_2);
}
