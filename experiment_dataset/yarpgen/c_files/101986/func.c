/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101986
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((/* implicit */int) var_9)))))));
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0 - 4] = ((/* implicit */short) ((((/* implicit */int) var_12)) != ((+(((/* implicit */int) (short)7475))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_0 - 2] [i_1] = max((min((arr_8 [i_0 + 1] [i_0 - 3]), (var_19))), (((short) arr_8 [i_0 + 1] [i_0 - 3])));
                    var_21 ^= arr_5 [i_0 + 1] [i_1] [i_2];
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */short) (+(((/* implicit */int) var_2))));
        var_22 ^= ((/* implicit */short) (-((-(((/* implicit */int) arr_6 [i_3]))))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_5])) ? (((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_13)))))));
            arr_18 [i_4] = ((/* implicit */short) (+(((/* implicit */int) (short)-2533))));
            var_24 = ((/* implicit */short) max((var_24), (var_19)));
        }
        for (short i_6 = 3; i_6 < 10; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_7 = 2; i_7 < 10; i_7 += 3) 
            {
                var_25 = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (~(((/* implicit */int) var_2)))))));
            }
            for (short i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                var_27 |= ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)26506)) : (((/* implicit */int) var_7)))) ^ (((/* implicit */int) (short)-14790))));
                arr_26 [i_4] [i_6] [i_6 - 2] [i_4] = ((/* implicit */short) (+(((/* implicit */int) var_12))));
                var_28 *= ((/* implicit */short) (-((-(((/* implicit */int) (short)-1))))));
            }
            var_29 *= ((/* implicit */short) ((((/* implicit */int) arr_16 [i_4])) + (((/* implicit */int) arr_5 [i_4] [i_4] [(short)8]))));
            var_30 -= ((/* implicit */short) ((((/* implicit */int) arr_5 [i_6 - 3] [i_4] [i_4])) >= (((/* implicit */int) (short)12241))));
            arr_27 [i_4] [i_4] = ((short) (short)127);
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                var_31 ^= ((/* implicit */short) (-(((((/* implicit */int) var_16)) % (((/* implicit */int) arr_7 [i_6 - 3]))))));
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    var_32 = ((short) arr_28 [i_6 + 1] [i_6] [i_6 - 2]);
                    var_33 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
                }
                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (short)28541)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_6 - 2] [i_6 - 2]))));
            }
            for (short i_11 = 2; i_11 < 10; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    var_35 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_12] [i_4])) : (((/* implicit */int) (short)-9132))))));
                    arr_39 [i_4] [i_6] [i_4] [(short)1] = ((/* implicit */short) (-((+(((/* implicit */int) (short)-19529))))));
                }
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (+(((/* implicit */int) (short)32751)))))));
            }
        }
        /* LoopSeq 3 */
        for (short i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            var_37 = ((/* implicit */short) (-((-(((/* implicit */int) (short)25593))))));
            arr_42 [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [(short)1] [i_4] [i_13])) ? (((/* implicit */int) arr_28 [i_4] [(short)0] [i_4])) : (((/* implicit */int) var_10))));
        }
        for (short i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            arr_45 [i_4] [i_14] = ((/* implicit */short) ((((/* implicit */int) (short)11741)) != (((/* implicit */int) (short)(-32767 - 1)))));
            arr_46 [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30619)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_43 [i_14] [i_4]))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_8))));
            arr_47 [(short)5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17))));
        }
        for (short i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            arr_51 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_11))));
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                for (short i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    {
                        var_38 = ((/* implicit */short) max((var_38), (((short) arr_25 [i_17] [i_16] [i_15] [i_4]))));
                        /* LoopSeq 3 */
                        for (short i_18 = 0; i_18 < 11; i_18 += 1) /* same iter space */
                        {
                            var_39 -= ((/* implicit */short) (-(((/* implicit */int) var_12))));
                            var_40 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_60 [(short)1] [i_15] [i_15] [(short)6] [i_15] [i_15])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((/* implicit */int) arr_58 [i_15] [i_17]))));
                        }
                        for (short i_19 = 0; i_19 < 11; i_19 += 1) /* same iter space */
                        {
                            arr_63 [i_4] [i_17] [i_16] [(short)9] [i_15] [i_15] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_16))) ? (((((/* implicit */_Bool) (short)-22223)) ? (((/* implicit */int) arr_13 [i_4] [(short)0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11133)))))));
                            var_41 *= ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)2056)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_37 [i_4] [i_15] [i_16] [(short)3] [i_19]))));
                        }
                        for (short i_20 = 0; i_20 < 11; i_20 += 1) /* same iter space */
                        {
                            arr_66 [i_4] [i_15] [i_4] [i_16] [(short)2] [i_17] [i_15] = ((/* implicit */short) ((((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))) / (((/* implicit */int) var_18))));
                            arr_67 [(short)10] [(short)8] |= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((short) var_16))) : (((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((((/* implicit */int) (short)29377)) - (29361)))))));
                            arr_68 [i_4] = ((/* implicit */short) (~(((/* implicit */int) ((short) var_17)))));
                        }
                        /* LoopSeq 2 */
                        for (short i_21 = 2; i_21 < 10; i_21 += 4) /* same iter space */
                        {
                            var_42 -= ((/* implicit */short) ((((((/* implicit */int) (short)-15333)) + (2147483647))) << (((((((/* implicit */int) (short)-26049)) + (26061))) - (12)))));
                            var_43 -= ((/* implicit */short) (-(((/* implicit */int) (short)8233))));
                            arr_71 [i_15] [i_15] [i_15] [i_4] [i_15] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                        }
                        for (short i_22 = 2; i_22 < 10; i_22 += 4) /* same iter space */
                        {
                            arr_74 [i_4] [i_4] [i_4] [i_16] [i_4] [i_22] [i_22] = var_18;
                            var_44 += ((/* implicit */short) (~((-(((/* implicit */int) arr_59 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))))));
                        }
                    }
                } 
            } 
            var_45 *= ((/* implicit */short) (~(((/* implicit */int) arr_16 [i_15]))));
        }
        /* LoopNest 3 */
        for (short i_23 = 0; i_23 < 11; i_23 += 1) 
        {
            for (short i_24 = 0; i_24 < 11; i_24 += 4) 
            {
                for (short i_25 = 0; i_25 < 11; i_25 += 1) 
                {
                    {
                        arr_82 [i_23] [i_4] = ((/* implicit */short) ((((((((/* implicit */int) var_11)) % (((/* implicit */int) var_13)))) + (2147483647))) >> (((((/* implicit */int) arr_69 [i_4] [i_23] [i_24] [(short)7])) - (25915)))));
                        var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) (((!(((/* implicit */_Bool) (short)-2118)))) && (((/* implicit */_Bool) arr_36 [i_4] [i_23] [i_24] [i_24] [i_25])))))));
                        arr_83 [i_24] [i_4] = arr_23 [i_4] [i_4] [i_4] [i_4];
                    }
                } 
            } 
        } 
        arr_84 [(short)9] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_59 [i_4] [i_4] [i_4] [i_4] [(short)3] [i_4])) ? (((/* implicit */int) arr_59 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_3))));
    }
    var_47 |= max((var_5), (var_14));
    /* LoopSeq 2 */
    for (short i_26 = 0; i_26 < 23; i_26 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_27 = 0; i_27 < 23; i_27 += 3) /* same iter space */
        {
            var_48 -= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-1))));
            var_49 *= ((/* implicit */short) ((((/* implicit */int) max((arr_90 [i_26] [i_26]), (arr_90 [(short)5] [i_27])))) + (min(((+(((/* implicit */int) var_16)))), ((-(((/* implicit */int) var_5))))))));
            arr_91 [i_27] [i_27] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_89 [i_27] [i_26] [i_26])))))));
        }
        for (short i_28 = 0; i_28 < 23; i_28 += 3) /* same iter space */
        {
            arr_96 [i_26] [i_28] [(short)10] = ((/* implicit */short) ((((/* implicit */int) max((arr_0 [i_26] [i_26]), (arr_0 [i_26] [i_28])))) - (((/* implicit */int) max((arr_0 [i_26] [i_28]), (arr_0 [i_26] [i_28]))))));
            var_50 &= ((/* implicit */short) (~((-((+(((/* implicit */int) var_8))))))));
            var_51 = ((/* implicit */short) (-((+(((/* implicit */int) (short)8747))))));
            var_52 = ((/* implicit */short) min((var_52), (var_1)));
            var_53 = ((/* implicit */short) (-(((/* implicit */int) max((var_19), (var_6))))));
        }
        for (short i_29 = 0; i_29 < 23; i_29 += 3) /* same iter space */
        {
            arr_99 [i_29] = ((/* implicit */short) ((((/* implicit */_Bool) (short)19801)) && (((/* implicit */_Bool) (short)-15612))));
            /* LoopSeq 3 */
            for (short i_30 = 0; i_30 < 23; i_30 += 4) 
            {
                arr_103 [(short)2] [i_29] [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_88 [i_29])) ? (((/* implicit */int) arr_88 [i_29])) : (((/* implicit */int) arr_88 [i_26]))))) ? (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_6)))), ((+(((/* implicit */int) arr_87 [i_30])))))) : (((((/* implicit */_Bool) (short)-31533)) ? (((/* implicit */int) arr_6 [i_26])) : (((/* implicit */int) var_4))))));
                /* LoopSeq 1 */
                for (short i_31 = 0; i_31 < 23; i_31 += 1) 
                {
                    var_54 = ((/* implicit */short) max((var_54), (arr_98 [i_29] [(short)16] [i_31])));
                    var_55 = ((/* implicit */short) (-(((/* implicit */int) var_14))));
                    var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-9449)))))));
                    var_57 ^= ((short) arr_86 [(short)16]);
                }
                /* LoopNest 2 */
                for (short i_32 = 3; i_32 < 22; i_32 += 4) 
                {
                    for (short i_33 = 0; i_33 < 23; i_33 += 3) 
                    {
                        {
                            arr_113 [i_29] [i_29] [i_30] [i_30] [i_32] [i_30] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_8))))))));
                            var_58 *= ((short) ((((/* implicit */int) arr_85 [i_32 - 3])) == (((/* implicit */int) arr_107 [i_32 - 2] [i_32 - 3] [i_32 - 2]))));
                            var_59 = ((/* implicit */short) max((var_59), (((short) (+(((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_34 = 0; i_34 < 23; i_34 += 1) 
                {
                    for (short i_35 = 0; i_35 < 23; i_35 += 4) 
                    {
                        {
                            arr_119 [(short)13] [i_29] [i_29] [i_34] [i_29] [i_29] [i_30] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_16))))), (var_5)))) ^ ((~(((/* implicit */int) min((var_19), (var_14))))))));
                            var_60 -= ((/* implicit */short) (-(min((((/* implicit */int) arr_86 [i_34])), (((((/* implicit */_Bool) arr_115 [i_26] [i_29] [i_30] [(short)11])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
            }
            for (short i_36 = 0; i_36 < 23; i_36 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_37 = 0; i_37 < 23; i_37 += 4) 
                {
                    arr_124 [i_29] [i_36] [i_36] [i_37] = ((short) min((min(((short)-20917), ((short)13739))), (arr_6 [i_26])));
                    arr_125 [i_36] [i_29] [i_29] [i_37] [i_26] [i_29] = ((/* implicit */short) (~(((/* implicit */int) (short)22766))));
                    arr_126 [(short)4] [i_36] [i_29] [i_36] [i_36] = ((/* implicit */short) (-(((((/* implicit */int) (short)22118)) * (((/* implicit */int) var_12))))));
                }
                /* LoopSeq 1 */
                for (short i_38 = 0; i_38 < 23; i_38 += 4) 
                {
                    arr_130 [i_26] [i_29] [i_36] [i_38] [i_29] [i_36] |= arr_114 [i_38] [i_36] [i_29] [i_26];
                    var_61 = ((/* implicit */short) min(((+(((/* implicit */int) var_19)))), ((-(((/* implicit */int) arr_105 [i_26] [i_29] [i_29] [i_36] [i_38]))))));
                }
                var_62 = ((/* implicit */short) ((((/* implicit */int) max(((short)-9439), (var_16)))) < ((-(((/* implicit */int) var_12))))));
                var_63 = arr_0 [i_26] [i_26];
                var_64 ^= ((/* implicit */short) (~(((/* implicit */int) min((var_1), (arr_89 [i_26] [i_29] [i_36]))))));
            }
            for (short i_39 = 0; i_39 < 23; i_39 += 4) /* same iter space */
            {
                arr_133 [i_39] [i_39] [i_39] [(short)16] &= var_9;
                var_65 = ((/* implicit */short) max((var_65), (var_0)));
                arr_134 [i_39] [i_29] [i_39] [i_39] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_107 [i_26] [i_29] [i_29])) ? (((/* implicit */int) arr_107 [(short)19] [i_29] [(short)18])) : (((/* implicit */int) arr_107 [i_26] [(short)2] [i_39])))))));
            }
        }
        var_66 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? ((-(((/* implicit */int) (short)-24997)))) : (((((/* implicit */int) arr_123 [(short)19] [i_26] [i_26] [(short)21] [i_26] [i_26])) - (((/* implicit */int) max((arr_116 [i_26] [i_26] [i_26] [i_26]), ((short)16384))))))));
        arr_135 [i_26] [i_26] = arr_114 [(short)5] [i_26] [i_26] [i_26];
    }
    /* vectorizable */
    for (short i_40 = 0; i_40 < 21; i_40 += 3) 
    {
        var_67 = var_16;
        arr_139 [i_40] [i_40] = ((/* implicit */short) ((((/* implicit */int) arr_121 [(short)6] [i_40] [i_40] [i_40])) >> (((((/* implicit */int) arr_4 [i_40] [i_40])) + (11619)))));
        var_68 = ((/* implicit */short) min((var_68), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) var_11)))))));
        /* LoopSeq 2 */
        for (short i_41 = 1; i_41 < 20; i_41 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_42 = 1; i_42 < 20; i_42 += 3) 
            {
                var_69 = ((/* implicit */short) ((((/* implicit */_Bool) arr_112 [i_41] [i_41] [i_41])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-8233))));
                /* LoopSeq 1 */
                for (short i_43 = 0; i_43 < 21; i_43 += 4) 
                {
                    arr_148 [i_40] [(short)3] [i_42] [(short)3] [i_42 - 1] = var_5;
                    var_70 = ((/* implicit */short) (+(((/* implicit */int) var_16))));
                    var_71 = arr_86 [i_42 + 1];
                }
            }
            for (short i_44 = 4; i_44 < 19; i_44 += 4) 
            {
                var_72 += ((/* implicit */short) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_116 [i_41 - 1] [i_44] [i_41] [i_41 - 1]))));
                var_73 = ((/* implicit */short) max((var_73), (((/* implicit */short) (!(((/* implicit */_Bool) arr_100 [(short)15])))))));
                arr_152 [i_40] [i_41] [i_40] = ((/* implicit */short) (+(((/* implicit */int) (short)496))));
            }
            var_74 = ((/* implicit */short) max((var_74), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_93 [i_40] [i_40] [(short)21]))))))))));
        }
        for (short i_45 = 1; i_45 < 20; i_45 += 3) 
        {
            var_75 += ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_3))) ? (((((/* implicit */_Bool) (short)-11161)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_86 [i_45 - 1]))));
            var_76 = ((/* implicit */short) min((var_76), (((/* implicit */short) (-(((/* implicit */int) arr_117 [i_40] [i_45 - 1])))))));
            var_77 = ((/* implicit */short) max((var_77), (((/* implicit */short) ((((/* implicit */int) arr_129 [i_45 + 1] [i_45 + 1])) <= (((/* implicit */int) var_19)))))));
        }
    }
    var_78 = max((((short) (~(((/* implicit */int) var_11))))), (min((max((var_3), (var_12))), (var_19))));
}
