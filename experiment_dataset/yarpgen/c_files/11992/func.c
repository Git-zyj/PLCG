/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11992
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
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((_Bool) var_8))), (var_6)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (_Bool)1);
        var_12 = ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    arr_11 [i_0] [i_0] [i_1] [i_2] [(unsigned char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) / (arr_8 [i_0] [i_1 + 2] [i_2 + 2] [i_3])))) ? ((~(((/* implicit */int) (short)1023)))) : (((/* implicit */int) (unsigned short)52807))));
                    var_13 = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2]);
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_2] [(signed char)10] [(unsigned short)6] [(unsigned short)10] = ((/* implicit */unsigned long long int) ((signed char) arr_9 [i_1 - 1] [i_1 - 1] [i_2 + 1]));
                        arr_16 [(unsigned char)2] [(unsigned char)2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_2 + 1] [(unsigned char)5])) - (((/* implicit */int) arr_9 [(_Bool)1] [i_2 + 1] [i_3]))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) arr_19 [i_5] [i_2] [i_1] [i_0])) % (((/* implicit */int) (unsigned short)4)))) : (((/* implicit */int) (signed char)38))));
                        var_15 = ((/* implicit */int) ((_Bool) arr_5 [i_1] [i_2 - 1] [i_5]));
                    }
                }
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 11; i_6 += 4) 
                {
                    for (unsigned short i_7 = 2; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_8))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (_Bool)1))));
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 1; i_8 < 10; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    var_18 = ((/* implicit */short) arr_9 [i_0] [6ULL] [i_9]);
                    var_19 = (unsigned short)58804;
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [0LL])) < (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [6LL]))));
                }
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) (+(arr_32 [i_0] [i_0] [i_0] [i_1 + 1])));
                            arr_38 [i_0] [i_0] [i_8] [i_8] [i_0] [i_11] [i_11] = ((/* implicit */long long int) ((signed char) ((0U) - (var_3))));
                            arr_39 [10U] [i_1 - 1] [(unsigned short)10] [i_8 - 1] [(short)10] [i_11] [i_10] &= ((/* implicit */short) var_8);
                        }
                    } 
                } 
                var_22 -= ((/* implicit */signed char) (unsigned short)51376);
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                arr_42 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_1 + 2])) < (((/* implicit */int) var_9))));
                arr_43 [5LL] [i_12 - 1] [i_12 - 1] [(_Bool)0] |= arr_18 [i_1 - 1] [i_12 - 1] [2] [i_12] [(short)8] [(unsigned char)8] [0LL];
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)39))))) ? (((/* implicit */int) arr_26 [i_1 + 2])) : (((/* implicit */int) (unsigned short)12))));
                /* LoopNest 2 */
                for (short i_13 = 1; i_13 < 9; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_12] [i_13] [i_14])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))));
                            arr_48 [i_0] [i_14] [i_12 - 1] [i_13] = ((/* implicit */long long int) ((unsigned long long int) arr_26 [i_13 + 1]));
                        }
                    } 
                } 
            }
            for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) 
            {
                arr_52 [i_15] [i_1] = ((/* implicit */long long int) var_9);
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) 
                    {
                        {
                            arr_58 [i_0] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [2U] [i_0] [i_1 + 1] [i_1] [i_16] [(unsigned char)11] [i_15])) + (((/* implicit */int) var_5))));
                            arr_59 [i_0] [i_15] [i_1] [i_15] [i_16] [i_17] [2] = ((unsigned short) var_9);
                            var_25 = ((/* implicit */short) var_8);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) var_8)))));
                    arr_62 [i_15] [i_15] [i_15] [i_15] [i_1 + 1] [i_15] = ((/* implicit */signed char) arr_53 [i_15] [i_15] [(_Bool)1] [i_18] [i_18] [i_0]);
                    var_27 = ((/* implicit */signed char) ((var_3) << (((((/* implicit */int) ((unsigned short) var_7))) - (98)))));
                }
                /* LoopSeq 3 */
                for (short i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8563932574771952961LL)) ? (-551192893) : (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) var_8))));
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (1070645568) : (((/* implicit */int) (short)16950))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */signed char) arr_66 [i_0] [i_1 - 1] [i_0] [i_15] [6U]);
                    var_31 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)32767))));
                    var_32 -= ((/* implicit */unsigned char) arr_27 [2LL] [i_0] [(short)6]);
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                {
                    arr_70 [i_0] [i_15] [(short)9] [9U] [i_15] = ((/* implicit */long long int) ((unsigned short) arr_27 [i_15] [i_1] [i_15]));
                    arr_71 [i_15] [i_15] = ((/* implicit */unsigned short) arr_45 [i_0] [i_1 - 1] [i_15] [(unsigned char)10]);
                    var_33 = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_15]);
                }
            }
            arr_72 [i_1] [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (unsigned short)65515)) - (((/* implicit */int) arr_35 [i_1] [i_1 + 2] [i_0])))));
            /* LoopSeq 1 */
            for (unsigned char i_22 = 0; i_22 < 12; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_23 = 3; i_23 < 10; i_23 += 4) 
                {
                    for (int i_24 = 0; i_24 < 12; i_24 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_24] [i_24] [i_23] [i_24] [i_23] [i_23 - 3] [3])) % (((/* implicit */int) var_5))));
                            arr_80 [(unsigned short)3] [i_22] [i_24] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_23 + 2] [i_23 + 2] [i_23 + 2] [i_23] [i_0] [i_1 + 1] [i_23])) == (((/* implicit */int) arr_17 [i_0] [11ULL] [i_22] [(short)3] [i_23] [i_1 - 1] [(_Bool)1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 12; i_25 += 1) 
                {
                    for (unsigned int i_26 = 0; i_26 < 12; i_26 += 1) 
                    {
                        {
                            arr_86 [i_0] [i_22] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_31 [(short)6] [i_22] [i_22] [i_1 + 2] [i_1 + 2] [(_Bool)1]))))) || (((/* implicit */_Bool) (short)31739))));
                            arr_87 [10ULL] [i_25] [i_22] [i_25] [i_0] [i_22] [i_25] = ((/* implicit */signed char) ((unsigned short) var_5));
                            var_35 = ((/* implicit */_Bool) ((signed char) ((arr_78 [i_26]) / (((/* implicit */long long int) ((/* implicit */int) arr_82 [(unsigned short)2] [(unsigned short)2] [(signed char)8] [i_26]))))));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 70368744177663LL))) ? ((~(((/* implicit */int) (unsigned char)132)))) : (((((/* implicit */int) arr_26 [i_22])) - (((/* implicit */int) arr_34 [i_0] [i_25] [i_25] [i_25]))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_27 = 0; i_27 < 12; i_27 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_28 = 0; i_28 < 12; i_28 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
                        arr_94 [(unsigned short)9] [i_1] [i_22] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_56 [i_0] [i_1 - 1] [(unsigned short)9] [i_1 + 1] [i_1 - 1])) << (((((/* implicit */int) arr_56 [(unsigned short)11] [i_1 + 1] [(unsigned short)2] [i_1 - 1] [i_1 + 2])) - (86)))));
                        arr_95 [(unsigned short)0] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_63 [i_22] [i_0] [(signed char)10] [i_22])) == (((/* implicit */int) var_4))));
                    }
                    for (int i_29 = 2; i_29 < 9; i_29 += 4) 
                    {
                        arr_98 [(signed char)8] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_29 - 1] = ((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1] [i_1 + 1]);
                        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */int) arr_66 [i_0] [i_1 - 1] [i_27] [i_22] [i_27])) - (((/* implicit */int) (_Bool)1)))))));
                        var_39 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_25 [(unsigned short)1] [i_29] [i_22] [3])) : (((/* implicit */int) arr_66 [i_22] [i_1] [i_0] [i_29] [i_1 + 2]))));
                        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) var_9))));
                        arr_99 [i_27] [i_27] [(unsigned char)3] [i_1] [i_0] = ((/* implicit */signed char) ((arr_53 [i_29 + 3] [i_29 - 2] [i_29 - 1] [i_27] [i_29 + 1] [i_27]) % (((/* implicit */long long int) arr_45 [i_29] [i_29 + 3] [i_29] [i_29 - 2]))));
                    }
                    for (unsigned char i_30 = 1; i_30 < 11; i_30 += 1) 
                    {
                        var_41 = var_7;
                        var_42 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_30] [i_22] [i_30] [i_22] [i_0]))) <= (((15827206054347107395ULL) / (15827206054347107395ULL)))));
                    }
                    arr_102 [i_0] [i_1] [i_22] [i_27] = ((/* implicit */_Bool) arr_101 [i_0] [i_0] [i_0] [i_27]);
                    var_43 = ((/* implicit */int) ((unsigned short) arr_45 [i_1 + 2] [i_1] [(unsigned short)4] [i_0]));
                }
                for (int i_31 = 0; i_31 < 12; i_31 += 3) 
                {
                    var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_49 [i_0] [3] [i_22]))));
                    arr_105 [i_0] [i_31] [i_0] [i_31] [i_1] [i_31] = ((/* implicit */signed char) var_8);
                }
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    var_45 = (+(var_3));
                    /* LoopSeq 4 */
                    for (long long int i_33 = 1; i_33 < 11; i_33 += 2) 
                    {
                        arr_111 [i_1] [i_22] [i_22] [(unsigned short)4] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_18 [(unsigned char)2] [(unsigned char)2] [(short)8] [i_22] [(unsigned char)2] [2ULL] [i_22])) - (((/* implicit */int) var_5)))) << ((((((-(((/* implicit */int) arr_54 [i_0] [(short)5] [i_32])))) + (32788))) - (20)))));
                        arr_112 [i_0] [i_0] [i_0] [i_32] [i_33] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_91 [i_1]))) && (((/* implicit */_Bool) (signed char)38))));
                        var_46 = ((/* implicit */unsigned short) arr_32 [11U] [11U] [i_22] [i_32]);
                    }
                    for (int i_34 = 0; i_34 < 12; i_34 += 1) 
                    {
                        var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) arr_75 [i_0] [i_0] [i_0] [i_0] [(unsigned char)7]))));
                        var_48 -= ((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (signed char)-106))));
                    }
                    for (unsigned short i_35 = 0; i_35 < 12; i_35 += 2) 
                    {
                        var_49 |= ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        var_50 = ((/* implicit */unsigned char) ((signed char) arr_17 [i_0] [4U] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_35]));
                    }
                    for (short i_36 = 0; i_36 < 12; i_36 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2156)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) : (4400298443872934830LL)));
                        arr_122 [i_0] [i_1] [i_36] [i_32] [i_36] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_32]))) ^ (15432842476905120079ULL)));
                        arr_123 [i_0] = ((/* implicit */short) var_5);
                        var_52 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_5)))) + (2147483647))) << (((1376018711633167800LL) - (1376018711633167800LL)))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_37 = 0; i_37 < 12; i_37 += 4) 
                    {
                        arr_126 [i_0] [2] [2] &= ((/* implicit */unsigned short) ((_Bool) (signed char)13));
                        arr_127 [(signed char)8] [(signed char)8] [i_22] [(signed char)8] [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && ((!(((/* implicit */_Bool) var_9))))));
                        arr_128 [0ULL] [(unsigned short)9] [i_22] [i_37] = ((/* implicit */_Bool) ((unsigned int) var_0));
                        var_53 = ((/* implicit */unsigned int) min((var_53), (arr_88 [i_0] [i_22] [i_32] [i_37])));
                        var_54 -= ((/* implicit */unsigned char) var_10);
                    }
                    for (unsigned short i_38 = 3; i_38 < 9; i_38 += 4) 
                    {
                        var_55 = ((/* implicit */unsigned int) ((-8563932574771952967LL) - (((/* implicit */long long int) ((/* implicit */int) ((short) arr_131 [i_0] [i_1 + 1] [4ULL] [i_38 + 1]))))));
                        var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? ((+(((/* implicit */int) (signed char)51)))) : (((/* implicit */int) var_9))));
                        arr_132 [i_0] [i_1] [i_0] [i_32] [i_38] = ((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0] [i_32] [(signed char)8]));
                    }
                    arr_133 [i_1 + 2] [i_1 + 2] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_81 [i_1] [9])) : (((/* implicit */int) (unsigned short)65510)))));
                    arr_134 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_9)) % (((/* implicit */int) (short)5925))));
                }
                /* LoopSeq 3 */
                for (signed char i_39 = 0; i_39 < 12; i_39 += 3) 
                {
                    var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) ((unsigned char) var_7)))));
                    var_58 = ((/* implicit */short) var_1);
                }
                for (long long int i_40 = 0; i_40 < 12; i_40 += 2) /* same iter space */
                {
                    arr_140 [i_1] = ((/* implicit */unsigned short) ((int) arr_45 [i_1 + 2] [i_1 + 2] [i_1] [i_1]));
                    var_59 = ((/* implicit */signed char) arr_73 [(_Bool)1] [6] [i_1 - 1]);
                    var_60 = (unsigned short)52628;
                    arr_141 [i_0] [(short)10] [i_22] [i_40] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(short)10] [i_0] [i_1] [i_1] [i_1] [i_22] [i_40])) && (((/* implicit */_Bool) arr_78 [i_0]))));
                    var_61 = ((/* implicit */long long int) min((var_61), (((/* implicit */long long int) ((((/* implicit */int) ((var_0) || (((/* implicit */_Bool) (unsigned short)47346))))) < (((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) var_8)))))))));
                }
                for (long long int i_41 = 0; i_41 < 12; i_41 += 2) /* same iter space */
                {
                    var_62 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_120 [i_1 + 1] [i_1 + 1] [(unsigned char)2] [i_1 - 1] [i_1])) ? (6962743199139846958LL) : (arr_120 [i_1 + 1] [i_1 + 1] [6ULL] [i_1 - 1] [1U])));
                    var_63 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((-240407317187976224LL) % (((/* implicit */long long int) arr_45 [i_0] [i_1] [i_0] [i_41])))) : (((((-240407317187976224LL) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_81 [i_0] [i_22])) + (52))) - (47)))))));
                    arr_144 [i_41] [i_22] [i_1] [i_0] = ((/* implicit */short) ((arr_97 [i_0] [(unsigned short)1] [i_1 + 1] [1] [i_22]) ? (((/* implicit */long long int) ((int) var_3))) : (2233785415175766016LL)));
                    var_64 = ((((/* implicit */int) arr_35 [i_1 - 1] [i_22] [i_41])) * (((/* implicit */int) arr_101 [i_0] [i_0] [i_0] [i_0])));
                }
            }
            var_65 = ((/* implicit */int) -6962743199139846959LL);
            /* LoopSeq 3 */
            for (short i_42 = 0; i_42 < 12; i_42 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_43 = 0; i_43 < 12; i_43 += 3) 
                {
                    for (int i_44 = 0; i_44 < 12; i_44 += 1) 
                    {
                        {
                            var_66 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)16479)) << (((4400298443872934830LL) - (4400298443872934826LL)))));
                            arr_154 [i_0] [i_1] [i_43] [(signed char)7] = ((/* implicit */unsigned short) var_7);
                        }
                    } 
                } 
                var_67 |= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) + (arr_91 [i_0]))) - (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_1)))))));
                /* LoopSeq 1 */
                for (_Bool i_45 = 0; i_45 < 1; i_45 += 1) 
                {
                    var_68 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_42] [i_1 - 1] [i_42] [6] [i_42] [i_45] [(_Bool)1]))) == (((unsigned int) var_3))));
                    arr_158 [i_1] [i_1] = ((/* implicit */long long int) (short)16972);
                    var_69 = ((/* implicit */signed char) max((var_69), (arr_150 [i_0] [i_0] [i_0] [i_0])));
                    arr_159 [i_0] [i_0] [i_1] [i_42] [i_45] [i_45] = ((/* implicit */long long int) ((short) arr_155 [i_0] [i_1 + 1] [i_45] [6]));
                }
                arr_160 [i_0] [7LL] &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_19 [i_42] [i_42] [i_42] [i_1 + 2]))));
            }
            for (short i_46 = 1; i_46 < 10; i_46 += 2) 
            {
                var_70 = ((/* implicit */unsigned short) -1376018711633167796LL);
                var_71 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) ((arr_36 [10ULL] [i_0] [i_0] [i_1] [i_0] [4]) <= (arr_14 [i_46] [i_0] [(signed char)6] [(short)9] [i_0] [i_0]))))));
                arr_164 [i_46] [i_1] = ((((/* implicit */int) (short)16972)) / (((/* implicit */int) arr_19 [i_0] [i_1 + 1] [i_1] [i_46])));
                var_72 = ((/* implicit */signed char) min((var_72), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_81 [i_1 + 1] [i_46 + 2])) && (((/* implicit */_Bool) arr_35 [i_1 + 2] [i_46 + 1] [i_46])))))));
            }
            for (int i_47 = 0; i_47 < 12; i_47 += 3) 
            {
                arr_169 [i_0] [(unsigned char)9] [i_1] [i_47] = (unsigned short)30411;
                arr_170 [(short)0] [i_1 + 2] [i_47] &= ((/* implicit */unsigned char) var_4);
            }
        }
    }
}
