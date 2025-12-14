/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108121
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
    var_13 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
    var_14 = ((/* implicit */unsigned long long int) 117440512LL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [9ULL] [i_0] = ((/* implicit */unsigned int) ((signed char) 117440512LL));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned char) -117440513LL);
                        arr_11 [i_1] [i_1] [i_1] [i_3] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned char) arr_0 [i_1]));
                        var_15 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 18446744073709551600ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (((arr_2 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [14ULL] [i_1] [i_1])))))));
                        arr_12 [2LL] = ((/* implicit */unsigned long long int) var_11);
                    }
                    var_16 += ((/* implicit */short) (+(1879048192)));
                    arr_13 [i_0] [i_0] [i_2] = (+(max((-117440512LL), (arr_8 [i_0] [i_2]))));
                    var_17 *= ((/* implicit */unsigned int) (~(min((var_9), (((/* implicit */long long int) ((int) 0ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_4] [i_4] [i_2] [i_4] [8LL] [i_5] = ((/* implicit */int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (var_7))) / (1U)))));
                                var_18 = ((/* implicit */short) arr_14 [i_0] [i_0] [(signed char)15]);
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_4] [i_1]) : (((/* implicit */long long int) arr_9 [i_0] [(signed char)11] [i_1] [15ULL] [i_4] [(unsigned short)5]))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) 117440512LL)) ? (-1LL) : (((/* implicit */long long int) 0U)))) - (arr_3 [i_5]))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_24 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (0ULL) : (((/* implicit */unsigned long long int) 127LL))))) ? ((+(arr_23 [i_0] [i_6] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) (_Bool)0)))) >= (max((((/* implicit */int) var_11)), (var_10)))))))));
                    arr_25 [i_6] = ((/* implicit */_Bool) arr_17 [(unsigned char)16] [i_1] [0ULL] [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 1) 
                        {
                            {
                                arr_32 [i_0] [i_1] [i_7] [i_7] [i_7] [i_1] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) != ((-(var_2)))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_7] [i_7])) || (((/* implicit */_Bool) (~(arr_18 [i_7] [i_7]))))));
                                var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(arr_26 [i_1] [i_6] [i_1] [i_0])))), (((var_4) / (((/* implicit */unsigned long long int) arr_26 [i_6] [i_6] [(_Bool)1] [i_6]))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 4) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (-(var_10)))))))));
                        var_23 += ((/* implicit */int) ((short) (unsigned short)65532));
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) (signed char)19);
                            var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_9 - 2])) && (((/* implicit */_Bool) arr_3 [i_9 - 1]))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_22 [i_9 - 2])) : (((/* implicit */int) arr_22 [i_9 - 1]))));
                            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)768)) ? (((/* implicit */unsigned long long int) -16384)) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) -1LL)) : (18446744073709551615ULL)))));
                        }
                        for (unsigned char i_12 = 3; i_12 < 14; i_12 += 2) 
                        {
                            arr_43 [i_12] [i_12] [2ULL] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0])) << ((((+(arr_2 [i_1] [i_12]))) + (2377974872591624074LL)))));
                            arr_44 [16ULL] [16ULL] [(unsigned short)2] [i_9] [i_9] [i_10] [16ULL] = ((/* implicit */unsigned short) -117440513LL);
                        }
                        var_28 = ((/* implicit */unsigned int) 18446744073709551610ULL);
                        var_29 += ((/* implicit */unsigned short) ((unsigned char) var_5));
                    }
                    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        var_30 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_1] [i_9] [i_0])))) && (arr_40 [i_1] [i_9 - 1] [i_13]))) || (((/* implicit */_Bool) arr_36 [(_Bool)1] [6] [i_0] [i_0] [(signed char)2] [i_0]))));
                        arr_48 [i_13] [i_1] [i_9] [i_13] = arr_37 [11ULL] [i_13] [i_9] [i_9] [i_9] [(_Bool)1];
                        arr_49 [i_13] = (((_Bool)1) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (short)128)));
                        /* LoopSeq 2 */
                        for (short i_14 = 0; i_14 < 17; i_14 += 2) 
                        {
                            var_31 += ((/* implicit */unsigned short) (((((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_37 [10] [i_14] [10] [(_Bool)1] [i_14] [i_0])))) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [15ULL]))) : (4294967291U))) - (54U))))) == (max(((-(((/* implicit */int) (unsigned char)248)))), (((/* implicit */int) (unsigned char)255))))));
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_30 [i_0] [i_9 + 1] [i_9] [i_0] [i_14])) ? (((/* implicit */int) arr_38 [i_0] [i_9 + 1] [i_1] [i_13] [i_14] [i_0])) : (((/* implicit */int) arr_38 [i_0] [i_9 + 1] [i_14] [i_14] [i_14] [i_9 + 1])))) << (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned long long int i_15 = 2; i_15 < 15; i_15 += 2) 
                        {
                            arr_56 [i_13] [i_1] [15ULL] [i_1] [i_1] = ((/* implicit */_Bool) arr_7 [i_0] [6ULL] [i_9]);
                            var_33 = (!(((/* implicit */_Bool) var_7)));
                            var_34 ^= ((/* implicit */int) min((((((/* implicit */_Bool) ((int) arr_23 [i_1] [i_1] [i_15]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(short)2]))) : (5U))))), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                        arr_57 [i_13] [i_1] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) * (10U)));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_35 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9 + 1])) ? (((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_1 [i_9])) : (var_4)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_3 [i_16])))))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 21U))))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), ((unsigned char)8)));
                        var_37 = ((/* implicit */_Bool) (unsigned short)2);
                        var_38 = ((/* implicit */unsigned long long int) max((((unsigned int) (unsigned char)8)), (((/* implicit */unsigned int) var_10))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
                    {
                        arr_65 [i_17] [i_1] [i_9] [i_1] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((516096U) >> (((((/* implicit */int) var_6)) - (96)))))) ? (min((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)32767))))), (arr_61 [i_17] [i_9] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (((+(((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) (short)(-32767 - 1)))))))) == (((/* implicit */int) ((min((-9223372036854775803LL), (((/* implicit */long long int) (unsigned char)248)))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))))))));
                    }
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [(signed char)14] [i_0] [i_9] [i_0] [(signed char)14] [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_9])) : (((((/* implicit */_Bool) ((var_5) >> (((135291469824ULL) - (135291469821ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0] [(unsigned char)15] [i_9] [i_1] [i_0] [10]))) : ((-(var_4)))))));
                }
                /* vectorizable */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_70 [i_18] [i_1] [8ULL] |= ((/* implicit */int) (~(var_3)));
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 17; i_19 += 2) 
                    {
                        for (unsigned short i_20 = 1; i_20 < 13; i_20 += 4) 
                        {
                            {
                                var_41 += ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_4 [i_20 + 2]))));
                                var_42 -= ((/* implicit */unsigned char) 134152192U);
                                arr_75 [i_0] [i_18] [i_18] [i_1] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */int) (short)12)) ^ (((/* implicit */int) arr_6 [i_1] [i_18] [i_20]))));
                                arr_76 [i_0] [i_1] [i_18] [i_20] [i_20] = ((/* implicit */short) arr_3 [i_0]);
                                var_43 = ((unsigned long long int) (_Bool)0);
                            }
                        } 
                    } 
                    arr_77 [i_0] [4ULL] [i_18] = ((/* implicit */signed char) (-(arr_3 [i_1])));
                    arr_78 [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [1] [i_18] [(short)3] [i_1] [3] [3]))))) ? (-1) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)8))))));
                }
                arr_79 [(_Bool)0] [(_Bool)0] [i_1] &= ((/* implicit */unsigned long long int) arr_40 [i_0] [i_0] [i_1]);
                var_44 = ((/* implicit */_Bool) ((min((max((-1), (((/* implicit */int) var_8)))), (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_62 [i_0])))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0LL)) + (var_4)))) && (((/* implicit */_Bool) ((arr_72 [i_0] [i_0] [i_1] [i_1]) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 255))))))))));
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : ((~((~(18446744073709551595ULL)))))));
}
