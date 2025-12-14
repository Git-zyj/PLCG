/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11315
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
    var_14 = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_13)))) ? (((/* implicit */long long int) var_10)) : (var_7));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 2074168349))) ? (((var_12) + (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) var_11))));
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_16 = var_2;
                            arr_13 [i_0] [i_0] [i_1] [i_3] [i_4] [i_1] [i_2] = ((/* implicit */int) var_0);
                        }
                    } 
                } 
                arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((2074168349) > (((/* implicit */int) (unsigned char)255))));
            }
            for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (var_11)));
                var_18 = ((int) -2074168349);
                arr_18 [i_1] [8LL] [i_1] [i_5] = ((/* implicit */short) var_1);
            }
            for (int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 3; i_8 < 9; i_8 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) var_9)))))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (2074168348) : (((/* implicit */int) var_5)))))));
                        var_21 = ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) 2147483647)));
                        arr_26 [i_0] [(short)1] [(unsigned char)3] [i_1] [i_6] [i_7] [i_8 - 2] = ((/* implicit */short) ((var_7) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59383))) : (var_7)))));
                    }
                    for (unsigned short i_9 = 3; i_9 < 9; i_9 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((var_9) - (8987676156832473064LL)))));
                        arr_29 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */long long int) -239606996))));
                        arr_30 [i_1] [i_1] [5LL] [i_1] [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) > (((/* implicit */long long int) var_3))));
                    }
                    arr_31 [i_6] [i_6] [i_1] [(unsigned char)6] [i_6] [i_6] = ((/* implicit */short) var_6);
                    arr_32 [i_6] [i_6] [i_1 + 2] [i_6] |= ((/* implicit */int) ((((/* implicit */long long int) var_10)) / (var_2)));
                }
                /* LoopNest 2 */
                for (short i_10 = 3; i_10 < 11; i_10 += 4) 
                {
                    for (short i_11 = 2; i_11 < 9; i_11 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6225)) ? (65535) : (65517)))) ? (((long long int) var_5)) : (var_12)))));
                            var_24 = ((/* implicit */long long int) var_5);
                            arr_39 [i_0] [i_10] [i_1] [i_10] = ((/* implicit */unsigned char) ((((var_1) > (var_9))) ? (((/* implicit */long long int) ((int) var_0))) : (((long long int) (unsigned short)6147))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_4))));
                arr_40 [i_1] [i_1 + 2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 170679525)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            }
            arr_41 [6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */int) (short)27187))));
            var_26 = ((/* implicit */int) min((var_26), ((~(((/* implicit */int) var_8))))));
        }
        for (short i_12 = 1; i_12 < 10; i_12 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        {
                            arr_51 [i_13] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (var_11) : (65539))) == (((/* implicit */int) (unsigned short)32256))));
                            var_27 = ((/* implicit */int) ((long long int) var_3));
                            arr_52 [i_12] [i_14] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)21466)) : (((/* implicit */int) var_0))))) : (var_2)));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6))) : (var_6)));
                            var_29 = ((/* implicit */unsigned short) (unsigned char)240);
                        }
                    } 
                } 
            } 
            var_30 = ((((/* implicit */_Bool) var_4)) ? (var_1) : (((9223372036854775807LL) + (((/* implicit */long long int) -1561875427)))));
            var_31 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_10)) : (-7895469136272214046LL));
            arr_53 [i_0] [i_0] = ((/* implicit */long long int) ((short) var_3));
        }
        for (int i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            arr_57 [i_0] [5] = ((/* implicit */short) ((int) (unsigned short)34436));
            arr_58 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_1) == (var_2)))) == (((/* implicit */int) var_5))));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                for (short i_18 = 4; i_18 < 10; i_18 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 1) 
                        {
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) var_3))));
                            var_33 = ((/* implicit */int) min((var_33), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (-2074168364)))));
                            arr_67 [i_0] [i_19] [i_18] [i_19] = ((/* implicit */unsigned short) var_4);
                        }
                        arr_68 [i_0] [i_16] [i_17] [i_18] [i_18] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -2074168370)) ? (((/* implicit */long long int) -154465532)) : (var_13))) == (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    }
                } 
            } 
            arr_69 [i_0] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9844))) : (var_2)));
        }
        arr_70 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (short)-3046))))) : (((((/* implicit */int) var_8)) & (((/* implicit */int) var_0))))));
    }
    for (int i_20 = 1; i_20 < 12; i_20 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_21 = 0; i_21 < 13; i_21 += 4) 
        {
            for (int i_22 = 0; i_22 < 13; i_22 += 4) 
            {
                {
                    arr_78 [i_22] [8] [i_21] [i_20 - 1] = ((/* implicit */int) max((max((var_13), (((/* implicit */long long int) ((1702920196) < (((/* implicit */int) var_4))))))), (((/* implicit */long long int) ((short) var_13)))));
                    arr_79 [i_20] = var_13;
                }
            } 
        } 
        arr_80 [3LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30344)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) (short)-27178)) ? (((/* implicit */int) var_8)) : (var_10))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)0)) : (var_10)))));
        var_34 = ((/* implicit */short) var_12);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_23 = 0; i_23 < 13; i_23 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_24 = 0; i_24 < 13; i_24 += 2) /* same iter space */
            {
                var_35 = var_7;
                var_36 = ((/* implicit */unsigned char) ((var_1) & (var_7)));
                /* LoopSeq 2 */
                for (long long int i_25 = 2; i_25 < 11; i_25 += 2) 
                {
                    arr_89 [i_20 + 1] [i_20 + 1] [2] = var_1;
                    arr_90 [(short)1] = var_9;
                    /* LoopSeq 1 */
                    for (int i_26 = 2; i_26 < 11; i_26 += 1) 
                    {
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)-27178)))));
                        var_38 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6154))) : (3498430103566570396LL));
                    }
                }
                for (unsigned char i_27 = 4; i_27 < 12; i_27 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_28 = 0; i_28 < 13; i_28 += 4) 
                    {
                        arr_101 [i_20] [i_23] [i_24] [(unsigned char)8] [i_24] = (~(var_13));
                        arr_102 [i_20] [i_27] [i_24] [i_20] [i_20] = var_13;
                        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) -7473161593923814477LL)) ? (var_7) : (var_1)));
                        arr_103 [i_20] [i_23] [i_24] [i_27] [i_27 + 1] [i_23] [i_27] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (~(var_10)))) : (var_1)));
                    }
                    arr_104 [i_20] [i_23] [i_23] [i_24] [i_27 - 4] [i_24] = ((/* implicit */int) ((var_7) < (((/* implicit */long long int) var_3))));
                    arr_105 [i_27] [i_24] [i_20] = ((/* implicit */int) ((short) var_8));
                }
                var_40 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (var_6)));
            }
            for (int i_29 = 0; i_29 < 13; i_29 += 2) /* same iter space */
            {
                arr_109 [0] [i_23] [i_23] [i_23] = ((((/* implicit */_Bool) (short)-31786)) ? (-4949204838041530981LL) : (((/* implicit */long long int) -1794479848)));
                var_41 = ((/* implicit */long long int) max((var_41), (((long long int) ((((/* implicit */int) var_0)) == (1652206394))))));
                var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_3)) : (var_12))))));
                arr_110 [i_20] [i_20] [i_20] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= ((+(var_9)))));
                arr_111 [i_20] [i_23] [(unsigned short)11] = ((/* implicit */short) ((int) 426186925));
            }
            for (int i_30 = 0; i_30 < 13; i_30 += 2) /* same iter space */
            {
                arr_114 [i_20] [i_23] [i_30] = ((/* implicit */long long int) var_4);
                arr_115 [i_20] [i_23] [5LL] [5LL] = var_1;
                arr_116 [i_30] [i_30] [i_30] [9LL] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1));
                arr_117 [9LL] [i_30] = ((/* implicit */short) var_11);
            }
            /* LoopSeq 1 */
            for (long long int i_31 = 2; i_31 < 11; i_31 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_32 = 1; i_32 < 10; i_32 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_33 = 0; i_33 < 13; i_33 += 4) 
                    {
                        arr_127 [i_20] [i_32] [i_31 + 2] [i_32] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9)));
                        var_43 = ((/* implicit */short) (~(var_7)));
                        arr_128 [i_32] [i_23] [i_31] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (2074168345) : (((/* implicit */int) var_8))))) : (var_12)));
                        arr_129 [i_23] [(short)12] [i_31 - 2] [i_23] [i_32] = ((/* implicit */unsigned char) ((int) var_6));
                    }
                    arr_130 [i_32 + 2] [i_32] [i_32] [i_20] = ((var_1) + (((/* implicit */long long int) var_3)));
                    arr_131 [11] [i_32] = (-(((/* implicit */int) var_5)));
                    arr_132 [i_20] [i_23] [(unsigned short)0] [i_32] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_12))) ? (-4639716135556334485LL) : (((/* implicit */long long int) var_11))));
                }
                for (int i_34 = 1; i_34 < 12; i_34 += 2) 
                {
                    arr_137 [i_20] [i_23] [2] [i_34] [i_31] [i_34] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    /* LoopSeq 1 */
                    for (long long int i_35 = 2; i_35 < 11; i_35 += 3) 
                    {
                        arr_141 [i_20] [(unsigned char)5] [(unsigned char)1] [i_31] [i_34] [i_34] [i_35] = ((/* implicit */int) ((((/* implicit */long long int) var_11)) < (var_13)));
                        var_44 = -4639716135556334485LL;
                        arr_142 [i_20] [i_34] [(short)5] [i_34] = ((/* implicit */long long int) var_0);
                    }
                    arr_143 [i_34] [i_23] [i_34] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_10) : (var_10)));
                    arr_144 [i_34] [i_23] [i_34] [i_34 - 1] = (~(var_7));
                }
                /* LoopSeq 2 */
                for (int i_36 = 1; i_36 < 10; i_36 += 2) 
                {
                    arr_149 [i_31] |= ((long long int) 154465531);
                    arr_150 [i_36] [i_23] [i_36] = ((/* implicit */long long int) ((var_10) < (((/* implicit */int) var_4))));
                }
                for (long long int i_37 = 1; i_37 < 11; i_37 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_38 = 1; i_38 < 12; i_38 += 3) 
                    {
                        arr_157 [i_20] [5] [i_20] [i_20] [i_37] [(unsigned short)1] = ((/* implicit */short) ((((/* implicit */_Bool) 567453553048682496LL)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)27187))) : (var_6))) : (((/* implicit */long long int) ((int) var_11)))));
                        var_45 += ((/* implicit */long long int) ((int) ((var_12) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59404))))));
                    }
                    arr_158 [i_37] [(short)0] = ((/* implicit */int) ((((/* implicit */_Bool) -1134360613)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    arr_159 [i_20] [i_20] [i_20] [i_37] [i_20] = ((/* implicit */long long int) 154465540);
                }
                /* LoopSeq 1 */
                for (long long int i_39 = 0; i_39 < 13; i_39 += 4) 
                {
                    var_46 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_0))));
                    arr_163 [i_20 + 1] [i_20 + 1] [11] = ((/* implicit */int) ((((/* implicit */long long int) 154465531)) < (var_6)));
                    arr_164 [i_20] [i_23] [(unsigned short)8] [10] = ((/* implicit */int) ((long long int) var_7));
                }
                /* LoopSeq 1 */
                for (short i_40 = 2; i_40 < 11; i_40 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_41 = 0; i_41 < 13; i_41 += 4) 
                    {
                        var_47 = ((/* implicit */long long int) var_0);
                        arr_170 [i_31] = ((/* implicit */long long int) var_3);
                        arr_171 [(short)8] [(short)8] [i_31] [i_40] [(short)8] [i_41] [i_41] = (+(var_7));
                        arr_172 [i_20] [i_23] [i_31] [i_40] = ((/* implicit */short) ((((/* implicit */_Bool) 194734001)) ? (2147483647) : (((/* implicit */int) (unsigned char)196))));
                    }
                    for (int i_42 = 0; i_42 < 13; i_42 += 1) 
                    {
                        arr_175 [i_20 - 1] [0] [i_40] = ((((/* implicit */_Bool) var_13)) ? (-718471953) : (174710249));
                        var_48 |= 3319932946688481301LL;
                    }
                    for (int i_43 = 1; i_43 < 11; i_43 += 1) 
                    {
                        var_49 -= var_0;
                        arr_180 [i_43] = ((/* implicit */int) ((short) var_8));
                        arr_181 [i_20 + 1] [i_43] [1LL] [i_31] [i_40] [i_43] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    }
                    arr_182 [i_20] [i_23] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_0))));
                    arr_183 [i_23] [i_23] [i_31] [i_23] [i_20] [i_20] = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (short)9845)) ? (-9032075876616852968LL) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_11)))));
                    arr_184 [(unsigned short)4] [i_23] [(short)1] [4LL] = ((/* implicit */long long int) ((unsigned short) (unsigned char)196));
                }
                var_50 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_13))) && (((/* implicit */_Bool) var_0))));
            }
            var_51 = ((((/* implicit */_Bool) var_0)) ? (((var_2) - (var_9))) : (var_13));
        }
    }
    var_52 = ((/* implicit */long long int) (-2147483647 - 1));
}
