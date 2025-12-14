/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135435
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
    var_17 = ((/* implicit */long long int) var_1);
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) var_0)) : (((var_4) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1))))))));
    var_19 ^= ((/* implicit */long long int) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_2)))))));
        var_21 = arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_6 [i_0] [i_0] [3U]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_0] [0U] [i_2]))))) : (((((/* implicit */_Bool) (short)-23527)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1] [(short)13] [i_0]))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] = (((~(arr_5 [i_3 - 3] [(short)4] [i_0]))) * ((~(((1085481578U) << (((((/* implicit */int) (unsigned char)128)) - (100))))))));
                                var_23 |= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (short)-32647))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_11 [i_0] [i_0] [i_0] [(_Bool)1] [12LL] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65519))))) : (((unsigned int) arr_4 [15LL] [i_3]))))));
                                var_24 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 - 3] [i_4 - 1] [i_4 - 1] [i_0] [i_4 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_3 - 4] [i_4 - 1] [i_4 - 3] [1LL] [i_0] [i_4 - 1])))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) > (((/* implicit */int) arr_2 [12LL] [(short)8] [i_2])))) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_8 [(unsigned char)8] [i_1] [(_Bool)1])) : (((((/* implicit */int) arr_6 [7LL] [i_1] [i_2])) % (((/* implicit */int) var_10)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((signed char) var_6))))))));
                    var_26 += ((/* implicit */unsigned int) min((min((((unsigned long long int) arr_10 [i_0] [i_1] [i_2])), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [4ULL] [i_0] [i_1] [i_0])) + (((/* implicit */int) var_13))))))));
                }
            } 
        } 
    }
    for (int i_5 = 3; i_5 < 12; i_5 += 3) 
    {
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) min(((((_Bool)1) ? (((((/* implicit */_Bool) -952873534)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_5 - 2] [i_5 - 1] [(signed char)16] [i_5 - 2] [(short)16] [i_5])) && (((/* implicit */_Bool) arr_4 [i_5] [i_5])))))))), (((/* implicit */long long int) ((unsigned char) arr_16 [i_5 - 3]))))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 3) 
        {
            for (unsigned int i_7 = 4; i_7 < 12; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_5] [i_6] [i_6] [i_8] [12ULL] [i_7]))))) ? ((+(arr_15 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_7 + 1] [i_7] [i_8])))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_8] [i_6 - 1] [i_5 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_6] [i_7] [i_8]))));
                        arr_25 [i_5 - 1] [i_5 - 1] [i_7] [(_Bool)1] [i_5] [i_5] = ((/* implicit */_Bool) var_5);
                        var_30 += ((/* implicit */signed char) 9223372036854775807LL);
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        var_31 &= ((/* implicit */long long int) var_1);
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_32 [(_Bool)1] [i_6 + 2] [i_6] [5] [i_6] = ((/* implicit */_Bool) (signed char)51);
                            arr_33 [i_10] [i_9] [i_9] [9ULL] [i_7 - 2] [i_6 - 1] [i_5] = ((/* implicit */unsigned int) arr_26 [i_5] [i_6] [i_6]);
                            var_32 ^= ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(signed char)5] [i_6] [i_7])) ? (952873533) : (((/* implicit */int) (unsigned short)812))))), ((~(var_9))))) + (((/* implicit */unsigned long long int) ((var_8) ^ (((/* implicit */int) arr_2 [i_5 - 2] [i_6 - 1] [i_7 - 2]))))));
                            arr_34 [2LL] [(unsigned short)6] [i_7] [i_9] [i_10] [i_10] [i_10] |= ((/* implicit */signed char) arr_17 [i_10] [9ULL] [9ULL]);
                        }
                        for (short i_11 = 2; i_11 < 10; i_11 += 3) 
                        {
                            arr_37 [(short)11] [i_6] [i_6] [i_6] [12ULL] [i_9] [i_11 + 1] = ((/* implicit */signed char) min((((unsigned long long int) ((arr_27 [i_5] [i_5] [i_7] [i_5]) - (((/* implicit */int) arr_28 [i_5] [i_5] [i_5 - 1] [5U] [i_5] [i_5] [i_5]))))), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)40)))))))));
                            arr_38 [i_5] [i_6] [i_5] [(_Bool)1] [i_11 + 2] &= ((/* implicit */short) ((((-952873545) & (arr_27 [i_11 + 1] [i_7 - 4] [i_6 - 1] [i_5 + 1]))) / ((~(arr_31 [i_5] [i_5 - 1] [i_5] [i_5] [i_5 + 1])))));
                            var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [12U]))) : (arr_20 [i_5] [i_6] [i_7 - 3] [(short)12]))))) ? (((/* implicit */int) (unsigned char)0)) : ((+(((/* implicit */int) arr_6 [i_5] [9LL] [i_5]))))));
                            var_34 = ((/* implicit */short) ((_Bool) (+(8170590065230129337ULL))));
                        }
                    }
                    for (short i_12 = 4; i_12 < 10; i_12 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) -952873535)) : (18446744073709551604ULL))))), (((/* implicit */unsigned long long int) (~(min((var_7), (((/* implicit */long long int) var_14)))))))));
                        arr_42 [10ULL] [i_6] [10ULL] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [1U] [i_7])) ? (arr_20 [i_12] [i_7] [i_6 - 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))) : (var_7))) : (((arr_1 [i_5]) % (((/* implicit */long long int) var_15))))))) || (((((arr_35 [(_Bool)1] [i_5]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [i_5] [i_5 - 1] [i_5] [i_5]))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(short)5] [10LL] [i_12])) ? (((/* implicit */int) arr_7 [i_12] [i_12])) : (((/* implicit */int) var_3)))))))));
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (arr_3 [(short)14])))) ? (arr_31 [i_5 - 2] [i_6 - 1] [i_7] [6LL] [i_5]) : (((/* implicit */int) arr_2 [i_5] [i_6 + 1] [i_7 + 1])))), (((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [15U])) && ((_Bool)1)))) * (((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [1U] [i_6] [i_7])))))))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) (short)2894)), (((/* implicit */long long int) var_4))))) ? (((((/* implicit */_Bool) arr_0 [i_12])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_12])))) : ((((!(((/* implicit */_Bool) arr_14 [i_13])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29869))))) : (((int) 4294967290U))))));
                            var_38 = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_5 - 1] [i_7 - 3] [i_12 - 1]))));
                        }
                    }
                    for (signed char i_14 = 2; i_14 < 12; i_14 += 4) 
                    {
                        var_39 = arr_21 [i_5] [(signed char)9] [i_7 - 4] [i_14];
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_8)) : (((arr_29 [i_5] [i_5] [i_5 - 3] [(short)0] [i_5]) >> (((arr_29 [1ULL] [1ULL] [i_7] [i_7] [i_7 - 3]) - (11683060346006225782ULL)))))));
                        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_26 [i_5] [3ULL] [i_5])))), (((/* implicit */int) var_1))))) ? (((unsigned int) ((unsigned char) arr_13 [12] [12]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_7 - 3] [i_14 - 1])))))));
                        var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [i_5 - 2] [8ULL] [i_6] [14U] [i_14] [i_14 + 1])), (arr_44 [(unsigned char)10] [i_6] [i_6] [i_6 + 1] [i_6])))) ? (((/* implicit */unsigned long long int) arr_13 [7LL] [i_7 - 1])) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)24813))))), (((arr_3 [i_7]) & (((/* implicit */unsigned long long int) var_7)))))))))));
                    }
                }
            } 
        } 
    }
}
