/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168725
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) min((var_12), (((arr_3 [i_4]) + (4205332283U)))));
                                var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((4294967284U) << (((arr_4 [i_2] [i_2] [i_2]) - (4174570108U)))))))) : (((arr_3 [i_2]) * (arr_3 [i_4])))));
                                var_14 = ((/* implicit */long long int) 4U);
                                var_15 += ((/* implicit */unsigned int) -4214181824167353895LL);
                                arr_14 [i_0] [i_0] [i_2] [11LL] [i_0] = arr_7 [i_0];
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_9 [i_1] [10LL] [i_0]))));
                arr_15 [i_0] [i_1] = ((long long int) ((1851789057U) + (((unsigned int) arr_8 [i_0] [i_0] [i_0] [i_1]))));
                var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) ((unsigned int) arr_9 [i_1] [8LL] [i_0]))) ? (((/* implicit */long long int) max((arr_1 [10U] [i_1]), (arr_3 [16U])))) : (arr_9 [18U] [16U] [i_1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_6);
}
