/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115381
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
    var_12 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        arr_9 [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)157))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_1 + 2] [i_1 + 2]), (((/* implicit */unsigned char) arr_7 [i_1 + 4] [i_1 + 2] [i_1 + 3] [i_3 + 2])))))) : (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1])) ? (arr_4 [i_1 - 2] [i_1 + 4] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 4])))))));
                        var_13 ^= ((/* implicit */unsigned short) arr_8 [i_0]);
                        arr_10 [i_0] [i_0] [i_3] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_2] [i_2])) ? (arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 2]) : (arr_4 [i_1 + 2] [i_1 + 2] [i_1]))), (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_3 - 1] [i_3 - 1])) ? (arr_4 [i_1 + 3] [i_3] [i_3]) : (arr_4 [i_1 - 2] [i_2] [i_3 - 1])))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned char) (~(max((min((0LL), (((/* implicit */long long int) arr_6 [i_0] [i_0])))), (((/* implicit */long long int) arr_0 [i_1] [i_2]))))));
                            var_15 = ((/* implicit */short) (+(min((((/* implicit */int) (unsigned char)64)), (((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))))))));
                            arr_13 [i_0] [i_1] [i_3] [i_3 + 1] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_2] [i_3]);
                            var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_5 [i_1] [i_2] [i_3] [i_1])))) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) min(((unsigned char)192), (arr_6 [i_0] [i_0]))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3 + 1] [i_3] [i_2] [i_2] |= ((/* implicit */unsigned long long int) (~(arr_1 [i_3 + 1])));
                            arr_18 [i_0] [i_1] [i_2] [i_0] [i_3] [i_5] [i_3] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (short)19589)), (arr_4 [i_0] [i_1 + 3] [i_2])))));
                            var_17 = ((/* implicit */unsigned long long int) max(((~(483752634098392461LL))), (((/* implicit */long long int) max((arr_16 [i_5 + 1] [i_3 + 2]), (arr_16 [i_5 + 1] [i_3 + 2]))))));
                        }
                    }
                    for (short i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) (~((+(((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (short)2906)) : (((/* implicit */int) (short)-19606))))))));
                        var_19 = ((/* implicit */int) max((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_15 [i_1] [i_6] [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (unsigned char)48)))), (((/* implicit */int) (!((_Bool)1))))))), (min((-4757240975099832787LL), ((-9223372036854775807LL - 1LL))))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-(max(((~(arr_19 [i_2] [i_1]))), (((/* implicit */unsigned long long int) max((2147483647), (((/* implicit */int) arr_16 [i_6] [i_0]))))))))))));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 11; i_7 += 2) 
                    {
                        var_21 |= (+(min((((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_7])) ? (-9208865341813429669LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-11609)), (arr_4 [i_2] [i_1] [i_0])))))));
                        var_22 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_6 [i_1 - 2] [i_7 + 1]))))));
                    }
                    var_23 = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) (short)32763)))) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) (short)32750)))), (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_8 [i_1 + 3]))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) var_5);
}
