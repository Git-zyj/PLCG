/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111582
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
    var_12 = ((/* implicit */unsigned char) var_3);
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_4))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_6 [11] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) ((signed char) (unsigned char)140));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 1])) < (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 2]))));
                        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_3]))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 23; i_5 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_5] [i_0] [i_0] [(unsigned char)1] [i_0] = ((/* implicit */short) ((unsigned char) arr_0 [i_1 - 2] [i_1 + 1]));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_5] [(unsigned short)4] [i_5] [i_5 - 1] [i_1 - 1])) : (arr_9 [23U] [i_2] [(unsigned char)8] [i_2])));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_17 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-((+(arr_1 [i_2])))))), (min((var_0), (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
                            arr_18 [i_6] [i_6] [9] [9] [i_6] = ((/* implicit */int) arr_4 [i_6] [i_6] [22] [i_6]);
                            var_17 = ((/* implicit */unsigned short) max((arr_9 [i_0] [i_2] [i_2] [i_4]), (((arr_9 [i_0] [i_1 - 1] [i_2] [i_6]) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                            arr_19 [i_6] [i_4] [i_2] [i_2] [(unsigned char)17] [(unsigned char)17] = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_1 + 1] [i_1] [i_1] [i_1])) / (min((((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_2] [(signed char)20] [i_6] [i_6])), (arr_9 [i_1 - 1] [i_1 - 2] [i_6] [i_6])))));
                        }
                        var_18 = var_10;
                        arr_20 [i_1 - 2] [i_2] [i_1 - 2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_0] [i_1] [i_2] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_0] [i_0])) : (((/* implicit */int) var_3))))) - (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1 - 1] [i_2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_2] [i_1 - 1] [i_0]))) : (arr_3 [i_1]))))) + (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) 1876268004)) - (arr_1 [i_0]))))))));
                        arr_21 [i_4] [i_0] [(unsigned short)10] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((((/* implicit */_Bool) 9196930758976770745LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_0 [i_1 - 2] [i_0])))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (long long int i_8 = 2; i_8 < 23; i_8 += 4) /* same iter space */
                        {
                            arr_27 [i_0] [4ULL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7] [i_8 - 2] [(unsigned short)18] [i_7] [i_7] [i_1 + 1] [i_7]))) + (arr_3 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [13ULL])), (var_10)))) : (((((/* implicit */int) arr_11 [i_8] [(short)8] [(unsigned char)4] [i_0])) - (((/* implicit */int) var_4)))))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1876268033)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) : (3329711801U)));
                        }
                        for (long long int i_9 = 2; i_9 < 23; i_9 += 4) /* same iter space */
                        {
                            var_20 *= ((/* implicit */unsigned int) min((var_9), ((+(((/* implicit */int) var_6))))));
                            var_21 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_8 [i_0] [(unsigned char)0] [i_1 - 1] [i_9 + 1])))) ? ((-(1876268004))) : (((/* implicit */int) var_11)));
                            var_22 = ((((arr_15 [3LL] [i_9 - 1] [i_2] [(unsigned short)5] [i_1 + 1]) >= (arr_15 [i_0] [i_9 + 1] [i_2] [i_7] [i_1 + 1]))) ? (max((arr_15 [i_0] [i_9 - 2] [(unsigned char)17] [(unsigned char)4] [i_1 + 1]), (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_11)))));
                            arr_30 [i_0] [i_1] [i_0] [i_7] [(unsigned char)2] = ((/* implicit */unsigned char) var_10);
                            var_23 = arr_2 [i_9 - 1];
                        }
                        for (int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            var_24 += ((/* implicit */short) var_2);
                            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_31 [i_0] [i_0] [i_1 - 2] [i_1] [i_1 + 1] [i_1 + 1] [3U])), (arr_8 [i_1 + 1] [i_1 + 1] [i_1] [19LL])))) > (var_2)));
                            var_26 = ((/* implicit */unsigned short) (((-(var_2))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1])))));
                        }
                        for (int i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            var_27 -= arr_33 [(unsigned short)21] [22];
                            arr_39 [i_11] [i_1] [i_1] [i_1 - 2] [i_1] [i_1] = ((/* implicit */unsigned char) var_0);
                        }
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_32 [i_0] [10] [i_7] [i_2] [i_0])) : (((/* implicit */int) arr_33 [i_2] [i_2]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_2] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))) ? (((712616806U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [2] [i_2] [i_7] [i_2] [i_0] [i_7]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_41 [i_0] [i_1 - 1] [i_2] [i_7] [i_12])), (min((arr_31 [(unsigned char)23] [i_0] [i_12] [i_2] [i_12] [i_2] [i_1]), (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                            var_30 *= ((/* implicit */signed char) (((+(((arr_26 [(unsigned short)21] [(unsigned short)21] [i_7] [i_7] [i_7]) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))))) + (((((((/* implicit */_Bool) -1876268004)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))) : (var_1))) ^ (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)79), ((unsigned char)225)))))))));
                        }
                        for (signed char i_13 = 1; i_13 < 23; i_13 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_2] [i_7] [(unsigned short)6]);
                            var_32 *= ((/* implicit */signed char) ((((/* implicit */int) var_6)) >= (((((/* implicit */_Bool) arr_28 [i_13 - 1] [i_2] [i_2] [i_1 - 1])) ? (((/* implicit */int) arr_28 [i_13 + 1] [i_2] [(unsigned short)18] [i_1 - 1])) : (((/* implicit */int) arr_28 [i_13 + 1] [2ULL] [i_13 - 1] [i_1 - 1]))))));
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_7] [i_13])) : (((/* implicit */int) arr_0 [i_2] [i_2])))), (((/* implicit */int) arr_5 [i_0] [i_2] [17ULL])))))));
                            arr_47 [i_0] [i_1 - 2] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)28))));
                        }
                        arr_48 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */short) (-((+(8885552549804627297LL)))));
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(var_9))), (((((/* implicit */_Bool) arr_26 [i_7] [1] [(unsigned char)1] [i_1 + 1] [(unsigned char)1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned char) (unsigned short)39155)))));
                    }
                    arr_49 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(min((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_22 [i_0] [i_1] [i_1] [i_2] [i_1]))))))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) var_10))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 20; i_14 += 3) 
    {
        for (long long int i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    for (unsigned short i_17 = 3; i_17 < 16; i_17 += 3) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) 
                        {
                            {
                                arr_61 [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)6824))));
                                var_35 = ((/* implicit */short) max((((/* implicit */int) arr_24 [i_14] [i_15] [i_16] [i_17])), (min(((+(-185916209))), (((/* implicit */int) arr_34 [i_14]))))));
                                arr_62 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) arr_3 [i_14]);
                            }
                        } 
                    } 
                } 
                var_36 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [(short)5] [i_15]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_14])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) arr_36 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_4 [i_15] [i_15] [i_14] [i_14]))))) : (arr_38 [i_15] [i_15])))));
                var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (+(((((/* implicit */int) arr_57 [i_14] [i_15] [0LL])) - (((/* implicit */int) var_11)))))))));
                /* LoopSeq 4 */
                for (unsigned char i_19 = 4; i_19 < 18; i_19 += 2) 
                {
                    arr_65 [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3606823626U)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (unsigned char)133))));
                    arr_66 [(signed char)18] [(unsigned short)12] [(signed char)18] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (arr_54 [i_14])))) ? (arr_42 [i_14] [(unsigned short)8] [i_19] [i_14] [i_19] [i_19 - 1] [(unsigned short)18]) : (min((((/* implicit */int) arr_0 [i_14] [4])), (arr_22 [3] [(short)0] [(short)12] [i_15] [(unsigned char)1]))))), ((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_43 [i_14] [i_15] [i_15] [i_15] [i_15] [i_19])), (var_3))))))));
                }
                /* vectorizable */
                for (unsigned short i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 20; i_21 += 3) 
                    {
                        for (unsigned short i_22 = 0; i_22 < 20; i_22 += 2) 
                        {
                            {
                                arr_74 [i_15] [i_21] [i_22] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_36 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [(short)15]))));
                                var_38 = ((((/* implicit */_Bool) arr_3 [i_22])) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) var_11)));
                                var_39 -= ((/* implicit */long long int) ((arr_23 [i_20]) + (((/* implicit */int) arr_36 [i_14] [i_15] [(short)14] [i_20] [i_21] [i_22] [i_22]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_23 = 3; i_23 < 18; i_23 += 2) 
                    {
                        arr_77 [3] [i_20] [i_15] [i_14] = ((/* implicit */long long int) var_5);
                        arr_78 [i_14] [i_20] [i_14] [i_14] = ((((/* implicit */_Bool) arr_23 [i_23 - 1])) ? (arr_23 [i_23 - 2]) : (((/* implicit */int) var_6)));
                        var_40 = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_23 + 2] [i_23 + 2]))));
                    }
                    var_41 = ((/* implicit */long long int) ((signed char) (unsigned short)50693));
                    arr_79 [i_14] [i_14] [i_20] = ((/* implicit */unsigned char) arr_68 [i_15]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 4) 
                    {
                        for (unsigned char i_25 = 1; i_25 < 19; i_25 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */int) arr_80 [i_14] [i_14] [i_14] [i_20] [i_25 + 1])) >= (((/* implicit */int) arr_58 [i_24] [i_24] [i_25 + 1] [i_25] [i_25 + 1])))))));
                                arr_84 [i_25] [i_24] [i_20] [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_14] [(unsigned char)20] [i_15] [(unsigned char)10] [i_24] [i_20])))))));
                                var_43 = ((/* implicit */long long int) max((var_43), (arr_82 [i_14] [i_15] [9] [i_24] [i_25 - 1])));
                            }
                        } 
                    } 
                }
                for (unsigned short i_26 = 0; i_26 < 20; i_26 += 2) /* same iter space */
                {
                    arr_87 [i_15] [i_15] [i_15] [i_14] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) arr_86 [i_26] [i_14] [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_15]))) : (min((((/* implicit */long long int) var_4)), (7043307263782361605LL)))))));
                    var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (arr_72 [i_26] [i_15] [i_14] [i_14] [i_26])))) + (arr_55 [i_14] [i_14]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (8193449795202848649LL))))));
                    /* LoopSeq 2 */
                    for (long long int i_27 = 0; i_27 < 20; i_27 += 4) 
                    {
                        var_45 = ((/* implicit */long long int) var_0);
                        arr_92 [i_14] [i_14] [i_14] [i_26] [(unsigned short)6] = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_27])) || (((/* implicit */_Bool) arr_34 [i_15]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_28 = 0; i_28 < 20; i_28 += 4) 
                    {
                        arr_95 [i_15] [i_28] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_40 [(signed char)7] [i_28] [i_15] [i_15] [i_15] [i_14]))));
                        var_46 = ((/* implicit */unsigned short) -1159291865);
                    }
                    arr_96 [i_26] [i_15] [(short)10] = ((/* implicit */long long int) arr_8 [i_14] [i_14] [i_15] [i_26]);
                }
                for (unsigned short i_29 = 0; i_29 < 20; i_29 += 2) /* same iter space */
                {
                    arr_101 [i_14] [i_29] [i_29] [i_29] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((7919005941664230760LL), (((/* implicit */long long int) (unsigned short)27643))))) ? (-3912957444121094812LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1459)))))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) + (((((/* implicit */_Bool) arr_44 [(unsigned short)13] [(unsigned short)19] [15ULL] [i_15] [(unsigned char)11] [i_14])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_14] [i_14] [13ULL] [i_14] [i_14])))))))));
                    var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) arr_15 [i_29] [i_15] [i_14] [i_14] [i_14]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_30 = 0; i_30 < 20; i_30 += 4) 
                    {
                        for (int i_31 = 3; i_31 < 19; i_31 += 3) 
                        {
                            {
                                arr_108 [i_14] [i_15] [i_31] [i_30] [i_31] = ((long long int) arr_107 [i_14] [i_31]);
                                arr_109 [i_31] [i_30] [(_Bool)1] [i_31 + 1] [i_30] [i_29] [i_15] = ((/* implicit */unsigned short) var_8);
                                arr_110 [i_31] [i_31] [i_31] [i_15] [i_31] = ((/* implicit */int) ((((/* implicit */_Bool) min((1876268004), (((/* implicit */int) (signed char)-89))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((short) arr_45 [i_14] [i_15] [i_29] [i_14]))) : (((((/* implicit */_Bool) arr_53 [i_30] [18] [18])) ? (((/* implicit */int) arr_28 [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) var_6)))))))));
                                arr_111 [i_31] [19U] = ((/* implicit */short) (-(min((arr_37 [(_Bool)1] [i_30] [i_31] [i_31 - 3] [20]), (arr_37 [i_29] [i_30] [i_30] [i_31 + 1] [i_29])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
