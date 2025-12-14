/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163007
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
    var_20 -= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) -1417787258))))), (((((/* implicit */_Bool) 12823766600566336427ULL)) ? (12823766600566336427ULL) : (((/* implicit */unsigned long long int) var_19)))));
    var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_19))));
    var_22 = var_9;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_4] [i_2] [i_3] [i_4] [9] = ((/* implicit */_Bool) arr_10 [i_2] [i_4]);
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_0)))))) | (((((/* implicit */int) (short)0)) & (var_9)))));
                                arr_14 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3])) ? (((((/* implicit */_Bool) 12823766600566336427ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : (12823766600566336427ULL))) : (18446744073709551612ULL)));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_15)), (arr_10 [i_2] [(unsigned char)6])))));
                    arr_16 [i_2] [2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (short)26990))));
                }
            } 
        } 
    } 
}
