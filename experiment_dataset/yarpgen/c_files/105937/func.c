/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105937
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
    var_17 = min((((/* implicit */unsigned int) ((var_9) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) max((17777661445993281171ULL), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : ((-(1879048192U))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_18 &= ((/* implicit */unsigned char) arr_1 [1]);
                            /* LoopSeq 3 */
                            for (short i_4 = 2; i_4 < 10; i_4 += 1) 
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(1879048192U)))), ((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (arr_2 [i_3]))))))))));
                                arr_13 [i_4 - 2] [i_4] [i_3] [i_3] [i_1 - 2] [i_0] [i_0] |= ((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */unsigned short) (+(arr_12 [i_1])));
                                var_20 *= ((/* implicit */_Bool) (-((((_Bool)1) ? (min((((/* implicit */unsigned int) arr_9 [10] [i_3])), (arr_3 [i_0] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_4)), ((short)511)))))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 1) 
                            {
                                arr_19 [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) 9U)) ? (arr_11 [i_0] [4ULL] [4ULL] [4ULL] [i_1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1 + 3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1 + 3] [4LL])))));
                                var_21 = ((/* implicit */_Bool) arr_1 [i_1 - 1]);
                                arr_20 [i_0] [i_1] [i_0] [i_0 + 1] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1 + 2] [i_1 + 1] [i_1 + 3] [i_1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 + 2] [i_1 + 2]))) : (((arr_12 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (short)2878)))))));
                            }
                            arr_21 [i_1] [i_1] [i_2 + 1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1]))));
                            arr_22 [i_0] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (unsigned short)16863)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) 0LL))))) ? ((~(max((((/* implicit */unsigned long long int) var_1)), (arr_2 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 2])))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_15 [i_1] [i_1] [i_1] [i_1] [i_0]) : (0LL))), (min((((/* implicit */long long int) var_3)), (0LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)63))) - (arr_12 [i_1])))))))));
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) min((arr_15 [i_0] [i_0] [i_0] [i_1] [i_0 + 2]), (((/* implicit */long long int) (+((~(1879048212U))))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        for (signed char i_9 = 3; i_9 < 9; i_9 += 3) 
                        {
                            {
                                arr_30 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_26 [i_1] [i_1] [i_7] [(unsigned short)10]);
                                arr_31 [i_1] = ((/* implicit */signed char) max(((-(arr_6 [i_8 + 2] [i_1 + 2] [i_8 + 2]))), (((((/* implicit */_Bool) arr_6 [i_8 - 1] [i_1 + 3] [i_7])) ? (arr_6 [i_8 + 2] [i_1 + 1] [i_1 + 1]) : (arr_6 [i_8 - 1] [i_1 - 2] [i_1 - 2])))));
                                var_24 = ((/* implicit */short) (~(((/* implicit */int) max((arr_9 [i_0] [i_1]), (((/* implicit */short) arr_4 [i_0] [i_1 + 2])))))));
                                arr_32 [i_0 + 2] [i_1] = ((136146466) != (((/* implicit */int) (short)511)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_25 = ((/* implicit */short) var_11);
}
