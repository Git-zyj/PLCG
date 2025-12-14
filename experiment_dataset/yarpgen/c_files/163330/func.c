/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163330
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) % (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [(signed char)1] [(signed char)1] [i_0])) : (((/* implicit */int) arr_0 [i_2 - 3]))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            var_17 ^= (+(((((arr_11 [i_0] [i_1] [6LL] [i_3] [i_2 + 2]) + (2147483647))) >> (((arr_5 [i_3] [i_2 + 1] [i_3]) - (12282913461537317823ULL))))));
                            arr_12 [i_0] [i_1] [i_2] [i_0] [i_4 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_18 &= ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_2 - 3])) == (arr_11 [i_2 + 1] [i_1] [11] [i_3] [i_5])));
                            var_19 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [0ULL]))) : (arr_2 [i_2 - 3] [i_2 - 3]))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(12447732190843035495ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0])))))))))));
                            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */int) var_11);
                        }
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 2) 
                        {
                            arr_20 [i_0] [i_0] [i_3] [i_0] [(short)14] [i_0] &= ((/* implicit */_Bool) min((arr_8 [i_1] [i_1]), ((+(((/* implicit */int) ((var_12) != (arr_8 [i_0] [i_1]))))))));
                            var_20 = ((/* implicit */unsigned short) ((max(((_Bool)1), ((_Bool)1))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_6])) ? (((/* implicit */int) arr_17 [i_0] [(short)5] [i_2] [i_3] [i_6])) : (((/* implicit */int) arr_17 [i_0] [(short)11] [i_2] [i_2] [i_2])))) : ((+((+(((/* implicit */int) var_9))))))));
                        }
                        var_21 ^= (+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 2) 
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_0] [i_3] &= (+(((/* implicit */int) arr_7 [i_1] [i_7 + 1])));
                            var_22 ^= ((/* implicit */long long int) var_6);
                            var_23 &= ((/* implicit */unsigned short) var_2);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7 - 1] [i_7 - 1])) - (((/* implicit */int) arr_19 [i_7 + 1] [i_7] [i_7 - 1] [i_7 + 2] [i_7 + 1]))));
                        }
                        arr_25 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) var_11);
                    }
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        arr_28 [i_0] = (~(arr_8 [(short)10] [i_0]));
                        arr_29 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_0] [i_2 - 3] [i_2] [i_2 + 2] [i_2])) ? (arr_11 [i_2 - 3] [i_2 - 3] [i_2] [i_2 + 2] [i_2]) : (arr_11 [2ULL] [i_2 - 3] [i_2] [i_2 + 2] [i_2 + 2]))) - (arr_11 [i_1] [i_2 - 3] [i_2] [i_2 + 2] [i_8])));
                        var_25 = ((/* implicit */_Bool) max((((/* implicit */int) var_5)), ((+(((/* implicit */int) (_Bool)1))))));
                        arr_30 [i_0] [i_1] [i_0] [i_8] = ((/* implicit */short) var_0);
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 12; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            arr_37 [i_0] [i_0] [i_2] [i_2] [i_10] = ((/* implicit */unsigned char) ((arr_36 [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2 - 3]) >> (((arr_27 [i_10] [i_9] [i_9 + 2] [i_9] [i_9]) - (3266798581U)))));
                            var_26 = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_0] [i_9 + 2] [i_2])) % (((/* implicit */int) arr_18 [9] [i_9 + 2] [i_9 + 2]))));
                            var_27 ^= ((/* implicit */unsigned short) ((arr_31 [i_9 + 2] [i_1] [i_2 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_9 + 2] [i_1] [i_2 - 1] [i_10] [i_2])))));
                            arr_38 [i_0] [i_0] [i_2] [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (int i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_14)) <= (var_8)));
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0] [4ULL] [i_2 + 2] [i_9] [(unsigned short)2]))) : (arr_23 [i_0] [i_9 + 2] [i_2 + 1] [i_0] [i_0])));
                            var_29 = ((/* implicit */signed char) (+((((_Bool)0) ? (((/* implicit */int) (signed char)7)) : (2147483647)))));
                        }
                        arr_42 [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_2] [4] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0] [i_9] [i_0])))) ? (((((var_2) + (2147483647))) << (((arr_5 [i_0] [i_0] [i_9]) - (12282913461537317844ULL))))) : (((/* implicit */int) arr_19 [i_9 + 3] [i_9 + 3] [7] [i_9 + 3] [i_9 + 3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_2] [4] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0] [i_9] [i_0])))) ? (((((var_2) + (2147483647))) << (((((arr_5 [i_0] [i_0] [i_9]) - (12282913461537317844ULL))) - (5717991610510515409ULL))))) : (((/* implicit */int) arr_19 [i_9 + 3] [i_9 + 3] [7] [i_9 + 3] [i_9 + 3])))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 1; i_12 < 14; i_12 += 1) 
                        {
                            arr_45 [i_0] [i_1] [i_2 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_43 [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (var_0)));
                            var_30 = ((((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_10))))) | ((+(((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [(unsigned short)13] [i_1])))));
                        }
                        arr_46 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) == (((arr_23 [(_Bool)1] [i_1] [7ULL] [i_2] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0])))))));
                    }
                    for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) ((max((arr_27 [i_0] [(signed char)3] [i_2] [i_2 - 2] [(signed char)3]), (arr_27 [i_0] [i_1] [i_0] [i_2 - 1] [i_0]))) * (max((arr_27 [14U] [i_0] [14U] [i_2 + 1] [i_13]), (arr_27 [i_0] [i_1] [i_2] [i_2 - 3] [i_0])))));
                        /* LoopSeq 2 */
                        for (long long int i_14 = 0; i_14 < 15; i_14 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)226)) || (((/* implicit */_Bool) 16128))));
                            var_33 = ((/* implicit */long long int) arr_10 [i_0]);
                            var_34 = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [i_0] [i_1] [(_Bool)0] [i_13] [i_14])))) ^ (((/* implicit */int) arr_7 [i_0] [i_2 - 2])))));
                        }
                        for (long long int i_15 = 0; i_15 < 15; i_15 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned int) var_16);
                            arr_56 [i_0] [i_0] [i_0] [(short)7] = ((/* implicit */short) ((arr_10 [i_15]) % (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_1])))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 15; i_16 += 4) 
                    {
                        for (long long int i_17 = 0; i_17 < 15; i_17 += 4) 
                        {
                            {
                                var_36 ^= ((/* implicit */unsigned long long int) ((unsigned char) max((1937348744U), (8387584U))));
                                var_37 = ((/* implicit */unsigned short) ((var_14) / ((-(((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                    arr_61 [i_0] [1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 2] [i_2])) - (((/* implicit */int) arr_35 [i_2 - 1] [i_2 - 2] [i_0] [i_2 - 2] [i_2 + 1]))))) ? (((((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 2] [i_2])) * (((/* implicit */int) arr_35 [i_2 - 1] [i_2 - 2] [i_0] [(short)2] [i_2 + 1])))) : (((/* implicit */int) var_16)));
                }
            } 
        } 
        arr_62 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_54 [i_0] [i_0] [0ULL] [i_0] [(signed char)14])) ^ (var_0)))) ? (arr_54 [i_0] [i_0] [i_0] [(signed char)4] [i_0]) : (((arr_54 [i_0] [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */int) arr_44 [i_0] [i_0] [i_0]))))));
    }
    var_38 &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))) ? (((-5016114882312714344LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) var_12))))));
    var_39 = ((var_7) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) var_2)));
    var_40 = ((/* implicit */_Bool) var_1);
}
