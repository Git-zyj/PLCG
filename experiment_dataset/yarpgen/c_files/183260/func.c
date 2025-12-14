/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183260
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) arr_8 [i_1] [i_2] [i_3]);
                                var_13 = ((unsigned char) -5089757284596957859LL);
                                var_14 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1]))), (((/* implicit */long long int) (_Bool)1))));
                        arr_18 [i_1] [(unsigned char)6] [i_1] [0U] [i_5] = arr_6 [i_1];
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_8 [i_1] [(_Bool)1] [i_1]))));
                            arr_22 [i_0] [i_0] [i_2] [i_5] [8U] |= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ ((-((~(arr_14 [i_2] [i_2])))))));
                            arr_23 [i_6] [i_6] [i_1] [i_1] [i_0] [i_0] = max((((_Bool) arr_8 [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) ((unsigned int) arr_0 [i_2]))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_14 [i_1] [i_1])) - (var_4)))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 2; i_7 < 8; i_7 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_3))));
                            arr_26 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_2);
                            var_18 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min(((_Bool)1), ((_Bool)0)))), (((6699873945863031747LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 10; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) (_Bool)1);
                            var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_5] [i_5] [i_2]))));
                        }
                    }
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        arr_32 [i_1] [(unsigned char)0] [i_0] [i_1] = ((/* implicit */unsigned char) (-(max((arr_3 [(short)10] [i_0]), (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [(_Bool)0] [i_1] [(_Bool)1] [i_9])))))))));
                        var_21 = (+((-(arr_19 [i_0] [i_1] [i_0] [6ULL] [i_2] [i_9]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
    {
        var_22 = ((/* implicit */_Bool) (+(var_4)));
        var_23 = (_Bool)1;
        arr_37 [i_10] [5LL] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((arr_36 [i_10]), (((/* implicit */unsigned int) (unsigned char)29))))), (4647848272336071421ULL)));
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((signed char) (~(max((((/* implicit */unsigned int) arr_38 [(_Bool)1] [i_10])), (1660736852U)))))))));
                    arr_45 [(unsigned char)11] [i_11] [i_10] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((arr_41 [i_10] [i_11] [i_10]) ? (((/* implicit */int) arr_35 [i_12])) : (((/* implicit */int) (unsigned char)219))))) + (((unsigned long long int) arr_34 [i_10] [i_11]))))));
                    var_25 = -2867635990042399396LL;
                    var_26 = ((/* implicit */unsigned int) ((long long int) max((min((((/* implicit */unsigned int) (-2147483647 - 1))), (9U))), (((((/* implicit */_Bool) (unsigned char)13)) ? (arr_33 [(unsigned char)5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_11] [i_12]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 3; i_13 < 19; i_13 += 3) 
                    {
                        for (long long int i_14 = 1; i_14 < 20; i_14 += 2) 
                        {
                            {
                                arr_53 [i_10] [2] [i_14] [i_10] [i_14] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (unsigned char)36))));
                                var_27 *= ((/* implicit */unsigned char) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_15 = 1; i_15 < 19; i_15 += 1) 
    {
        arr_56 [i_15] = (-(max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_48 [16LL] [(unsigned char)7] [i_15] [i_15 + 1] [(unsigned char)7]))))), (max((2078756141U), (((/* implicit */unsigned int) arr_35 [i_15])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
            {
                for (unsigned int i_18 = 4; i_18 < 19; i_18 += 1) 
                {
                    {
                        arr_66 [i_15] [i_15 - 1] [i_15 + 1] [i_15] [(unsigned short)4] [(unsigned char)7] = ((/* implicit */unsigned char) ((signed char) arr_54 [i_15]));
                        var_28 = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
            var_29 = ((/* implicit */long long int) var_5);
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_20 = 2; i_20 < 18; i_20 += 2) 
            {
                var_30 = ((/* implicit */_Bool) ((short) arr_54 [i_15]));
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (long long int i_22 = 2; i_22 < 17; i_22 += 1) 
                    {
                        {
                            arr_78 [i_15] [i_21] [i_20] [i_19] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_21] [i_21] [i_21] [i_21])) ? (((var_2) ? (-4237496125754985201LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)95))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22527)))));
                            arr_79 [i_15 - 1] [i_15 - 1] [i_20] [7U] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_68 [9ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_15 + 1] [(unsigned short)10] [i_15 - 1]))) : (var_4)));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_67 [i_15] [i_19] [i_20 - 2])) + (((/* implicit */int) (signed char)-118))));
                            var_32 = ((/* implicit */unsigned char) var_5);
                        }
                    } 
                } 
            }
            for (long long int i_23 = 0; i_23 < 20; i_23 += 1) 
            {
                arr_82 [i_15] = ((/* implicit */_Bool) max((((max((((/* implicit */long long int) var_3)), (1048544LL))) | (((/* implicit */long long int) ((unsigned int) (_Bool)1))))), (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
                arr_83 [i_15] [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) ((_Bool) arr_69 [i_23] [5] [i_15]));
            }
            for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_33 = ((short) min((arr_51 [i_15 - 1] [i_15] [i_15 - 1] [i_15 - 1]), ((~(((/* implicit */int) arr_48 [(unsigned short)12] [13] [i_19] [i_24] [i_25]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_26 = 0; i_26 < 20; i_26 += 4) 
                    {
                        arr_91 [i_15] = ((/* implicit */long long int) (~(-618423002)));
                        arr_92 [i_15] [i_24 + 1] = ((/* implicit */unsigned short) ((arr_90 [i_24 + 1] [i_15 + 1] [i_24] [i_19] [i_19] [i_15]) - (arr_90 [i_24 + 1] [i_15 + 1] [12] [4] [i_26] [i_15])));
                    }
                    for (unsigned char i_27 = 1; i_27 < 17; i_27 += 4) 
                    {
                        arr_97 [i_15] [i_24] = ((/* implicit */int) var_5);
                        arr_98 [i_15 + 1] [i_15] [i_15 + 1] [i_25] [1U] = ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_87 [i_24 + 1] [i_24] [i_24 + 1] [(_Bool)1] [i_24] [i_24])))) * (((((/* implicit */_Bool) arr_87 [i_24 + 1] [(_Bool)1] [i_24 + 1] [i_24 + 1] [i_24] [i_24 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_87 [i_24 + 1] [i_24 + 1] [i_24 + 1] [11U] [i_24] [(unsigned short)1]))));
                    }
                }
                for (long long int i_28 = 0; i_28 < 20; i_28 += 2) 
                {
                    var_34 *= ((/* implicit */unsigned long long int) arr_84 [i_28] [i_24] [i_19] [i_15]);
                    arr_102 [i_15] [(short)10] [i_28] [i_15] [i_19] [i_19] = ((/* implicit */unsigned int) max((((long long int) arr_99 [i_15] [i_15 - 1] [13ULL] [i_15] [i_24 + 1])), (((/* implicit */long long int) ((short) arr_77 [i_15 + 1] [(_Bool)1])))));
                }
                arr_103 [i_15] = ((/* implicit */unsigned char) ((short) (-(arr_93 [i_19] [i_19] [i_15]))));
            }
            /* LoopSeq 3 */
            for (long long int i_29 = 0; i_29 < 20; i_29 += 1) 
            {
                var_35 = (+(arr_36 [i_15 - 1]));
                /* LoopNest 2 */
                for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
                {
                    for (unsigned short i_31 = 0; i_31 < 20; i_31 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned int) var_3)), (arr_108 [i_30 - 1] [i_19] [(short)9] [i_30 - 1]))));
                            var_37 += ((/* implicit */long long int) var_6);
                            arr_113 [i_15 - 1] [i_15] [i_31] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_0)) - (194)))))), ((~(var_8)))))));
                        }
                    } 
                } 
                arr_114 [i_15] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_89 [i_15] [i_15 + 1] [7] [i_19])) ? (((/* implicit */int) arr_89 [i_15] [i_15 - 1] [i_29] [i_15 + 1])) : (((/* implicit */int) arr_89 [i_15] [i_15 - 1] [i_29] [i_15]))))));
            }
            /* vectorizable */
            for (short i_32 = 1; i_32 < 18; i_32 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_33 = 1; i_33 < 18; i_33 += 1) 
                {
                    arr_121 [i_15] [i_33] [16ULL] [i_15] = ((/* implicit */signed char) var_9);
                    var_38 = arr_115 [i_15] [i_32 - 1] [i_32 - 1];
                    arr_122 [(_Bool)1] [i_15] [i_32] [i_19] = ((/* implicit */unsigned int) arr_42 [i_32 + 2] [i_33 - 1] [(unsigned char)9] [i_15 - 1]);
                    var_39 = ((/* implicit */signed char) ((unsigned char) arr_100 [(_Bool)1] [(short)12] [i_32 + 1] [i_32]));
                    /* LoopSeq 1 */
                    for (long long int i_34 = 0; i_34 < 20; i_34 += 4) 
                    {
                        var_40 -= ((/* implicit */_Bool) 23ULL);
                        var_41 = ((/* implicit */signed char) ((int) (unsigned char)219));
                        var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1660736852U)))))));
                    }
                }
                /* LoopSeq 1 */
                for (_Bool i_35 = 1; i_35 < 1; i_35 += 1) 
                {
                    arr_128 [i_15] [i_19] [i_15] = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_3)))));
                    /* LoopSeq 2 */
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                    {
                        arr_132 [i_15] [i_19] [i_32] [(signed char)12] [i_15] = arr_42 [(unsigned char)3] [i_19] [(unsigned char)16] [i_36];
                        arr_133 [i_15 - 1] [i_19] [(_Bool)1] [i_15] [i_36] [7LL] = (!(var_3));
                        var_43 *= ((/* implicit */unsigned char) arr_52 [(unsigned char)5] [i_19] [15U] [(_Bool)1] [i_35] [i_36] [i_36]);
                    }
                    for (unsigned int i_37 = 0; i_37 < 20; i_37 += 3) 
                    {
                        arr_136 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_35] [(unsigned char)10] [18] [i_15] = ((/* implicit */_Bool) ((unsigned long long int) arr_85 [i_15] [i_15 + 1] [i_35 - 1]));
                        var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) ((long long int) arr_109 [4ULL] [i_15 - 1] [i_15 + 1] [i_15 + 1])))));
                        arr_137 [i_37] [(unsigned short)18] [i_15] [(unsigned short)8] [i_37] [(_Bool)0] [i_35 - 1] = ((/* implicit */signed char) ((unsigned char) arr_70 [i_15]));
                    }
                }
                var_45 = ((((_Bool) arr_68 [i_15])) ? (((/* implicit */unsigned int) 395045153)) : (var_1));
            }
            /* vectorizable */
            for (long long int i_38 = 1; i_38 < 17; i_38 += 2) 
            {
                var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) 584319846U))));
                var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) arr_38 [i_19] [(unsigned short)3]))));
                /* LoopNest 2 */
                for (long long int i_39 = 0; i_39 < 20; i_39 += 4) 
                {
                    for (_Bool i_40 = 0; i_40 < 0; i_40 += 1) 
                    {
                        {
                            arr_145 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */long long int) (unsigned short)17);
                            arr_146 [(signed char)15] [i_19] [3LL] [i_15] [i_40] [19ULL] [i_40] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_2))));
                            var_48 += (_Bool)1;
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (int i_41 = 0; i_41 < 20; i_41 += 2) 
            {
                arr_150 [i_15] [(unsigned short)5] [i_41] = arr_130 [i_19] [i_15 - 1] [i_19] [i_15 - 1];
                arr_151 [(_Bool)1] [i_19] [i_19] [i_15] = ((/* implicit */unsigned char) max((arr_36 [i_15]), (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)38)))))))));
                /* LoopSeq 1 */
                for (signed char i_42 = 0; i_42 < 20; i_42 += 1) 
                {
                    arr_154 [i_15] [i_19] [i_41] [i_15] = ((/* implicit */unsigned long long int) arr_142 [i_15] [i_15] [(signed char)0] [i_15]);
                    var_49 = ((/* implicit */unsigned char) arr_48 [i_15] [i_19] [i_41] [i_42] [12U]);
                }
                var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned long long int) arr_39 [i_15 + 1] [21ULL])) : ((+(((4726563031082469763ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))))));
                arr_155 [i_15] [i_15] = ((/* implicit */short) ((unsigned int) (~(arr_99 [i_15 - 1] [i_19] [i_15 - 1] [i_15] [i_15]))));
            }
            /* vectorizable */
            for (unsigned int i_43 = 2; i_43 < 17; i_43 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_44 = 0; i_44 < 1; i_44 += 1) 
                {
                    var_51 = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned int i_45 = 2; i_45 < 18; i_45 += 1) 
                    {
                        var_52 ^= ((/* implicit */unsigned char) ((arr_57 [i_15] [i_43 + 2] [i_43]) ? (arr_134 [i_15] [(unsigned short)16] [i_43] [(unsigned char)0] [i_43]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        arr_162 [i_15] = ((/* implicit */long long int) ((unsigned int) arr_158 [i_15] [i_45] [(short)7] [16U] [i_15 + 1]));
                        var_53 = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_129 [i_45 + 2] [i_45 + 1] [i_45] [i_45] [i_45]))) : (arr_76 [i_45 - 1] [i_45 - 2] [i_45 - 2] [i_45] [i_15] [i_45 - 2] [i_45 + 2])));
                    }
                    var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) (-(arr_105 [i_19] [i_43] [i_43]))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_46 = 0; i_46 < 20; i_46 += 1) 
                {
                    for (short i_47 = 0; i_47 < 20; i_47 += 1) 
                    {
                        {
                            var_55 += (!((_Bool)1));
                            arr_167 [i_15] [i_19] [i_15] [i_46] [17ULL] = ((/* implicit */short) var_9);
                        }
                    } 
                } 
                var_56 ^= ((/* implicit */int) var_6);
            }
        }
    }
}
