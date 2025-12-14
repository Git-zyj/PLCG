/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124700
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_15))));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((short) (short)32767));
            var_20 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) == (((/* implicit */int) (signed char)127))));
        }
        for (signed char i_2 = 2; i_2 < 11; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (signed char)-33))));
                var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_3 [i_2 + 2])) : (((/* implicit */int) var_9))));
            }
            for (short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [6U] [(signed char)12] [2U] [i_2 + 2]))));
                    var_24 -= ((/* implicit */short) (signed char)-33);
                    arr_17 [i_4] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_2 - 2] [i_2 + 2])))) ? ((+(arr_4 [i_2 - 1] [i_2 + 4] [i_5]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2]))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(short)13] [i_0])) ? (1905282642U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                    arr_18 [i_0] [6U] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_2] [i_4])) : (((/* implicit */int) var_15))));
                }
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) (short)-32767);
                            arr_23 [i_4] [i_6] = ((/* implicit */signed char) arr_22 [(short)8] [(short)2] [i_2] [i_4] [(short)12] [(signed char)12]);
                        }
                    } 
                } 
                var_26 = ((signed char) ((short) var_11));
                arr_24 [(short)6] [(signed char)2] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-1)), ((-(((/* implicit */int) (short)32753)))))))));
            }
            /* vectorizable */
            for (short i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
            {
                var_27 -= (-(((unsigned int) var_17)));
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [i_0] [i_2] [i_2] [(short)4])))))));
                arr_29 [i_0] [i_8] [i_8] [(short)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 2] [i_2] [i_2 - 1])) && (((/* implicit */_Bool) var_3))));
                arr_30 [i_0] [i_8] [i_0] [i_0] = ((/* implicit */signed char) var_3);
            }
            /* vectorizable */
            for (unsigned int i_9 = 3; i_9 < 13; i_9 += 1) 
            {
                arr_33 [(signed char)7] [i_2 + 2] = ((/* implicit */signed char) (-(((unsigned int) 355024615U))));
                var_29 = ((/* implicit */signed char) arr_1 [3U]);
                arr_34 [i_0] [i_2 - 2] [(short)4] [i_9] = ((/* implicit */short) arr_27 [i_0] [(signed char)12] [i_2]);
            }
            var_30 = var_10;
            var_31 = var_17;
            var_32 = ((/* implicit */signed char) var_12);
            /* LoopNest 2 */
            for (short i_10 = 2; i_10 < 14; i_10 += 1) 
            {
                for (signed char i_11 = 2; i_11 < 11; i_11 += 2) 
                {
                    {
                        var_33 -= ((/* implicit */unsigned int) arr_37 [i_10] [(signed char)9] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned int) var_13);
                            var_35 ^= ((/* implicit */unsigned int) arr_20 [6U] [i_2 + 1] [(short)1] [i_11]);
                        }
                    }
                } 
            } 
        }
        for (signed char i_13 = 2; i_13 < 11; i_13 += 2) /* same iter space */
        {
            var_36 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (short)32767)), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) (short)-31198))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_13] [i_13 + 2])))))))));
            var_37 = ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */int) var_12)) << (((((/* implicit */int) arr_31 [i_0] [i_0] [i_13 - 2])) - (109)))))) >= (max(((-(3939942680U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-31198)) : (((/* implicit */int) var_17)))))))));
            var_38 ^= ((/* implicit */short) ((((/* implicit */_Bool) 4046291340U)) ? (min((((((/* implicit */_Bool) (short)-3209)) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_16)))))) : (((/* implicit */int) var_11))));
        }
        for (signed char i_14 = 2; i_14 < 11; i_14 += 2) /* same iter space */
        {
            var_39 -= ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */short) arr_9 [i_14 + 2] [(signed char)11] [i_0] [i_0])), (var_9))))));
            arr_49 [i_0] [i_0] [i_14] = arr_8 [12U];
        }
        arr_50 [i_0] [i_0] = ((/* implicit */short) var_7);
        var_40 = ((/* implicit */signed char) arr_42 [i_0] [i_0] [i_0] [i_0] [(short)12]);
    }
    for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_17 = 4; i_17 < 18; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    {
                        var_41 = ((/* implicit */short) min((var_41), (var_0)));
                        var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)4096)) ? (max((((/* implicit */unsigned int) max((var_15), ((signed char)124)))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-67))) % (3774045667U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))) : (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [(short)1]))))) : (((/* implicit */int) max((arr_58 [0U] [i_16] [i_16]), (var_14)))))))));
                        /* LoopSeq 2 */
                        for (signed char i_19 = 0; i_19 < 20; i_19 += 1) 
                        {
                            arr_64 [i_15] [i_16] [12U] [i_18] [i_19] [i_19] = arr_52 [i_15];
                            var_43 = ((/* implicit */unsigned int) arr_56 [i_16] [i_16]);
                            var_44 ^= 355024615U;
                            var_45 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_62 [(short)17] [i_16] [i_17 - 1] [i_18] [i_18] [i_16] [17U])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))) + ((+(((/* implicit */int) arr_62 [i_15] [i_17] [i_17 - 3] [i_18] [i_18] [i_17 + 2] [i_16]))))));
                            var_46 = ((/* implicit */unsigned int) max((var_46), (var_3)));
                        }
                        for (signed char i_20 = 0; i_20 < 20; i_20 += 1) 
                        {
                            var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) arr_62 [(signed char)2] [i_16] [i_17] [6U] [i_15] [i_18] [i_20]))));
                            var_48 = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-106)) + (((/* implicit */int) arr_58 [i_17] [i_17] [i_17 + 2]))))) ? (((((/* implicit */_Bool) arr_56 [i_16] [(signed char)12])) ? (((/* implicit */int) arr_63 [(signed char)19] [i_20])) : (((/* implicit */int) arr_65 [i_15] [i_15] [i_17] [i_18] [i_20] [i_15] [i_18])))) : ((-(((/* implicit */int) (signed char)105))))));
                            arr_67 [i_18] [i_16] = ((/* implicit */short) (+(((/* implicit */int) (short)-20326))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_21 = 4; i_21 < 19; i_21 += 1) 
            {
                arr_70 [i_21] [1U] [i_16] [i_21] = ((/* implicit */unsigned int) var_9);
                arr_71 [(signed char)19] [i_21] [i_21 + 1] = ((/* implicit */short) ((((/* implicit */int) (signed char)79)) >> (((((((/* implicit */int) var_11)) | (((/* implicit */int) arr_54 [i_21 - 4])))) + (78)))));
                var_49 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8191))) % (1986716499U)));
                var_50 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) arr_59 [(short)19] [i_16] [i_16] [i_16])) : (((/* implicit */int) ((((/* implicit */int) (signed char)63)) < (((/* implicit */int) (signed char)(-127 - 1))))))))));
                var_51 = ((/* implicit */signed char) min((var_51), ((signed char)76)));
            }
        }
        var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) max((((/* implicit */unsigned int) arr_62 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])), (min((0U), (((/* implicit */unsigned int) (short)25121)))))))));
        arr_72 [i_15] [i_15] = ((/* implicit */unsigned int) (((~(((/* implicit */int) max((arr_56 [i_15] [i_15]), (((/* implicit */short) (signed char)-56))))))) >> (((var_2) - (2201810262U)))));
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 20; i_22 += 1) 
        {
            for (signed char i_23 = 0; i_23 < 20; i_23 += 1) 
            {
                {
                    var_53 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_74 [7U] [i_22] [(signed char)6]))) == ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_53 [i_15] [i_22] [i_23])))))));
                    var_54 = ((/* implicit */short) arr_53 [i_15] [i_22] [i_23]);
                    var_55 = ((/* implicit */short) ((max((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))), (((((/* implicit */_Bool) 248675936U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))))) >= (((/* implicit */int) (short)-25122))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_24 = 2; i_24 < 21; i_24 += 1) 
    {
        var_56 = arr_80 [i_24 + 2];
        /* LoopNest 3 */
        for (unsigned int i_25 = 0; i_25 < 23; i_25 += 1) 
        {
            for (short i_26 = 2; i_26 < 21; i_26 += 1) 
            {
                for (short i_27 = 0; i_27 < 23; i_27 += 1) 
                {
                    {
                        arr_91 [i_27] [i_27] [i_27] [i_27] = ((/* implicit */short) var_15);
                        var_57 |= ((/* implicit */unsigned int) var_6);
                        var_58 = var_10;
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_28 = 0; i_28 < 12; i_28 += 2) 
    {
        for (short i_29 = 0; i_29 < 12; i_29 += 1) 
        {
            for (unsigned int i_30 = 1; i_30 < 11; i_30 += 2) 
            {
                {
                    var_59 = ((/* implicit */unsigned int) ((signed char) (+(arr_53 [(signed char)15] [i_29] [i_30]))));
                    arr_101 [(short)1] [i_29] [i_29] = ((/* implicit */short) 3950766912U);
                    arr_102 [(signed char)0] [i_30 - 1] = ((/* implicit */short) arr_16 [i_28] [i_28] [(short)14] [(short)4] [i_28]);
                    var_60 = ((/* implicit */unsigned int) ((short) 1822098501U));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_31 = 4; i_31 < 22; i_31 += 1) 
    {
        for (unsigned int i_32 = 2; i_32 < 21; i_32 += 1) 
        {
            {
                var_61 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) << (((((/* implicit */int) arr_88 [i_31 - 4])) - (3923))))))));
                /* LoopNest 2 */
                for (short i_33 = 2; i_33 < 22; i_33 += 1) 
                {
                    for (unsigned int i_34 = 0; i_34 < 23; i_34 += 1) 
                    {
                        {
                            var_62 = ((/* implicit */short) max((var_62), (((short) ((((/* implicit */_Bool) (short)12481)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (short)(-32767 - 1))))))));
                            var_63 = ((/* implicit */signed char) var_5);
                            var_64 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_89 [i_31] [i_32] [i_33 - 1] [i_34]))));
                        }
                    } 
                } 
                var_65 -= ((/* implicit */unsigned int) arr_110 [i_32] [(signed char)8] [i_32] [i_32 - 2]);
                /* LoopNest 3 */
                for (signed char i_35 = 0; i_35 < 23; i_35 += 1) 
                {
                    for (unsigned int i_36 = 2; i_36 < 22; i_36 += 1) 
                    {
                        for (signed char i_37 = 0; i_37 < 23; i_37 += 1) 
                        {
                            {
                                var_66 = ((/* implicit */short) (~(141520937U)));
                                var_67 = (short)-32760;
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_38 = 0; i_38 < 23; i_38 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_39 = 3; i_39 < 20; i_39 += 2) 
                    {
                        var_68 = ((/* implicit */short) ((max((var_3), (arr_106 [(short)18] [i_31]))) >> (((((((/* implicit */_Bool) 3950766920U)) ? (((/* implicit */int) arr_88 [i_32 + 1])) : (((/* implicit */int) var_18)))) - (3911)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_40 = 0; i_40 < 23; i_40 += 1) 
                        {
                            var_69 = ((/* implicit */short) max((var_69), (((/* implicit */short) (+((~(((/* implicit */int) arr_122 [i_39 + 1] [i_39] [i_39] [i_39] [i_39] [i_39])))))))));
                            arr_131 [(signed char)19] [i_32] [i_32] [i_31] [i_32] = ((/* implicit */unsigned int) var_6);
                            var_70 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_125 [i_31]))));
                        }
                        for (signed char i_41 = 1; i_41 < 20; i_41 += 1) 
                        {
                            var_71 = ((short) (!(((/* implicit */_Bool) arr_82 [i_31 - 3]))));
                            arr_135 [i_31] [i_32] [i_32] [i_31] [i_38] [i_39] [i_41] = var_0;
                        }
                    }
                    arr_136 [(signed char)19] [i_31] [i_31] [i_31] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) (signed char)-57))));
                    var_72 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) var_1))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_42 = 0; i_42 < 23; i_42 += 1) 
    {
        for (signed char i_43 = 1; i_43 < 20; i_43 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_44 = 0; i_44 < 23; i_44 += 1) 
                {
                    var_73 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)17349))) % (arr_79 [i_42])));
                    var_74 = ((/* implicit */unsigned int) max((var_74), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_110 [(short)19] [i_42] [i_43] [i_44])) : (((/* implicit */int) arr_89 [i_42] [i_43] [i_43 - 1] [i_43])))) == ((((+(((/* implicit */int) arr_90 [i_42] [i_43] [i_43] [17U])))) >> (((((((/* implicit */_Bool) arr_111 [i_42])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (765168637U))) - (4294949707U))))))))));
                    /* LoopSeq 1 */
                    for (short i_45 = 1; i_45 < 21; i_45 += 1) 
                    {
                        var_75 = ((/* implicit */signed char) max((((/* implicit */int) arr_109 [i_43] [i_42])), (((((/* implicit */_Bool) ((unsigned int) arr_123 [i_42]))) ? ((+(((/* implicit */int) (signed char)-35)))) : (((/* implicit */int) ((short) 4294967295U)))))));
                        var_76 &= ((/* implicit */short) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_146 [i_42] [i_43 + 3] [5U]))))), (arr_83 [i_43] [(short)10] [i_45 + 2])));
                        arr_147 [i_42] [i_42] = ((/* implicit */short) arr_119 [i_43 + 3] [(signed char)21] [i_44] [i_45 + 2] [(short)12] [i_42]);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_46 = 0; i_46 < 23; i_46 += 1) 
                    {
                        arr_150 [i_42] [i_43] [(signed char)3] [i_46] = (short)25729;
                        arr_151 [11U] [i_43] [i_44] [i_42] = ((/* implicit */signed char) 355024637U);
                        var_77 = ((/* implicit */short) (~(((/* implicit */int) var_12))));
                        var_78 = ((/* implicit */unsigned int) ((short) arr_130 [i_42]));
                    }
                    for (short i_47 = 0; i_47 < 23; i_47 += 1) 
                    {
                        var_79 = ((/* implicit */signed char) min((var_79), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
                        var_80 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) arr_82 [i_43 + 2])), ((+(arr_138 [4U])))))));
                    }
                    for (signed char i_48 = 0; i_48 < 23; i_48 += 1) 
                    {
                        arr_158 [i_42] [i_44] [i_43] [i_42] = ((/* implicit */short) ((signed char) var_12));
                        var_81 ^= ((/* implicit */short) ((signed char) min((arr_103 [i_42]), (((/* implicit */unsigned int) min((arr_140 [i_42] [(signed char)10] [16U]), ((short)-12)))))));
                    }
                    var_82 = ((/* implicit */short) min((var_82), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (765168637U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_122 [i_43 + 2] [i_43 + 1] [i_43 + 3] [i_43 + 1] [i_43 + 2] [i_43 + 3])))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_122 [i_43 + 1] [i_43 + 2] [i_43 - 1] [(signed char)21] [i_43] [i_43 + 1])))) : (((/* implicit */int) ((signed char) (short)-25121))))))));
                }
                var_83 ^= ((/* implicit */unsigned int) var_15);
                var_84 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_104 [i_43 + 2]))))) ? (((/* implicit */int) arr_153 [(short)19])) : ((-(((/* implicit */int) ((signed char) arr_117 [i_43] [i_42])))))));
            }
        } 
    } 
}
