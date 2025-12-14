/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168439
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_0 [i_0] [i_0]))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))) : (arr_1 [i_0]))) : (arr_1 [(unsigned char)1])));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) arr_1 [i_0])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14)))))));
        arr_2 [i_0] = ((/* implicit */int) ((long long int) arr_1 [i_0 + 1]));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = (-(((/* implicit */int) arr_4 [i_1])));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 15; i_4 += 4) 
                    {
                        for (signed char i_5 = 3; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((arr_13 [i_4 + 2] [i_4] [i_4] [i_1]) + (((/* implicit */unsigned long long int) arr_5 [i_1]))));
                                var_19 -= ((/* implicit */unsigned long long int) var_13);
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) ((short) 2851447647U));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_7 = 4; i_7 < 14; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((int) (~(var_3))));
                            var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2801044608U)) ? (((/* implicit */int) arr_20 [i_6] [i_6] [i_2] [i_6 - 3])) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_2] [i_6 - 2]))));
                        }
                        for (unsigned int i_8 = 3; i_8 < 16; i_8 += 4) 
                        {
                            var_22 = var_5;
                            var_23 = ((/* implicit */unsigned int) 2330951716272810785LL);
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((int) (_Bool)1)))));
                            var_25 = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)90));
                            var_26 = ((/* implicit */int) ((unsigned int) var_2));
                        }
                        arr_26 [i_1] [i_1] [(unsigned short)2] = ((/* implicit */int) ((unsigned int) arr_20 [i_6 - 1] [i_1] [i_1] [i_6 - 1]));
                        arr_27 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [0] [i_1])) ? (arr_8 [(unsigned short)15] [i_1]) : (((/* implicit */unsigned long long int) 3779073437U))))) ? (arr_21 [i_1] [i_3] [i_6]) : (((/* implicit */int) arr_17 [i_1]))));
                    }
                    /* LoopSeq 4 */
                    for (int i_9 = 2; i_9 < 15; i_9 += 4) 
                    {
                        var_27 = ((((/* implicit */_Bool) arr_7 [i_9 + 2] [i_9 + 1])) ? (((/* implicit */int) arr_20 [i_9 - 2] [i_9 - 2] [i_1] [i_9])) : (((/* implicit */int) arr_7 [i_9 - 2] [i_9 + 1])));
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) 641775235U)) ? (((/* implicit */long long int) ((unsigned int) arr_5 [i_9]))) : (arr_18 [i_9 - 2] [i_9 + 2]))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        arr_33 [i_1] = ((/* implicit */signed char) arr_32 [i_1] [i_1] [i_3] [i_10]);
                        var_29 = ((/* implicit */_Bool) 3315449506U);
                    }
                    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        var_30 = 515893858U;
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            arr_38 [i_1] [i_2] [i_3] [6] [i_12] = ((/* implicit */unsigned short) var_7);
                            arr_39 [11U] [11U] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 515893859U)) ? (arr_34 [i_3] [i_1] [i_3] [i_11] [i_3]) : (((/* implicit */unsigned long long int) 4268248075U)))));
                        }
                    }
                    for (int i_13 = 3; i_13 < 16; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) ((unsigned long long int) 3315449506U));
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
                        {
                            var_32 = ((/* implicit */int) arr_37 [(unsigned short)9]);
                            var_33 += ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)78))));
                            var_34 += ((/* implicit */long long int) 515893841U);
                            var_35 = ((unsigned short) arr_12 [i_13 - 3] [i_1] [i_13 - 3] [i_13] [i_1] [i_2]);
                        }
                        for (long long int i_15 = 0; i_15 < 17; i_15 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned char) (-(arr_21 [i_2] [i_13] [i_13])));
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) 8838517834701811604LL))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
                    {
                        arr_50 [2ULL] [i_1] [i_1] [i_3] [i_16] = ((/* implicit */unsigned short) var_8);
                        arr_51 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((int) arr_29 [i_1] [i_2]));
                    }
                    for (unsigned int i_17 = 0; i_17 < 17; i_17 += 3) /* same iter space */
                    {
                        var_38 += ((/* implicit */long long int) arr_40 [i_1] [i_2] [i_2] [i_17]);
                        /* LoopSeq 3 */
                        for (unsigned short i_18 = 1; i_18 < 16; i_18 += 3) 
                        {
                            var_39 = ((/* implicit */long long int) ((int) (-(((/* implicit */int) var_14)))));
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((((/* implicit */_Bool) var_10)) ? (3779073437U) : (((/* implicit */unsigned int) arr_24 [i_18] [i_18 + 1] [i_18 + 1] [i_18] [i_18]))))));
                        }
                        for (unsigned long long int i_19 = 1; i_19 < 16; i_19 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned short) ((signed char) ((arr_5 [i_1]) / (((/* implicit */long long int) 3336192817U)))));
                            var_42 = ((/* implicit */unsigned long long int) arr_45 [i_19] [9] [i_19 + 1] [8] [i_19]);
                        }
                        for (unsigned short i_20 = 0; i_20 < 17; i_20 += 4) 
                        {
                            arr_63 [i_1] [i_2] [i_2] [i_17] [(signed char)10] [i_1] = ((/* implicit */long long int) arr_53 [i_20] [i_17] [i_1] [i_1] [i_2] [i_1]);
                            var_43 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_42 [i_1] [i_1] [i_2] [i_3] [i_17] [i_20] [i_20])))));
                            arr_64 [(signed char)12] [i_2] [i_1] [1ULL] [i_1] [i_1] [i_3] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_21 [i_17] [i_3] [i_1])))) : (arr_52 [i_1] [i_3] [i_17]));
                        }
                        var_44 = ((signed char) ((long long int) (signed char)-79));
                    }
                    for (unsigned int i_21 = 0; i_21 < 17; i_21 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_22 = 0; i_22 < 17; i_22 += 4) 
                        {
                            arr_70 [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6718))) : (arr_36 [i_1])));
                            var_45 = ((/* implicit */unsigned long long int) ((unsigned short) ((11417205251477413912ULL) / (((/* implicit */unsigned long long int) var_2)))));
                            var_46 += ((/* implicit */unsigned short) ((unsigned int) arr_5 [i_22]));
                            var_47 = ((/* implicit */long long int) ((unsigned int) arr_15 [i_1] [i_2] [i_3] [i_1] [i_1]));
                        }
                        arr_71 [(unsigned short)14] [i_2] [i_3] [i_1] = ((/* implicit */signed char) 4268248075U);
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_23 = 4; i_23 < 9; i_23 += 2) 
    {
        var_48 = ((/* implicit */int) ((signed char) arr_20 [i_23 - 4] [i_23] [i_23] [i_23 + 1]));
        /* LoopNest 2 */
        for (long long int i_24 = 0; i_24 < 10; i_24 += 3) 
        {
            for (int i_25 = 0; i_25 < 10; i_25 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_26 = 0; i_26 < 10; i_26 += 2) 
                    {
                        for (signed char i_27 = 0; i_27 < 10; i_27 += 2) 
                        {
                            {
                                var_49 = ((/* implicit */signed char) ((long long int) 3888330357328652695ULL));
                                var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((((/* implicit */_Bool) arr_76 [i_24] [8U])) ? (arr_23 [i_24] [i_24]) : (arr_41 [10] [i_24] [(short)1] [i_27]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_83 [i_26] [8]))))))));
                            }
                        } 
                    } 
                    var_51 *= ((/* implicit */unsigned short) ((_Bool) (unsigned short)32667));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_28 = 0; i_28 < 12; i_28 += 1) 
    {
        for (long long int i_29 = 0; i_29 < 12; i_29 += 2) 
        {
            {
                var_52 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_12 [i_28] [i_28] [i_28] [0U] [i_29] [i_28])), (arr_65 [i_28] [i_28] [i_29])));
                var_53 = max(((unsigned short)12472), (((/* implicit */unsigned short) (unsigned char)255)));
            }
        } 
    } 
    var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_11)))))))))));
    var_55 = ((/* implicit */long long int) ((unsigned int) var_14));
    /* LoopSeq 1 */
    for (long long int i_30 = 1; i_30 < 18; i_30 += 1) 
    {
        var_56 -= ((/* implicit */unsigned int) arr_92 [18ULL] [18ULL]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_31 = 0; i_31 < 20; i_31 += 2) 
        {
            arr_96 [i_30] [i_30] = ((/* implicit */_Bool) ((unsigned int) var_12));
            arr_97 [i_31] [i_30] [4] = ((/* implicit */int) var_11);
        }
        for (unsigned int i_32 = 0; i_32 < 20; i_32 += 4) 
        {
            var_57 = ((/* implicit */long long int) (_Bool)1);
            var_58 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_99 [i_30 + 1] [i_30 + 1])) ? (arr_99 [i_30 + 2] [i_30 + 1]) : (arr_99 [i_30 + 2] [i_30 + 1]))), (((/* implicit */long long int) ((int) arr_93 [i_30] [13ULL] [i_32])))));
        }
        for (unsigned long long int i_33 = 2; i_33 < 19; i_33 += 3) 
        {
            arr_104 [i_30] = ((/* implicit */_Bool) ((((long long int) arr_92 [i_30 - 1] [i_30])) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((-1), (((/* implicit */int) arr_92 [i_30] [i_30]))))) && (((/* implicit */_Bool) min((arr_99 [i_30] [i_33 + 1]), (((/* implicit */long long int) (unsigned char)255)))))))))));
            var_59 = ((/* implicit */int) ((var_7) ? (max((arr_94 [i_33 - 2] [i_33 - 2] [i_33 - 1]), (((/* implicit */unsigned int) (unsigned short)19699)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((int) (unsigned short)23144)))))));
            var_60 = ((/* implicit */long long int) max((var_60), (((/* implicit */long long int) (_Bool)1))));
            /* LoopNest 2 */
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                for (unsigned int i_35 = 1; i_35 < 18; i_35 += 3) 
                {
                    {
                        var_61 = ((/* implicit */int) min((var_61), (((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((arr_99 [i_30] [i_30]) ^ (arr_101 [i_30] [(unsigned short)16])))), (min((arr_100 [(_Bool)1] [i_33]), (((/* implicit */unsigned long long int) 1690670407)))))), (((/* implicit */unsigned long long int) (unsigned short)32851)))))));
                        var_62 = ((/* implicit */long long int) ((int) arr_106 [i_30] [i_33 - 2] [15ULL]));
                    }
                } 
            } 
        }
        for (unsigned long long int i_36 = 0; i_36 < 20; i_36 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_37 = 1; i_37 < 19; i_37 += 3) 
            {
                arr_115 [4] [i_36] [i_37 - 1] [i_30] = ((long long int) ((int) arr_109 [i_30] [i_36] [i_37] [i_36]));
                var_63 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29729)) ? (((/* implicit */int) arr_108 [i_30 + 1] [i_36] [i_30])) : (arr_111 [i_37]))))));
            }
            for (int i_38 = 0; i_38 < 20; i_38 += 4) 
            {
                var_64 = ((/* implicit */long long int) min((var_64), (((/* implicit */long long int) max((min((6201912901490364135ULL), (((/* implicit */unsigned long long int) arr_94 [i_30 + 2] [i_30] [i_30 + 2])))), (((/* implicit */unsigned long long int) ((_Bool) ((long long int) arr_106 [i_30] [i_30] [i_30])))))))));
                var_65 = ((/* implicit */unsigned int) arr_108 [i_30] [(unsigned short)12] [i_30]);
            }
            var_66 = ((unsigned short) arr_106 [i_30] [i_30] [i_30]);
            arr_118 [i_30 + 2] [i_30] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (max((arr_117 [i_30 + 2] [i_30] [i_30] [i_30]), (((/* implicit */unsigned int) max((((/* implicit */int) arr_106 [i_30 + 1] [i_36] [0ULL])), (647952614)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_100 [i_30] [i_30 - 1]) == (arr_100 [i_30] [i_30 - 1])))))));
        }
        /* LoopSeq 2 */
        for (long long int i_39 = 1; i_39 < 19; i_39 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_40 = 2; i_40 < 16; i_40 += 3) 
            {
                for (unsigned long long int i_41 = 0; i_41 < 20; i_41 += 4) 
                {
                    for (unsigned long long int i_42 = 3; i_42 < 18; i_42 += 4) 
                    {
                        {
                            arr_129 [i_30] [i_39] [i_30] [i_30] [(unsigned short)6] [i_42 + 1] = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */unsigned int) var_2)), (((arr_116 [i_30] [i_40] [i_41]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64609))))))));
                            var_67 = ((unsigned long long int) max((((/* implicit */int) arr_108 [i_30] [i_30] [i_30])), (arr_119 [i_30] [i_39 - 1] [i_39 - 1])));
                            arr_130 [i_30 - 1] [i_39] [i_39] [i_30] [i_41] [i_42] [i_42] = ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) (-(arr_111 [i_40 - 2])))));
                            var_68 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 10906454918802261006ULL)))))) < (((/* implicit */int) (unsigned short)42379))));
                        }
                    } 
                } 
            } 
            arr_131 [i_30] [i_39] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) min((137438953471LL), (((/* implicit */long long int) arr_122 [i_30] [i_30] [i_30] [i_30 - 1]))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_43 = 0; i_43 < 20; i_43 += 1) 
            {
                for (signed char i_44 = 0; i_44 < 20; i_44 += 2) 
                {
                    {
                        arr_137 [i_30] [i_43] = ((/* implicit */signed char) ((unsigned long long int) min(((-(arr_105 [8] [15U] [15U] [8]))), (((/* implicit */unsigned int) ((int) arr_105 [i_30 + 1] [i_39 - 1] [i_43] [i_44]))))));
                        var_69 = 2641872585U;
                        var_70 = ((/* implicit */unsigned short) max((14991073843088417011ULL), (10945722438746239542ULL)));
                        arr_138 [i_30] [i_43] [i_30] [i_30 + 2] [i_30] = ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) (unsigned short)17162)))));
                    }
                } 
            } 
            var_71 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) var_2)), (1653094710U))))) ^ (2147483647)));
        }
        for (long long int i_45 = 1; i_45 < 19; i_45 += 1) /* same iter space */
        {
            var_72 = ((/* implicit */_Bool) max((var_72), (((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) arr_128 [10U] [i_30 + 2] [i_45 + 1] [i_45 + 1] [(_Bool)1] [i_45 + 1]))), (max((min((((/* implicit */long long int) arr_140 [i_45])), (4219488280249215680LL))), (-8513164741466146671LL))))))));
            var_73 = ((/* implicit */long long int) max((arr_95 [i_30] [i_30]), (((/* implicit */signed char) var_7))));
            arr_141 [i_30] [4ULL] [i_30] = (-(((((/* implicit */_Bool) arr_114 [i_30] [i_45 - 1] [i_30 - 1] [i_30])) ? (arr_114 [i_30] [i_45 - 1] [i_30] [i_30]) : (arr_114 [i_30] [i_45 - 1] [i_30 - 1] [i_30]))));
        }
        arr_142 [i_30] = ((/* implicit */signed char) ((int) min((arr_108 [i_30] [i_30 - 1] [i_30]), (arr_108 [i_30 + 1] [i_30 + 1] [i_30]))));
        var_74 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_117 [i_30] [6U] [i_30 - 1] [i_30])) ? (((((/* implicit */_Bool) -478220892329946360LL)) ? (((/* implicit */unsigned long long int) arr_139 [(signed char)8] [(signed char)8])) : (874148872575945246ULL))) : (arr_91 [i_30])))) ? (((/* implicit */unsigned long long int) ((int) min((arr_127 [i_30] [i_30 + 2] [(unsigned short)8] [i_30 - 1] [i_30 - 1] [i_30]), (((/* implicit */unsigned long long int) -2021647838)))))) : (((unsigned long long int) arr_127 [i_30] [i_30] [i_30 - 1] [i_30] [i_30] [i_30]))));
    }
}
