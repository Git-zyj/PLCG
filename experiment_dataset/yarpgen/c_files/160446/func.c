/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160446
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
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) (unsigned short)0);
        var_15 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_0 [i_0 - 4])))), (((int) (unsigned short)48593))));
        var_16 |= -1931585277;
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((10934679709858359348ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167)))))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_1]))) : (((/* implicit */int) arr_4 [i_1 + 1]))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-43))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)173)))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
    {
        var_19 = ((/* implicit */int) ((unsigned long long int) var_4));
        arr_8 [i_2] [i_2] = ((/* implicit */int) (unsigned char)179);
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 21; i_4 += 3) 
            {
                var_21 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2 - 2]))))))));
                arr_13 [i_3] [i_3] |= ((/* implicit */unsigned char) ((_Bool) var_10));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_17 [i_4] [i_2 - 1] [i_4] [i_5] [i_5] [i_4] = ((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 - 1]);
                    arr_18 [i_4] [i_4] [i_3] [i_4] = ((/* implicit */signed char) arr_11 [i_2 - 1] [i_4 - 1] [i_4]);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)82)) < (var_12)))) << (((/* implicit */int) (unsigned short)3))));
                        arr_24 [i_7 - 1] [i_4] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_4] [i_4 + 2])) ? (((/* implicit */long long int) var_5)) : ((~(arr_21 [i_4] [i_3])))));
                        arr_25 [i_2] [i_2] [i_4] [i_7] [i_4] = ((/* implicit */long long int) var_4);
                    }
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                    {
                        arr_28 [i_2] [i_4] [i_4 + 1] = ((/* implicit */int) ((signed char) 1443523667U));
                        var_23 = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (_Bool)1)) : (arr_14 [i_2 - 1] [(unsigned char)22] [i_2])));
                        var_24 *= ((/* implicit */unsigned long long int) ((_Bool) (signed char)-123));
                    }
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
                    {
                        arr_31 [i_2] [(_Bool)1] [i_2] [i_4 + 1] [i_4] [i_6] [(signed char)19] = (+(((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */unsigned long long int) arr_14 [i_3] [i_6] [i_9])) : (var_13))));
                        arr_32 [i_2] [i_6] [i_3] [i_2] |= ((/* implicit */int) var_10);
                    }
                    var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_2 + 1] [i_4 + 1] [i_4] [i_4 + 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_22 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [19ULL]))));
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)31564)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (unsigned char)207))));
                    arr_33 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) arr_21 [i_4] [i_4 - 1]);
                }
            }
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */int) (unsigned short)31564)) : (((/* implicit */int) (unsigned short)7))));
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                arr_37 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2])) : (16)));
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        arr_44 [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (14872663203568288799ULL))) & (arr_40 [i_2])));
                        var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)3721))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_12 [9ULL] [i_11] [i_10] [i_2]))))) : (((((/* implicit */_Bool) arr_35 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_10]))) : (20ULL)))));
                        var_30 &= ((/* implicit */signed char) ((unsigned int) arr_16 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 2]));
                        arr_45 [i_2] [i_3] [i_10] [i_11] [i_12] [i_2] [14U] = ((/* implicit */_Bool) ((signed char) ((arr_20 [i_3] [i_3] [i_3] [i_11] [i_12] [i_3]) ? (arr_27 [i_2] [i_2] [i_10] [i_11] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))))));
                    }
                    for (signed char i_13 = 1; i_13 < 21; i_13 += 2) /* same iter space */
                    {
                        var_31 = ((signed char) ((((/* implicit */_Bool) arr_16 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 + 1])) ? (arr_47 [i_13] [i_3] [i_10] [i_3] [i_10] [i_13 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5)))));
                        var_32 = arr_10 [i_2] [i_3];
                        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((arr_46 [i_2] [i_2] [i_2] [i_2] [i_2]) < (1086883353U))))));
                        var_34 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)49))));
                    }
                    for (signed char i_14 = 1; i_14 < 21; i_14 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */int) ((unsigned int) arr_29 [i_2 - 2] [i_3] [17ULL] [i_14 - 1] [i_11] [i_2 + 1] [i_3]));
                        arr_51 [i_2] [(_Bool)1] [i_2] [(_Bool)1] [i_2] = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)-119)))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_14] [i_2]))) > (var_8))))));
                    }
                    arr_52 [i_2 - 2] [i_3] [i_10] [i_10] = ((/* implicit */int) arr_48 [i_2] [i_3] [i_2] [i_11] [i_11]);
                    var_36 = ((/* implicit */unsigned int) ((signed char) arr_10 [i_2 + 1] [i_11]));
                    arr_53 [i_2 - 1] [i_2 - 1] [i_2] |= ((/* implicit */_Bool) var_9);
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        arr_57 [i_2] [i_3] [i_10] [6] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) -982959376)) ? (18085906663567056802ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116))))))));
                        var_38 = ((/* implicit */_Bool) min((var_38), (((((unsigned int) arr_11 [i_3] [i_3] [i_15])) < (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32387)) / (-1047539353))))))));
                        var_39 *= ((/* implicit */unsigned short) ((arr_40 [i_11]) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_54 [i_15])))));
                    }
                    for (signed char i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        arr_61 [i_2] [i_3] [i_10] [i_11] [i_2] = ((/* implicit */_Bool) 982959375);
                        arr_62 [i_2] [i_3] [i_3] [i_10] [i_11] [21LL] [i_16] = ((/* implicit */unsigned long long int) ((unsigned int) (+(1177665465))));
                        var_40 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3208083950U)) ? (1512102753) : (((/* implicit */int) (unsigned short)42393))));
                    }
                }
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                var_41 = ((/* implicit */signed char) arr_14 [i_2] [i_3] [i_17]);
                var_42 -= ((/* implicit */short) (unsigned short)33447);
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_72 [i_19] [i_18] [i_17] [i_17] [i_3] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3208083950U))));
                            var_43 = ((/* implicit */signed char) arr_35 [i_2 - 1]);
                            arr_73 [i_18] [i_18] = ((/* implicit */short) (~(((((/* implicit */int) (signed char)-123)) * (((/* implicit */int) (unsigned short)51949))))));
                        }
                    } 
                } 
            }
            arr_74 [i_2] = ((/* implicit */long long int) var_1);
        }
        arr_75 [i_2] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) arr_67 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)58943))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_20 = 1; i_20 < 24; i_20 += 2) 
    {
        for (int i_21 = 0; i_21 < 25; i_21 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 25; i_22 += 2) 
                {
                    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */_Bool) 982959383);
                            arr_88 [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_87 [i_22] [i_22] [i_21] [i_20 + 1])) * (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65529))))))) : (((706231268U) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_80 [i_20])) ^ (((/* implicit */int) (signed char)116)))))))));
                            arr_89 [(signed char)11] [i_21] [i_20] = ((/* implicit */signed char) arr_85 [i_20] [16U]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_24 = 0; i_24 < 25; i_24 += 4) 
                {
                    var_45 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_84 [i_20 + 1])), (arr_77 [i_20 - 1] [i_20 + 1])))), (max((var_0), (((/* implicit */unsigned long long int) (-(arr_86 [i_20] [i_20 + 1] [i_24] [(unsigned short)20] [i_24] [12U]))))))));
                    var_46 = ((/* implicit */unsigned char) (signed char)-116);
                    arr_92 [i_21] [i_21] [i_21] [i_20] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_78 [i_20])))));
                    arr_93 [i_20] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_11)))));
                }
                for (short i_25 = 0; i_25 < 25; i_25 += 3) 
                {
                    var_47 -= ((/* implicit */_Bool) max((((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)1))))));
                    var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) arr_87 [i_20] [16LL] [i_20 - 1] [(_Bool)1]))));
                    /* LoopSeq 2 */
                    for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_27 = 2; i_27 < 22; i_27 += 2) 
                        {
                            var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)13586))))) ? (((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51949))) : (706231295U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))));
                            arr_104 [i_20] [i_21] [i_20] [i_26 + 1] [i_27] [i_27] [i_26 + 1] = ((((/* implicit */unsigned int) min((((/* implicit */int) arr_97 [i_20 - 1])), ((+(((/* implicit */int) var_7))))))) * (((((/* implicit */_Bool) (+(arr_81 [i_25] [i_25] [i_20])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((unsigned int) (unsigned short)51956)))));
                            arr_105 [i_20] [22ULL] [i_26 + 1] [i_20] [i_27 - 1] [22ULL] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_82 [i_20 + 1])))))));
                        }
                        var_50 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_84 [i_21])) | ((-(-1542305043)))));
                    }
                    for (int i_28 = 0; i_28 < 25; i_28 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_29 = 0; i_29 < 25; i_29 += 2) 
                        {
                            var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((8437495685955405271LL), (((/* implicit */long long int) arr_108 [i_20] [i_20 + 1] [i_20 + 1] [i_20]))))) ? (arr_91 [i_29] [i_28] [i_25] [i_21]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (2748142916U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532)))));
                            var_53 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 2896104491U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (int i_30 = 0; i_30 < 25; i_30 += 3) 
                        {
                            arr_116 [i_20] [i_21] [i_25] [i_20] [i_30] = ((/* implicit */int) ((long long int) (+(((/* implicit */int) min((arr_97 [i_21]), (((/* implicit */signed char) var_7))))))));
                            var_54 -= ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (min((((/* implicit */unsigned int) arr_102 [i_20] [i_21] [i_28] [i_28] [i_30])), (((var_8) >> (((arr_98 [i_30] [(unsigned short)8] [i_21] [i_28] [i_30] [i_28]) - (1588438744U))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_95 [i_20 + 1] [i_21] [i_21] [i_20])))))));
                            var_55 *= ((/* implicit */_Bool) 1337750006);
                        }
                        /* vectorizable */
                        for (long long int i_31 = 0; i_31 < 25; i_31 += 3) 
                        {
                            var_56 = ((/* implicit */unsigned long long int) ((unsigned int) arr_91 [i_20 - 1] [i_20 + 1] [i_20 + 1] [i_28]));
                            var_57 = ((/* implicit */_Bool) (-(var_0)));
                        }
                        arr_119 [13U] [i_21] [i_20] [i_25] [i_28] = ((int) ((((/* implicit */_Bool) 2255558113536597239ULL)) && (((/* implicit */_Bool) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))))))));
                    }
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_32 = 0; i_32 < 25; i_32 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_33 = 0; i_33 < 25; i_33 += 2) 
                    {
                        var_58 = ((/* implicit */_Bool) -954600607);
                        arr_127 [i_33] [i_20] [(signed char)1] [i_20] [i_20] [i_20] = ((/* implicit */short) (~(((/* implicit */int) arr_83 [i_20] [i_20] [i_20] [i_20 + 1]))));
                        /* LoopSeq 1 */
                        for (_Bool i_34 = 0; i_34 < 0; i_34 += 1) 
                        {
                            arr_131 [i_34] [i_20] [i_33] [(unsigned short)4] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)51958))));
                            arr_132 [i_20 - 1] [i_20] [i_32] [(unsigned short)8] [i_20 - 1] = ((/* implicit */long long int) (_Bool)1);
                            arr_133 [i_34] [i_34 + 1] [i_20] [i_34 + 1] [i_34] [i_34] [i_34] = ((/* implicit */signed char) ((unsigned int) arr_108 [i_20] [i_20 + 1] [i_20 - 1] [i_20]));
                            var_59 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)13605)) >> (((arr_99 [i_34] [i_34] [i_34 + 1] [i_34 + 1] [i_34 + 1] [i_34 + 1]) - (3678856509U)))));
                        }
                    }
                    arr_134 [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_76 [i_20 - 1] [i_20])) ^ ((~(((/* implicit */int) arr_96 [i_20]))))));
                    /* LoopNest 2 */
                    for (short i_35 = 0; i_35 < 25; i_35 += 2) 
                    {
                        for (unsigned long long int i_36 = 1; i_36 < 23; i_36 += 4) 
                        {
                            {
                                arr_139 [4ULL] [i_20] [i_35] [i_20] [(_Bool)1] [(_Bool)1] [i_20] = (-((+(((/* implicit */int) (unsigned short)51949)))));
                                var_60 = (i_20 % 2 == 0) ? (((/* implicit */signed char) ((16191185960172954384ULL) >> (((((/* implicit */int) arr_76 [i_20] [i_20])) - (51664)))))) : (((/* implicit */signed char) ((16191185960172954384ULL) >> (((((((/* implicit */int) arr_76 [i_20] [i_20])) - (51664))) + (17989))))));
                                var_61 = ((/* implicit */signed char) max((var_61), (((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) var_4))))))));
                                var_62 = ((/* implicit */unsigned short) ((unsigned int) arr_106 [i_32] [i_36 - 1] [i_35] [i_35] [i_20 - 1] [i_20]));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_37 = 2; i_37 < 22; i_37 += 4) 
                {
                    arr_142 [i_20] [i_20] [i_21] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13600)) ? (arr_130 [i_37] [i_21] [i_21] [i_20] [i_20 + 1] [i_20] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_106 [i_20] [i_37 - 1] [i_20] [i_20] [i_20] [i_21])))));
                    var_63 = arr_112 [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_37 - 1];
                }
            }
        } 
    } 
    var_64 = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
}
