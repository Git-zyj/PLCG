/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156915
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
    var_12 = ((((/* implicit */_Bool) var_5)) ? (((long long int) (+(((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) var_8)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                var_13 = ((/* implicit */_Bool) var_4);
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (var_5) : (((/* implicit */long long int) arr_3 [i_0 - 1] [i_1 - 1])))))));
                var_15 = ((/* implicit */long long int) var_8);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            arr_16 [i_0] [i_4] [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) (((_Bool)1) ? ((~(((/* implicit */int) (signed char)-106)))) : (((/* implicit */int) (unsigned short)20026))));
                            arr_17 [i_4] [i_4] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3])) ? (((/* implicit */long long int) arr_8 [i_0 - 1] [i_1 - 2] [i_1 - 2])) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_5)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned int) ((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 2]) | (arr_8 [i_0 + 1] [i_3] [i_6])));
                            arr_25 [i_0] [i_0] [i_3] [i_3] [i_7] |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1 - 2]))));
                            var_17 = ((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_11)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_19 [i_0] [i_0 + 2] [i_0 - 1] [i_0]))))))));
            }
            for (unsigned int i_8 = 3; i_8 < 10; i_8 += 4) 
            {
                var_19 -= ((/* implicit */int) ((unsigned int) (signed char)85));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0 + 2] [i_1 - 2] [i_8 + 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_13 [i_1 - 2] [i_1 - 2] [i_8] [i_8 - 1] [i_8])));
                var_21 = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_8] [i_8 + 1] [i_0 + 1] [i_0]))));
            }
            var_22 = ((/* implicit */int) max((var_22), (arr_20 [i_0] [i_1] [i_0 + 1] [i_1])));
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
            {
                arr_30 [i_0] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0 + 1] [i_1 + 1] [i_9] [i_1] [i_9]))) - (arr_13 [i_0] [i_0 - 1] [i_0] [i_1] [i_1 - 1])));
                arr_31 [i_9] [i_1] [i_0] = ((/* implicit */_Bool) ((((-7837249222212863975LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)45502)) - (45502)))));
                arr_32 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_11);
            }
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
            {
                arr_37 [i_0] [i_1 - 1] [i_10] = ((/* implicit */unsigned long long int) ((var_3) == (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((arr_4 [i_0 - 1]) || (((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)20034)) : (((/* implicit */int) var_0))))));
                arr_38 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (arr_3 [i_1] [i_1]) : (arr_12 [i_0] [i_0] [6U] [i_1 - 1]));
            }
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
            {
                arr_41 [i_0 - 1] [i_1] [i_1] [i_11] &= ((((/* implicit */unsigned int) (~(arr_22 [i_0] [i_0] [i_1 - 2] [i_1] [i_1] [i_1] [(signed char)3])))) ^ (((unsigned int) arr_8 [i_0] [i_1 + 1] [i_1 + 1])));
                arr_42 [i_0 - 1] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (7837249222212863974LL) : (((/* implicit */long long int) arr_33 [i_0 - 1] [i_1 + 1]))));
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_11])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_13] [i_11] [i_12] [i_13] [i_12])) ? (((/* implicit */int) arr_46 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_9))))) : (-6412646243603867833LL)));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((965965592032311382LL) & (((/* implicit */long long int) arr_33 [i_1] [i_11]))))) ? (((((/* implicit */_Bool) arr_8 [i_11] [i_12] [i_11])) ? (arr_44 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0 + 2]))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (~(9223372036854775807LL))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            arr_50 [i_0 + 2] [i_14] [i_0 + 2] = ((/* implicit */_Bool) ((arr_33 [i_0 + 1] [i_14]) | (arr_33 [i_0] [i_14])));
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                var_27 = ((/* implicit */_Bool) ((816051322) | (((((/* implicit */_Bool) arr_1 [i_14] [i_15])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))));
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned int i_17 = 2; i_17 < 9; i_17 += 2) 
                    {
                        {
                            arr_61 [(signed char)5] [i_15] [i_16] = ((/* implicit */signed char) (-(((/* implicit */int) arr_26 [i_0 - 1] [i_0 + 2] [i_17 + 1]))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))))));
                            var_29 = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17591425010840906642ULL))) == (((/* implicit */unsigned long long int) 266338304U))));
                        }
                    } 
                } 
            }
            for (long long int i_18 = 0; i_18 < 11; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_19 = 1; i_19 < 9; i_19 += 1) 
                {
                    for (long long int i_20 = 4; i_20 < 9; i_20 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_64 [i_0 + 1] [i_19 - 1])) : (((/* implicit */int) arr_2 [i_0 + 1])))))));
                            var_31 = ((((/* implicit */_Bool) 855319062868644973ULL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */signed char) ((unsigned char) var_5));
                /* LoopNest 2 */
                for (unsigned short i_21 = 3; i_21 < 7; i_21 += 2) 
                {
                    for (int i_22 = 0; i_22 < 11; i_22 += 2) 
                    {
                        {
                            arr_75 [i_0] [i_14] [i_14] [i_21] = ((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_22 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_0 - 1]) == (((/* implicit */int) var_10))))))));
                            arr_76 [i_22] [i_21 + 3] [i_21] [i_14] [3] = ((/* implicit */long long int) 274877775872ULL);
                            arr_77 [i_0 - 1] [i_21] [i_0 - 1] [i_21] [i_0 - 1] [i_18] [i_22] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 7837249222212863974LL)))) ? (-7837249222212863974LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_23 = 1; i_23 < 8; i_23 += 3) 
                {
                    var_33 += ((/* implicit */signed char) ((unsigned short) arr_40 [i_0] [i_0 + 2]));
                    var_34 *= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((((_Bool)1) ? (((/* implicit */int) arr_74 [i_0] [i_14] [2] [i_0] [i_14] [8])) : (var_8))) : (((/* implicit */int) arr_36 [i_0 + 2] [i_0 + 2]))));
                }
                /* LoopSeq 4 */
                for (unsigned int i_24 = 0; i_24 < 11; i_24 += 1) 
                {
                    var_35 += ((/* implicit */_Bool) (-(arr_59 [i_14] [i_0] [i_0] [i_14])));
                    /* LoopSeq 2 */
                    for (unsigned int i_25 = 0; i_25 < 11; i_25 += 3) 
                    {
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) arr_71 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0]))));
                        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */_Bool) arr_69 [i_0 - 1] [i_14])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_0 + 2] [i_14]))))))));
                        arr_87 [i_25] [i_0] = ((/* implicit */signed char) arr_56 [i_0] [i_14] [i_25]);
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((17591425010840906642ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20828)))))) ? (var_3) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-8))))))))));
                    }
                    for (int i_26 = 0; i_26 < 11; i_26 += 1) 
                    {
                        arr_90 [i_26] [i_26] [i_18] [i_24] [i_26] = arr_48 [i_18] [i_18] [i_26];
                        arr_91 [i_26] [i_26] [i_26] = ((((/* implicit */_Bool) (short)30828)) ? (((((/* implicit */int) (_Bool)1)) + (-2127155679))) : (arr_51 [i_0 + 1] [i_14] [i_14]));
                    }
                }
                for (signed char i_27 = 0; i_27 < 11; i_27 += 1) 
                {
                    arr_94 [i_0] [i_14] [i_18] [i_27] = ((/* implicit */short) ((4137571605U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)20828)))));
                    /* LoopSeq 2 */
                    for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
                    {
                        var_39 = ((((/* implicit */_Bool) -7837249222212863974LL)) ? (((/* implicit */int) arr_63 [i_0] [i_14] [i_28 - 1] [i_0 - 1])) : (((/* implicit */int) arr_63 [i_0] [i_0] [i_28 - 1] [i_0 - 1])));
                        arr_97 [i_0] [i_14] [i_18] = ((/* implicit */signed char) arr_7 [i_0] [i_14] [i_28]);
                        arr_98 [i_0] [i_14] [i_18] [i_27] [i_28] &= ((/* implicit */unsigned int) var_6);
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        arr_101 [i_0] [i_14] [i_29] [i_27] [i_29] = (~(((/* implicit */int) (signed char)39)));
                        arr_102 [i_0] [i_29] [i_18] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_0] [i_18] [i_18]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_92 [i_0] [i_14] [i_14] [i_27] [i_0]))) : (var_11)));
                        var_40 = ((/* implicit */unsigned int) ((long long int) arr_40 [i_0] [i_0]));
                        var_41 ^= ((/* implicit */_Bool) ((((17591425010840906670ULL) == (((/* implicit */unsigned long long int) 2127155678)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20828))) : (arr_40 [i_0 + 2] [i_0 - 1])));
                        var_42 = ((/* implicit */signed char) ((short) arr_19 [i_0] [i_14] [i_18] [i_0]));
                    }
                    arr_103 [i_0] [i_14] [i_18] [i_18] [i_14] [i_27] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))));
                    var_43 = ((/* implicit */_Bool) arr_86 [i_0 - 1] [i_0] [i_14] [i_14] [i_14] [i_18] [i_27]);
                }
                for (long long int i_30 = 1; i_30 < 10; i_30 += 1) 
                {
                    var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) arr_72 [i_18] [i_14]))));
                    var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_0] [i_14] [i_18] [i_30]))))) / ((+(((/* implicit */int) arr_89 [i_14] [2] [i_14] [i_18] [i_30 + 1])))))))));
                    var_46 = ((/* implicit */_Bool) max((var_46), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_18] [i_18] [i_0])) ? (arr_80 [i_0] [i_14] [i_18] [i_30]) : (((/* implicit */int) (_Bool)1))))) == (((((/* implicit */_Bool) var_7)) ? (var_4) : (var_4)))))));
                }
                for (int i_31 = 2; i_31 < 10; i_31 += 4) 
                {
                    var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2127155679)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned char)121)) / (((/* implicit */int) (short)-29293))))));
                    var_48 *= ((/* implicit */signed char) var_0);
                }
            }
        }
        /* LoopNest 2 */
        for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
        {
            for (short i_33 = 0; i_33 < 11; i_33 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_34 = 1; i_34 < 9; i_34 += 2) 
                    {
                        for (int i_35 = 1; i_35 < 9; i_35 += 3) 
                        {
                            {
                                var_49 *= ((arr_65 [i_0] [i_0 + 1]) + (arr_65 [i_0] [i_0 + 2]));
                                var_50 = ((/* implicit */_Bool) ((((/* implicit */long long int) -2127155659)) / (arr_88 [i_35 + 2] [i_34 + 2])));
                                arr_118 [i_34] [i_34] = ((/* implicit */unsigned int) -2127155667);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_36 = 1; i_36 < 10; i_36 += 4) 
                    {
                        for (short i_37 = 0; i_37 < 11; i_37 += 1) 
                        {
                            {
                                var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_56 [i_0] [i_33] [i_33]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0 + 2] [i_0] [i_33] [i_36] [i_37]))))) : (((/* implicit */long long int) arr_122 [i_32] [i_32] [i_32 - 1] [i_32 - 1] [i_33])))))));
                                var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0] [i_32 - 1] [i_33] [i_36 - 1] [i_33])) ? (((/* implicit */int) arr_24 [i_0] [i_32] [i_0] [i_36 + 1] [i_0])) : (((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_38 = 0; i_38 < 11; i_38 += 3) 
                    {
                        for (unsigned short i_39 = 0; i_39 < 11; i_39 += 4) 
                        {
                            {
                                arr_130 [i_0] [(signed char)8] [i_0 + 2] [i_0] [i_38] = ((/* implicit */signed char) (~(((/* implicit */int) arr_127 [i_0] [i_0] [i_0] [i_38] [i_39]))));
                                var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_110 [i_0 + 1] [i_32 - 1] [i_32 - 1])))))));
                                arr_131 [i_0] [i_32] [i_39] [i_38] [i_38] = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) arr_52 [i_38])))));
                                arr_132 [i_0] [i_39] [i_38] [7] [i_39] [i_33] = ((/* implicit */signed char) (short)18127);
                                arr_133 [i_38] = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                    arr_134 [i_0] [i_32] [i_32] [i_33] = ((/* implicit */_Bool) ((arr_93 [i_0 - 1] [i_32 - 1]) | (arr_93 [i_0 + 1] [i_32 - 1])));
                }
            } 
        } 
    }
    var_54 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (~(((/* implicit */int) min((var_6), (var_6))))))) : (var_11)));
    var_55 += ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -2003032347))))) / (var_8)));
}
