/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162719
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) * (((/* implicit */int) ((((((/* implicit */int) var_5)) / (((/* implicit */int) var_12)))) >= (((/* implicit */int) (signed char)56)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1))))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_5 [i_1 + 2] [i_0] [i_0])), ((unsigned char)70))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            arr_12 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)32767))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_2]))))))))) : (arr_4 [i_2] [i_3] [i_3])));
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_7 [i_2])))) && (((/* implicit */_Bool) (unsigned short)40362))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                var_19 ^= ((/* implicit */_Bool) ((short) arr_11 [6LL] [6LL]));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((5924160604186145539ULL) - (((/* implicit */unsigned long long int) 2737280286U)))))));
            }
        }
        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                arr_23 [i_2] [i_5 + 1] [i_6] = ((/* implicit */unsigned short) (short)32034);
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_5 [i_5 + 1] [i_5 - 1] [i_5 + 1]) ? (((/* implicit */int) arr_5 [i_5 - 1] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_5 [i_5 + 1] [i_5 - 1] [i_5 + 1]))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (5460707021268628535LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5]))))), (max((((/* implicit */long long int) (unsigned short)48659)), (2426575073103118186LL))))))));
                /* LoopSeq 4 */
                for (signed char i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    arr_26 [i_2] [i_5 - 1] [i_5] [i_6] [i_7] = ((/* implicit */signed char) ((unsigned int) var_4));
                    arr_27 [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)35182)) << (((((/* implicit */int) (signed char)77)) - (73)))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_22 [i_2] [i_6] [i_7 + 1]))));
                }
                for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    arr_30 [i_5 + 1] [i_5] [i_2] [i_5 - 1] = ((/* implicit */unsigned short) max((-6679036623322061192LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)13)) || (((/* implicit */_Bool) arr_20 [i_2] [i_5 - 1] [i_5 - 1] [i_2])))))));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_23 = ((var_4) <= (((/* implicit */long long int) max(((+(((/* implicit */int) (signed char)-111)))), (((((/* implicit */_Bool) 7855401622909274274ULL)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) var_14))))))));
                        arr_35 [i_2] [i_2] = ((/* implicit */unsigned int) (signed char)-16);
                    }
                }
                for (signed char i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                {
                    arr_38 [i_2] [i_5] [i_6] [i_10] [i_6] = ((/* implicit */unsigned int) (signed char)-93);
                    arr_39 [i_2] [i_2] [i_5 - 1] [i_2] [i_6] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_0 [i_5 - 1]), (arr_0 [i_6])))) >> (((((/* implicit */int) (short)-9581)) + (9611)))));
                    arr_40 [i_2] [i_10] [i_2] [i_10] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_19 [i_2])) ? (max((((/* implicit */long long int) (_Bool)1)), (arr_10 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_1))))))), (((((-6679036623322061192LL) + (9223372036854775798LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5 + 1] [i_5 + 1] [i_5 - 1])))))));
                }
                for (signed char i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                {
                    arr_43 [i_5] [i_2] = ((/* implicit */unsigned char) 26929676);
                    var_24 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_28 [i_2] [i_5] [i_6] [i_11]), (((/* implicit */unsigned long long int) 274877874176LL))))) ? (12817798028528301295ULL) : (max((arr_24 [i_2] [i_5] [i_6] [i_11] [i_11]), (((/* implicit */unsigned long long int) arr_25 [i_2] [i_2] [i_2] [i_2]))))))));
                }
            }
            arr_44 [i_2] = ((/* implicit */unsigned char) -423333695);
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                for (unsigned int i_13 = 1; i_13 < 9; i_13 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((4135756155U), (((/* implicit */unsigned int) (unsigned short)48659))));
                        arr_49 [i_2] [i_5] [i_2] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1307482660U)) && (((/* implicit */_Bool) max((18188340988008972908ULL), (((/* implicit */unsigned long long int) ((arr_5 [i_2] [i_2] [i_2]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))))))));
                        arr_50 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((-6679036623322061192LL) > (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            arr_53 [i_2] [i_2] [i_12] [i_13 - 1] [i_14] = ((/* implicit */unsigned int) arr_47 [i_2]);
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (~(((long long int) (-(arr_36 [i_2] [i_2] [i_2] [i_2] [i_2])))))))));
                            var_27 = ((/* implicit */unsigned long long int) arr_15 [i_5 + 1] [i_5 - 1] [i_13 + 1]);
                            var_28 = ((int) 6679036623322061191LL);
                            var_29 *= ((/* implicit */unsigned int) (~(max((((/* implicit */int) (signed char)-75)), (arr_16 [i_5 - 1] [i_13 + 1] [i_13 + 1])))));
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_16 = 2; i_16 < 8; i_16 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_17 = 1; i_17 < 9; i_17 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                    {
                        var_30 = ((/* implicit */_Bool) (signed char)75);
                        arr_64 [i_2] [i_15 - 1] [i_2] [i_15 - 1] [i_17] [i_15 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2])) ? (((arr_5 [i_2] [i_15 + 1] [i_18]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)3)))) : (((/* implicit */int) var_3))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_68 [i_2] [i_2] [i_2] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_19])) ? (arr_10 [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1887)) ? (561359806U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32035))))))));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-40)) ? (arr_24 [i_2] [i_2] [i_15] [i_16 - 2] [i_17 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_16] [i_16] [i_17] [i_17 - 1]))))))));
                        arr_69 [i_2] [i_15] [i_2] [i_17 + 1] [i_17 + 1] [i_15 - 2] [i_15] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) -7087824714673430488LL)))))));
                    }
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) > ((-9223372036854775807LL - 1LL))));
                }
                for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    arr_73 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                    /* LoopSeq 1 */
                    for (long long int i_21 = 0; i_21 < 10; i_21 += 2) 
                    {
                        var_33 ^= ((/* implicit */signed char) ((2426575073103118181LL) > ((-9223372036854775807LL - 1LL))));
                        var_34 ^= ((/* implicit */int) arr_34 [i_21] [i_20] [i_20] [i_16 + 2] [i_15] [i_2]);
                        var_35 &= ((/* implicit */int) arr_70 [i_15 - 1] [i_15 - 2] [i_15 - 2] [i_15] [i_15 - 1]);
                        arr_76 [i_21] [i_21] [i_16] [i_16 + 1] [i_21] [i_2] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_46 [i_15] [i_15]) ? (((/* implicit */int) var_5)) : (arr_21 [i_2] [i_2] [i_2] [i_2])))) / (18446744073709551594ULL)));
                        arr_77 [i_2] [i_15 - 1] [i_2] = ((/* implicit */int) arr_15 [i_15 - 2] [i_15 - 1] [i_16 + 2]);
                    }
                    arr_78 [i_2] [i_2] [i_15 - 1] [i_2] = ((/* implicit */signed char) (((-(4294967295U))) >= (((/* implicit */unsigned int) var_10))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_22 = 0; i_22 < 10; i_22 += 1) 
                {
                    arr_82 [i_15] [i_2] = ((/* implicit */long long int) var_12);
                    arr_83 [i_2] [i_16] [i_16 + 1] [i_15 - 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32035)) % (arr_72 [i_16] [i_16] [i_16 + 1] [i_16] [i_16 - 1] [i_2])));
                    arr_84 [i_2] [i_15 + 1] [i_16] [i_15 + 1] = ((/* implicit */signed char) (-(4U)));
                }
                arr_85 [i_2] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)29974)) / (((/* implicit */int) (short)277))))) : (((((/* implicit */_Bool) arr_21 [i_2] [i_15 - 1] [i_2] [i_16 + 2])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 10; i_23 += 2) 
                {
                    for (short i_24 = 2; i_24 < 9; i_24 += 1) 
                    {
                        {
                            arr_92 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_80 [i_24 - 1] [i_24 - 2] [i_24 - 2] [i_24 - 1] [i_24]))));
                            arr_93 [i_2] [i_15 + 1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (short)-32749)) != (((/* implicit */int) (unsigned short)49814))));
                            arr_94 [i_2] [i_23] [i_15] [i_15] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_51 [i_16 + 2] [i_16 + 2] [i_16 - 1])) & (((/* implicit */int) arr_81 [i_2] [i_16 - 2] [i_16] [i_16 + 1]))));
                            arr_95 [i_2] [i_15] [i_15] [i_2] [i_23] [i_24 + 1] = ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) == (((((/* implicit */_Bool) 3990228402U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14))))));
                        }
                    } 
                } 
                var_36 += ((/* implicit */unsigned short) -901081644);
            }
            var_37 = 0ULL;
            var_38 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35768)) / (((/* implicit */int) arr_65 [i_15] [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 - 1]))))) ? (arr_74 [i_15 - 1] [i_15 + 1] [i_15 - 2] [i_15 - 1] [i_15 + 1] [i_15]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (unsigned short)16493)) : (((/* implicit */int) (signed char)103)))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_25 = 0; i_25 < 10; i_25 += 2) 
        {
            for (unsigned int i_26 = 0; i_26 < 10; i_26 += 1) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    {
                        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (unsigned char)242))));
                        arr_105 [i_2] [i_2] [i_2] [i_27] [i_26] [i_26] = ((/* implicit */unsigned short) -251033950);
                    }
                } 
            } 
        } 
    }
    for (short i_28 = 4; i_28 < 9; i_28 += 1) 
    {
        arr_108 [i_28] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) 8697116890900805113LL)), (var_0))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
        var_40 = ((/* implicit */unsigned short) 1170757603);
        /* LoopNest 2 */
        for (signed char i_29 = 0; i_29 < 12; i_29 += 2) 
        {
            for (unsigned long long int i_30 = 2; i_30 < 11; i_30 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_31 = 1; i_31 < 9; i_31 += 2) 
                    {
                        for (short i_32 = 3; i_32 < 11; i_32 += 1) 
                        {
                            {
                                var_41 += ((/* implicit */short) var_13);
                                arr_118 [i_28] [i_29] [i_28] [i_30 + 1] [i_30 + 1] [i_32 - 1] = ((/* implicit */long long int) (signed char)-77);
                                arr_119 [i_28] [i_28 - 3] [i_28] [i_28] [i_32] = ((/* implicit */int) ((_Bool) 0U));
                            }
                        } 
                    } 
                    arr_120 [i_28] [i_29] [i_30] = ((/* implicit */long long int) max((1762188906), (var_10)));
                    arr_121 [i_28] [i_29] [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_107 [i_28] [i_28])) ? (((((/* implicit */_Bool) -7865174407022020621LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (17179869183LL))) : (((/* implicit */long long int) max((((/* implicit */int) var_11)), (-1170757605))))))) ? (((/* implicit */int) ((arr_113 [i_28] [i_28 - 1] [i_28 + 3] [i_30 - 1] [i_30 - 2]) < (((((/* implicit */_Bool) 3471316065U)) ? (((/* implicit */int) arr_109 [i_28 + 1] [i_28 + 1])) : (((/* implicit */int) (signed char)84))))))) : (((/* implicit */int) ((signed char) max((2895139731394209356ULL), (((/* implicit */unsigned long long int) 2261047120U))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_33 = 2; i_33 < 9; i_33 += 4) 
        {
            var_42 = 0ULL;
            /* LoopSeq 1 */
            for (int i_34 = 2; i_34 < 11; i_34 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_35 = 0; i_35 < 12; i_35 += 4) 
                {
                    arr_130 [i_28] [i_34 - 1] [i_33 - 1] [i_28] = ((/* implicit */signed char) arr_128 [i_28] [i_34 - 1] [i_33 + 2] [i_28]);
                    var_43 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)16258))));
                }
                /* LoopSeq 2 */
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    var_44 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-1))));
                    arr_133 [i_28] [i_28] = ((/* implicit */int) ((((/* implicit */_Bool) arr_114 [i_28] [i_33 - 2])) ? (arr_114 [i_28] [i_33 - 1]) : (arr_114 [i_28] [i_33 + 3])));
                    arr_134 [i_28] = ((/* implicit */int) (short)-22080);
                    arr_135 [i_28 - 1] [i_34] [i_33] [i_36] &= ((/* implicit */unsigned int) 2147483647);
                }
                for (unsigned short i_37 = 0; i_37 < 12; i_37 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_38 = 0; i_38 < 12; i_38 += 4) 
                    {
                        arr_141 [i_28] [i_28] [i_34] [i_28] [i_34 - 2] = ((/* implicit */signed char) var_7);
                        var_45 ^= ((/* implicit */long long int) var_15);
                    }
                    arr_142 [i_28] [i_33 + 3] [i_34] [i_34] [i_37] = ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) 0U))));
                    /* LoopSeq 1 */
                    for (short i_39 = 0; i_39 < 12; i_39 += 2) 
                    {
                        arr_145 [i_28] [i_28] [i_28] [i_28 + 3] [i_28 + 3] [i_28 + 1] = (!(((/* implicit */_Bool) (signed char)38)));
                        var_46 ^= ((/* implicit */unsigned long long int) -1760227018);
                    }
                }
            }
            arr_146 [i_28 + 2] [i_28 + 2] [i_28] = ((/* implicit */unsigned long long int) var_11);
            arr_147 [i_28] = ((/* implicit */short) ((unsigned long long int) 67092480ULL));
            arr_148 [i_28] [i_28] [i_33 + 3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (arr_111 [i_28])));
        }
        for (signed char i_40 = 3; i_40 < 8; i_40 += 4) 
        {
            arr_151 [i_28] [i_28] = ((/* implicit */unsigned short) arr_2 [i_40 - 3] [i_28 - 4]);
            arr_152 [i_28] = ((/* implicit */signed char) arr_0 [i_28 - 4]);
        }
    }
    for (long long int i_41 = 4; i_41 < 18; i_41 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_42 = 1; i_42 < 1; i_42 += 1) 
        {
            for (unsigned long long int i_43 = 0; i_43 < 19; i_43 += 1) 
            {
                {
                    arr_159 [i_41 + 1] [i_41 + 1] [i_41 - 1] = ((/* implicit */short) var_3);
                    var_47 = (unsigned short)35422;
                    arr_160 [i_42] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (max((((/* implicit */long long int) (short)23147)), (7865174407022020621LL)))))) ? ((~(7865174407022020621LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_154 [i_41 - 1] [i_41 - 4]), (arr_154 [i_41 - 1] [i_41 - 4]))))));
                }
            } 
        } 
        arr_161 [i_41 + 1] = ((/* implicit */unsigned short) max((2016252435600607238ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
        arr_162 [i_41 - 1] = ((/* implicit */_Bool) (~(max((arr_4 [i_41 - 1] [i_41 - 1] [i_41 - 2]), (arr_4 [i_41 - 1] [i_41 - 4] [i_41 - 3])))));
    }
}
