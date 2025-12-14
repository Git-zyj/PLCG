/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119884
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) ((_Bool) ((unsigned int) arr_3 [i_1 + 2] [i_1 + 2])));
                var_19 = ((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_0]);
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [13U] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32756)) / (((/* implicit */int) (unsigned short)51734))));
                                var_20 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_1 - 1] [i_1 + 3] [i_1 + 1] [i_2 - 1]);
                                arr_16 [i_0] [i_1 + 3] [i_0] [(signed char)5] [i_1] = ((/* implicit */unsigned long long int) 4294967295U);
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) var_18)) * ((~(((((/* implicit */int) var_18)) / (((/* implicit */int) (unsigned short)53309)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((var_16) + (2061262389)))))), (((-1LL) ^ (((/* implicit */long long int) ((var_13) ^ (((/* implicit */int) var_18)))))))));
    var_23 = (-((-(var_14))));
    var_24 = var_15;
    var_25 = (signed char)-3;
}
