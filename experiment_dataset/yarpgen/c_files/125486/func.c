/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125486
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_17), ((+(31040264)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32758))))) ? (((/* implicit */int) ((signed char) -2147483630))) : (((/* implicit */int) (unsigned short)65520))))) : (var_12)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_19 = ((/* implicit */short) ((arr_0 [i_1 - 1]) & (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((arr_0 [i_1]) % (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (2147483642)))))))));
                    arr_6 [i_1] [i_2] = ((/* implicit */unsigned short) arr_5 [i_0]);
                    var_20 = ((/* implicit */_Bool) min((var_20), ((!(((/* implicit */_Bool) (signed char)11))))));
                    var_21 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) * (arr_2 [i_0]))) <= (arr_4 [i_0 + 2] [i_1 - 1] [i_2])))), (arr_1 [i_0])));
                }
                for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                    var_22 = ((/* implicit */int) arr_5 [i_3]);
                    var_23 = min((var_8), ((+(arr_2 [i_1 + 1]))));
                    arr_10 [i_3] = ((/* implicit */signed char) min((arr_1 [i_3 + 1]), (min((((/* implicit */unsigned long long int) var_4)), (arr_1 [i_3 - 1])))));
                    var_24 = ((/* implicit */int) min((((arr_4 [i_0 + 2] [i_1] [i_3 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1]))))), (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (arr_4 [i_0 - 1] [i_1] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1])))))));
                }
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)12)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((unsigned int) 8388607U)))));
                                arr_20 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                                arr_21 [i_0] [i_0] [i_0] [i_6] [i_5] [i_6] [i_4] = ((/* implicit */int) ((unsigned char) (!(((((/* implicit */_Bool) arr_4 [i_0] [i_4] [i_5])) || (((/* implicit */_Bool) (signed char)0)))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned long long int) arr_4 [i_4] [i_1] [i_0]);
                }
                arr_22 [i_0 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0 + 2] [i_1] [i_1 - 1] [i_1 + 1]))));
            }
        } 
    } 
    var_28 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
    var_29 = ((/* implicit */signed char) (+((-(var_14)))));
    var_30 = ((/* implicit */_Bool) ((signed char) var_2));
}
