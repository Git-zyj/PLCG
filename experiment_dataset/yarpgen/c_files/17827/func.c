/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17827
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 += ((/* implicit */int) (short)-8623);
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)25486)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8623))) : (17705743498401953284ULL))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_22 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 741000575307598332ULL)))) != (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_14)) : (arr_2 [i_1] [i_1]))))) ? (arr_0 [2LL] [i_1]) : (max((17705743498401953287ULL), (((/* implicit */unsigned long long int) (short)-8623))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)37))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [(unsigned short)1]))))) ? (var_11) : (((((/* implicit */_Bool) 4972894890132258570ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (18446744073709551615ULL))))))))));
    }
    var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_15))))))))))));
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_25 |= ((/* implicit */unsigned int) arr_0 [14] [i_2]);
        var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)2984))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [10LL]))) & (arr_6 [i_2])))))) ? ((~(min((((/* implicit */unsigned long long int) var_2)), (arr_6 [i_2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_6)))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 365866759U)) ? (max((16ULL), (((/* implicit */unsigned long long int) 1527249671U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8928))))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_2] [i_3]))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_13 [i_5] [i_2] [i_3] [i_5] [i_3] [16ULL]), (((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)31)))))))) : (arr_9 [i_2] [i_3] [i_3]))))));
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (arr_7 [i_6] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_4] [i_5] [i_6] [i_2] [i_2])))))))))));
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-29756)) + (2147483647))) >> (((((/* implicit */int) var_12)) - (38)))))))))));
                                var_31 += ((/* implicit */unsigned int) min((arr_10 [i_2] [i_3] [i_4]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
                                var_32 += ((/* implicit */long long int) ((max(((~(arr_10 [i_5] [i_3] [i_3]))), (((/* implicit */long long int) max((var_14), (((/* implicit */unsigned int) (short)17218))))))) >= (arr_10 [i_5] [i_5] [i_5])));
                            }
                        } 
                    } 
                    var_33 -= ((/* implicit */long long int) ((((2127603038U) >= (2127603048U))) ? (((/* implicit */int) ((unsigned short) arr_10 [i_2] [i_3] [i_2]))) : (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (short)-8622)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_15))))));
                    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) var_13))));
                }
            } 
        } 
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_4))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
    {
        var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_7]))) : (arr_0 [i_7] [i_7])));
        var_37 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7])) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    }
    for (long long int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
    {
        var_38 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_17 [i_8])) ? (arr_0 [i_8] [i_8]) : (((/* implicit */unsigned long long int) 1155805988U)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [16U] [i_8]))))))));
        arr_22 [i_8] [i_8] |= ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */unsigned long long int) max((arr_18 [i_8]), (((/* implicit */unsigned int) var_3))))) : (((((/* implicit */_Bool) max((var_11), (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (arr_17 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121)))))) : (arr_16 [i_8] [i_8])))));
    }
}
