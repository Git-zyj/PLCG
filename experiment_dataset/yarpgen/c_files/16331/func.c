/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16331
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)21297)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))) : (((((/* implicit */_Bool) ((short) (unsigned short)48604))) ? (((/* implicit */int) ((short) var_12))) : (((/* implicit */int) ((_Bool) (unsigned short)51762)))))));
    var_16 = ((/* implicit */short) ((((/* implicit */int) min((var_13), (((/* implicit */short) var_5))))) <= (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((var_5) ? (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 3])) : (((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 3])))) - (((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 4]))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    arr_9 [i_1 - 3] [i_0] [i_1 - 3] [i_0] = ((/* implicit */short) arr_7 [i_0]);
                    arr_10 [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0]);
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) (unsigned short)49465)) - (((/* implicit */int) var_10)))))));
                    arr_11 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((short) (unsigned short)16071));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) arr_15 [i_2] [i_4]);
                                arr_17 [i_4] [i_4] = ((/* implicit */long long int) arr_1 [i_1 + 1] [i_1]);
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((_Bool) var_7)))));
                    var_20 = ((/* implicit */long long int) ((_Bool) max((arr_0 [i_1 - 4] [i_1 - 2]), (arr_8 [i_0] [i_0] [i_1 + 1]))));
                }
                for (long long int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_6] = ((/* implicit */long long int) min(((unsigned short)49465), (((unsigned short) var_0))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 4; i_7 < 15; i_7 += 2) 
                    {
                        for (long long int i_8 = 2; i_8 < 15; i_8 += 2) 
                        {
                            {
                                arr_28 [i_8] [i_7] [i_6] [i_6] [i_6] [i_1] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */_Bool) -9223372036854775806LL)) ? (((/* implicit */int) (short)-13329)) : (((/* implicit */int) var_3)))) < (((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_1] [i_6] [i_7] [i_8 + 1] [i_8 - 2]))))));
                                var_21 += ((/* implicit */short) ((_Bool) ((var_6) ? (((/* implicit */int) arr_13 [i_1 - 2] [i_6] [i_6] [i_6] [i_7 - 2])) : (((/* implicit */int) arr_13 [i_1 - 2] [i_1 - 2] [i_7] [i_7 - 3] [i_7 - 2])))));
                                arr_29 [i_0] [i_1] [i_6] [i_7] [i_8] [i_6] = ((/* implicit */short) min((((((-9223372036854775798LL) + (9223372036854775807LL))) >> (((/* implicit */int) arr_24 [i_8 + 1])))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_24 [i_8 - 1])), (arr_12 [i_8 - 2] [i_8 - 2]))))));
                            }
                        } 
                    } 
                }
                for (long long int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                {
                    var_22 += ((/* implicit */_Bool) (((+(((/* implicit */int) (short)25)))) << (((long long int) arr_24 [i_1 + 1]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_10] = ((((long long int) (unsigned short)9)) / (((/* implicit */long long int) ((/* implicit */int) var_13))));
                        arr_39 [i_0] [i_1] [i_10] [i_10] [i_1] [i_10] = ((unsigned short) (_Bool)1);
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((unsigned short) var_0)))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_42 [i_9] = ((/* implicit */long long int) ((short) arr_14 [i_11] [i_1] [i_1] [i_1] [i_0] [i_0]));
                        arr_43 [i_0] [i_1] [i_9] [i_11] = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5548))) : (var_12));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) min((((/* implicit */int) min((arr_44 [i_12]), (arr_44 [i_12])))), (((((/* implicit */_Bool) min(((unsigned short)14378), (arr_45 [i_12])))) ? (((/* implicit */int) ((unsigned short) var_3))) : (((((/* implicit */_Bool) arr_45 [i_12])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13)))))))))));
        var_25 &= ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_44 [i_12])))) <= (((/* implicit */int) min((((/* implicit */unsigned short) arr_44 [i_12])), ((unsigned short)2))))));
    }
    for (short i_13 = 4; i_13 < 15; i_13 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), ((unsigned short)32509)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            arr_52 [i_13 - 4] [i_14] = ((/* implicit */short) ((unsigned short) (unsigned short)49465));
            /* LoopSeq 2 */
            for (short i_15 = 0; i_15 < 16; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 2; i_16 < 15; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_60 [i_13] [i_14] |= ((/* implicit */unsigned short) var_14);
                            arr_61 [i_13 - 4] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)9)))) ? (((((((/* implicit */int) arr_58 [i_13] [i_13] [i_14] [i_13] [i_16] [i_17])) + (2147483647))) << (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_0))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) var_6))));
                            arr_62 [i_13] [i_13] [i_13] [i_13 - 3] = ((/* implicit */_Bool) ((short) var_1));
                            var_28 = ((/* implicit */unsigned short) ((short) arr_44 [i_13 - 1]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_18 = 4; i_18 < 14; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)51158)) & (((/* implicit */int) (unsigned short)64984))));
                            var_30 *= ((/* implicit */_Bool) ((long long int) ((long long int) var_3)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_20 = 2; i_20 < 12; i_20 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_21 = 0; i_21 < 16; i_21 += 2) 
                    {
                        var_31 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned short)51158)) ? (-6562639449145738206LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27388))))));
                        arr_74 [i_21] [i_20 + 3] [i_15] [i_13] = ((/* implicit */short) (((-(((/* implicit */int) arr_58 [i_21] [i_20] [i_15] [i_14] [i_13] [i_13])))) >> (((/* implicit */int) ((_Bool) var_12)))));
                    }
                    for (short i_22 = 3; i_22 < 15; i_22 += 4) 
                    {
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) < (-9223372036854775801LL))) ? (((/* implicit */int) ((_Bool) (unsigned short)35733))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)20)))))))));
                        var_33 += ((/* implicit */short) (unsigned short)0);
                    }
                    arr_77 [i_13] [i_14] [i_13] [i_15] = ((/* implicit */unsigned short) ((short) arr_16 [i_13] [i_13] [i_13] [i_13] [i_13 - 4] [i_13]));
                    arr_78 [i_13] = ((/* implicit */unsigned short) ((long long int) var_7));
                }
                for (short i_23 = 2; i_23 < 12; i_23 += 3) /* same iter space */
                {
                    arr_82 [i_13] [i_14] [i_23] [i_15] = ((/* implicit */unsigned short) -9223372036854775798LL);
                    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) var_8))));
                    /* LoopSeq 2 */
                    for (unsigned short i_24 = 1; i_24 < 15; i_24 += 4) 
                    {
                        var_35 += ((unsigned short) var_3);
                        arr_85 [i_24] [i_23] [i_15] [i_23] [i_13] = ((/* implicit */unsigned short) var_3);
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((short) arr_66 [i_13 - 2] [i_14] [i_15] [i_23 + 3] [i_24 - 1] [i_24 - 1])))));
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_23 - 2] [i_23 - 2]))) : (arr_72 [i_13]))))));
                    }
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                    {
                        var_38 -= ((/* implicit */_Bool) ((unsigned short) (short)(-32767 - 1)));
                        var_39 ^= ((/* implicit */long long int) ((short) var_0));
                        arr_89 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) arr_58 [i_13 + 1] [i_25 - 1] [i_13 + 1] [i_23] [i_25 - 1] [i_25 - 1])) ? (((/* implicit */int) arr_58 [i_14] [i_25 - 1] [i_15] [i_25 - 1] [i_25] [i_15])) : (((/* implicit */int) var_8))));
                        var_40 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((((/* implicit */int) arr_4 [i_13] [i_13])) - (((/* implicit */int) var_8))))));
                        arr_90 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_23] [i_23] [i_25] = ((/* implicit */short) ((unsigned short) ((_Bool) (unsigned short)0)));
                    }
                    arr_91 [i_23] = ((/* implicit */_Bool) ((long long int) arr_30 [i_13] [i_13 + 1] [i_13]));
                }
                /* LoopSeq 1 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    var_41 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)5)))));
                    arr_96 [i_13 - 3] [i_13 - 3] [i_15] [i_13 - 3] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_11))) >> (((/* implicit */int) arr_59 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_14] [i_15] [i_26] [i_26]))));
                    arr_97 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) var_8);
                }
                var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)64653)) & (((/* implicit */int) arr_45 [i_13]))));
            }
            for (unsigned short i_27 = 0; i_27 < 16; i_27 += 2) 
            {
                var_43 -= ((/* implicit */long long int) ((unsigned short) ((arr_33 [i_13 - 4] [i_14] [i_27]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))));
                var_44 ^= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_12))) % (((/* implicit */int) ((((/* implicit */int) arr_54 [i_13 + 1] [i_14] [i_27] [i_27])) < (((/* implicit */int) var_4)))))));
                var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_51 [i_13] [i_13] [i_27])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) ((short) arr_20 [i_14] [i_27] [i_27]))))))));
            }
        }
    }
    for (short i_28 = 4; i_28 < 15; i_28 += 2) /* same iter space */
    {
        arr_104 [i_28] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_26 [i_28 - 2]))))));
        arr_105 [i_28] [i_28] = ((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) ((_Bool) arr_94 [i_28 - 4] [i_28 - 4]))) : (((/* implicit */int) arr_20 [i_28 - 1] [i_28] [i_28 + 1])))), (((/* implicit */int) ((short) ((_Bool) arr_75 [i_28] [i_28] [i_28] [i_28 - 3] [i_28 - 3]))))));
        var_46 = ((/* implicit */short) min((var_10), (((/* implicit */unsigned short) (short)8192))));
        arr_106 [i_28 - 1] [i_28 - 1] = ((/* implicit */short) ((((_Bool) min(((unsigned short)8064), ((unsigned short)0)))) ? (((long long int) (unsigned short)1)) : (((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)14378)))))))));
        /* LoopSeq 3 */
        for (long long int i_29 = 0; i_29 < 16; i_29 += 2) 
        {
            var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) var_13))));
            var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((var_11) < (((long long int) (unsigned short)14378)))))));
        }
        for (long long int i_30 = 2; i_30 < 12; i_30 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_31 = 1; i_31 < 12; i_31 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_32 = 0; i_32 < 16; i_32 += 2) 
                {
                    for (unsigned short i_33 = 0; i_33 < 16; i_33 += 2) 
                    {
                        {
                            var_49 = (unsigned short)1;
                            var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_28] [i_32] [i_28] [i_32])) << (((((/* implicit */int) var_0)) - (10960)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)21741))))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)22209))) : (((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)20762)) : (((/* implicit */int) (short)31288)))))))))));
                            var_51 = (short)-16839;
                            var_52 = ((/* implicit */_Bool) (unsigned short)51158);
                        }
                    } 
                } 
                arr_120 [i_31] = ((/* implicit */_Bool) arr_7 [i_28 + 1]);
            }
            arr_121 [i_28] [i_28] [i_30] = ((/* implicit */short) (unsigned short)0);
        }
        for (short i_34 = 1; i_34 < 15; i_34 += 2) 
        {
            arr_124 [i_28] [i_28] = ((_Bool) ((short) ((long long int) arr_100 [i_34 - 1] [i_34 - 1] [i_34 - 1] [i_28 - 4])));
            /* LoopNest 2 */
            for (unsigned short i_35 = 2; i_35 < 15; i_35 += 1) 
            {
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    {
                        arr_132 [i_35] [i_35] [i_35] [i_36] [i_35] = ((/* implicit */long long int) min(((unsigned short)14388), ((unsigned short)14367)));
                        var_53 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775798LL)) ? (((/* implicit */int) arr_35 [i_35] [i_35] [i_28] [i_36] [i_36])) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_34])))) : (((((/* implicit */_Bool) (unsigned short)43327)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)14372))))))) - (((((/* implicit */_Bool) arr_30 [i_36] [i_34 + 1] [i_28])) ? (arr_30 [i_35 + 1] [i_35 + 1] [i_28 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) ((7500501077958651789LL) / (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
                        var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_37 = 1; i_37 < 1; i_37 += 1) 
            {
                for (short i_38 = 0; i_38 < 16; i_38 += 1) 
                {
                    {
                        arr_137 [i_28] [i_28] [i_37] [i_28] = max((((/* implicit */long long int) var_10)), (((((var_11) == (((/* implicit */long long int) ((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521))) : (min((((/* implicit */long long int) (_Bool)1)), (-3098965041495110143LL))))));
                        arr_138 [i_37] [i_37 - 1] [i_37 - 1] [i_37] = min((((4870785908370535954LL) - (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) arr_41 [i_28] [i_34 + 1] [i_37] [i_37] [i_38])));
                        arr_139 [i_28] [i_34] [i_34] [i_34 + 1] &= ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_39 = 4; i_39 < 15; i_39 += 4) 
            {
                for (short i_40 = 0; i_40 < 16; i_40 += 4) 
                {
                    {
                        arr_144 [i_28] [i_34] [i_34] [i_39 - 3] [i_39 - 3] [i_40] = min((((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_19 [i_28] [i_34 + 1] [i_39] [i_40]), (((/* implicit */unsigned short) var_3)))))) : (((var_3) ? (var_11) : (2972254673704442324LL))))), (((/* implicit */long long int) var_8)));
                        arr_145 [i_28] [i_34] [i_28] [i_40] = ((/* implicit */unsigned short) ((min((((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)51147)))), (((/* implicit */int) var_3)))) < (((((/* implicit */_Bool) ((3930076928138033114LL) % (1744896819347775824LL)))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((/* implicit */int) arr_140 [i_39]))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (_Bool i_41 = 1; i_41 < 1; i_41 += 1) 
    {
        var_56 = ((/* implicit */long long int) max((var_56), (((var_7) / (((/* implicit */long long int) ((/* implicit */int) arr_146 [i_41 - 1] [i_41 - 1])))))));
        arr_149 [i_41] = ((/* implicit */long long int) ((_Bool) var_6));
        arr_150 [i_41] [i_41] = ((/* implicit */_Bool) arr_147 [i_41]);
    }
}
