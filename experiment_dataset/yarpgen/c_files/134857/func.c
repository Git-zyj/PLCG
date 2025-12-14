/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134857
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
    var_17 = ((/* implicit */int) ((1599365885) < (var_3)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [7] = -2147483632;
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)255)) : (arr_0 [i_0])))) || (((/* implicit */_Bool) (-(arr_0 [i_0]))))))) | (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)0)), (arr_0 [i_0])))) ? (((int) var_13)) : ((~(arr_0 [i_0]))))))))));
        arr_3 [i_0] = arr_0 [i_0];
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    {
                        arr_14 [i_0] = ((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_2] [i_3])) / (((/* implicit */int) arr_11 [i_3 + 1] [(unsigned char)0] [i_1] [i_1] [i_0])));
                        arr_15 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
            var_19 = ((/* implicit */int) max(((unsigned char)7), ((unsigned char)137)));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (unsigned char i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    {
                        var_20 *= ((/* implicit */unsigned char) min((((var_9) - (((/* implicit */int) var_1)))), (((/* implicit */int) arr_17 [i_0] [i_1] [i_4] [(unsigned char)8]))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 1032104311))));
                    }
                } 
            } 
        }
        for (int i_6 = 1; i_6 < 7; i_6 += 2) 
        {
            var_22 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(unsigned char)2] [i_6])) : (var_12))) : ((~(((/* implicit */int) arr_5 [i_0]))))))));
            var_23 = var_7;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_8 = 1; i_8 < 7; i_8 += 2) /* same iter space */
            {
                var_24 = ((int) (-(var_12)));
                arr_32 [i_0] [i_8] [i_8] = ((int) arr_31 [i_7] [i_7] [i_8] [i_8 - 1]);
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    var_25 = ((/* implicit */unsigned char) -1032104311);
                    arr_35 [i_0] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((+(arr_21 [i_9] [i_8] [i_7] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1206496108)))))));
                    var_26 = 1386814197;
                    var_27 = ((/* implicit */int) arr_30 [(unsigned char)9] [i_9]);
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        arr_38 [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_8 - 1] [i_7])) ? (arr_26 [i_8 - 1] [i_8 + 1]) : (((/* implicit */int) arr_12 [i_8 + 3] [i_8 + 3] [i_8 + 1] [i_8]))));
                        var_28 = ((int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (var_8)));
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (arr_36 [i_0] [i_0] [i_8 + 2] [i_9] [i_11] [i_7])))) ? (arr_34 [i_11] [i_7]) : (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */int) var_14)))))))));
                        arr_42 [i_11] [i_8] [i_8] [i_7] [i_8] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) var_14)))) - (var_11)));
                        var_30 = ((((/* implicit */_Bool) arr_9 [i_0] [4] [i_8 + 2])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)238)) : ((-2147483647 - 1)))) : (((/* implicit */int) arr_11 [i_7] [i_7] [i_8] [i_8 + 2] [i_8 + 1])));
                        var_31 = ((((/* implicit */int) (unsigned char)248)) % ((-(((/* implicit */int) var_13)))));
                    }
                }
            }
            for (int i_12 = 1; i_12 < 7; i_12 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_13 = 4; i_13 < 6; i_13 += 3) 
                {
                    arr_49 [i_0] [i_7] [i_12 - 1] [i_13] [i_12 + 3] [i_0] = ((/* implicit */unsigned char) ((arr_9 [i_12 + 3] [i_13 - 2] [i_13 + 2]) | (var_0)));
                    var_32 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_4)) / (1599365885)))));
                    arr_50 [i_7] [i_13] = ((/* implicit */unsigned char) ((int) arr_33 [i_0] [i_0] [i_12 + 2] [i_13 + 1]));
                }
                var_33 = var_2;
                arr_51 [i_0] = ((/* implicit */unsigned char) (-2147483647 - 1));
            }
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) (unsigned char)0))));
        }
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            var_35 = (~(((((/* implicit */_Bool) max((arr_22 [i_0] [i_0] [i_0] [i_0]), (arr_52 [i_14])))) ? (((arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_14]) ^ (-3))) : (134216704))));
            arr_55 [i_0] = ((/* implicit */unsigned char) arr_34 [i_14] [i_0]);
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                for (int i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_17 = 3; i_17 < 9; i_17 += 1) 
                        {
                            arr_64 [i_0] [i_14] [4] [7] [6] &= max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (1599365902) : (-7)))) ? (((/* implicit */int) arr_4 [i_15] [i_14] [i_0])) : (((((arr_22 [i_0] [i_14] [i_15] [i_17]) + (2147483647))) << (((((-1317222948) + (1317222962))) - (14))))))));
                            var_36 = ((/* implicit */int) min((var_36), (max((((/* implicit */int) arr_16 [i_0])), (max((((/* implicit */int) arr_30 [i_0] [i_0])), (((((/* implicit */_Bool) var_7)) ? (arr_23 [i_0]) : (497787309)))))))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
                        {
                            arr_67 [i_16] [i_14] [6] = var_11;
                            arr_68 [i_15] [i_16] [i_15] [i_14] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_16] [i_14] [i_14])) ? (((arr_7 [i_0] [i_0] [i_0]) + (((int) var_11)))) : (arr_13 [i_18] [i_14] [i_0])));
                            var_37 = ((/* implicit */int) min((var_37), ((~(1386814172)))));
                            var_38 = ((/* implicit */unsigned char) 7);
                        }
                        /* vectorizable */
                        for (int i_19 = 1; i_19 < 8; i_19 += 2) 
                        {
                            var_39 *= (unsigned char)3;
                            arr_72 [i_0] [i_14] [i_15] [i_16] [(unsigned char)2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_12) & (arr_20 [i_0] [i_14] [i_15] [i_16] [i_16] [i_19])))) ? (((arr_70 [i_0]) >> (((arr_13 [i_15] [i_16] [i_19 - 1]) - (935030104))))) : (((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */int) var_10))))));
                            arr_73 [i_19 + 2] [i_16] [i_15] [i_14] [i_0] = var_12;
                            arr_74 [(unsigned char)6] [i_0] [i_14] [i_14] [i_15] [i_16] [i_19] = ((/* implicit */unsigned char) (~((~(1651533325)))));
                        }
                        arr_75 [i_0] [i_15] [1] = (-(max((((/* implicit */int) var_10)), (min((arr_59 [i_0] [i_14] [4] [(unsigned char)4]), (((/* implicit */int) arr_61 [i_0] [i_0] [i_15] [(unsigned char)5])))))));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_53 [i_16] [i_16]))) ? (arr_31 [i_0] [i_14] [i_15] [i_16]) : (((((/* implicit */int) ((((/* implicit */int) arr_63 [i_16] [i_16] [i_15] [i_0] [i_0])) == (-1386814198)))) / (((/* implicit */int) (unsigned char)201))))));
                        arr_76 [i_0] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_21 [i_0] [i_14] [i_15] [i_16]) : (arr_21 [i_0] [i_0] [i_0] [i_0])))) ? ((-(arr_21 [i_0] [i_0] [i_15] [i_16]))) : (min((1246349520), (var_2)))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (int i_20 = 0; i_20 < 10; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 10; i_21 += 1) 
                {
                    for (int i_22 = 0; i_22 < 10; i_22 += 1) 
                    {
                        {
                            arr_85 [i_0] [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)241)))), (8388607)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)112))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)25)) : (1023))) : (((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_14] [i_20] [i_21] [i_22])) ? (arr_27 [i_21]) : (((/* implicit */int) var_4))))))));
                            arr_86 [i_20] [i_14] [i_20] [i_21] [i_22] [i_14] [i_22] = ((((/* implicit */_Bool) max((var_6), (((((/* implicit */int) (unsigned char)149)) / (1386814171)))))) ? (((((/* implicit */_Bool) var_9)) ? (1386814171) : (arr_36 [(unsigned char)4] [i_14] [i_14] [i_20] [i_21] [i_22]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(unsigned char)0] [i_20] [i_21] [i_22])) ? (-646274000) : (((/* implicit */int) (unsigned char)246))))) ? (((((/* implicit */_Bool) var_5)) ? (917504) : (var_15))) : (((/* implicit */int) var_10)))));
                            arr_87 [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_14), (var_16)))) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)252))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) 1032104312)) || (((/* implicit */_Bool) var_7))))) - (arr_27 [i_20]))) : (((/* implicit */int) var_5))));
                        }
                    } 
                } 
                arr_88 [i_0] [i_20] [i_0] = 0;
            }
            for (int i_23 = 0; i_23 < 10; i_23 += 2) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_24 = 0; i_24 < 10; i_24 += 2) 
                {
                    arr_94 [i_0] [i_14] [i_14] [i_24] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_14] [i_24])) ? (-917519) : (((/* implicit */int) arr_43 [i_0] [i_14] [i_23]))))));
                    var_41 = ((/* implicit */int) min((var_41), (((((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) var_5)) - (212)))))) ? (((/* implicit */int) arr_4 [i_0] [i_14] [i_23])) : (((/* implicit */int) var_4))))));
                    /* LoopSeq 3 */
                    for (int i_25 = 1; i_25 < 9; i_25 += 1) 
                    {
                        var_42 *= ((/* implicit */unsigned char) ((arr_6 [i_0] [i_14] [i_23] [i_24]) - (arr_19 [i_23] [i_0])));
                        arr_97 [i_0] [i_14] [i_23] [i_24] [i_25 - 1] &= ((/* implicit */unsigned char) var_11);
                        var_43 = ((/* implicit */unsigned char) arr_48 [i_0] [9]);
                        var_44 = ((((/* implicit */_Bool) ((arr_34 [i_0] [i_23]) & (-129065600)))) ? ((+(var_3))) : (((((/* implicit */_Bool) var_2)) ? (-129065600) : (arr_40 [i_0] [i_14] [i_14] [i_0] [i_25 - 1] [8]))));
                    }
                    for (int i_26 = 1; i_26 < 7; i_26 += 2) 
                    {
                        arr_100 [i_0] [i_0] [i_23] [i_24] [i_26] = (unsigned char)255;
                        arr_101 [i_26] [i_14] [4] [i_14] = ((/* implicit */int) (unsigned char)234);
                        arr_102 [i_0] [i_0] [i_14] [i_23] [i_24] [i_24] [i_26] = arr_24 [i_24];
                    }
                    for (int i_27 = 0; i_27 < 10; i_27 += 1) 
                    {
                        arr_105 [i_24] [i_24] [i_23] [i_14] [i_24] &= ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_0] [i_14] [i_23])))))));
                        arr_106 [i_27] [i_27] = arr_43 [i_0] [i_14] [i_23];
                        arr_107 [i_27] [i_27] [i_24] [i_23] [i_23] [i_27] [i_0] = ((/* implicit */int) var_13);
                        arr_108 [i_0] [i_27] [2] [8] [i_24] [i_24] [i_27] = (~(arr_36 [i_0] [i_14] [i_23] [i_24] [i_27] [i_23]));
                    }
                }
                for (unsigned char i_28 = 3; i_28 < 8; i_28 += 2) /* same iter space */
                {
                    arr_112 [i_0] [0] [0] = ((/* implicit */unsigned char) -1792726475);
                    var_45 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -2040158620)) ? (max((arr_24 [i_23]), (((/* implicit */int) (unsigned char)176)))) : (((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) (unsigned char)108)) : (arr_71 [i_0]))))) ^ (((((/* implicit */_Bool) (+(463723522)))) ? (-2014860120) : (-1247333056)))));
                    arr_113 [i_0] [i_14] [i_23] [i_28 - 1] = ((int) (-2147483647 - 1));
                }
                for (unsigned char i_29 = 3; i_29 < 8; i_29 += 2) /* same iter space */
                {
                    arr_117 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= max((min((((var_3) / (((/* implicit */int) arr_62 [i_0] [i_0] [i_0])))), (arr_59 [i_29 + 1] [i_29 + 1] [i_29 - 2] [5]))), (max((((((/* implicit */_Bool) 2064384)) ? (((/* implicit */int) (unsigned char)240)) : (var_12))), (max((((/* implicit */int) var_4)), (1048575))))));
                    arr_118 [i_29] [i_29 + 2] [i_29] [i_29 + 2] = -267003059;
                    var_46 = -1048576;
                    var_47 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)136))))) ? (((((/* implicit */_Bool) ((int) arr_98 [i_0] [i_14] [i_0]))) ? (((((/* implicit */_Bool) -1)) ? (520071561) : (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_5 [i_29])))) : ((-(min((arr_45 [i_0] [i_0] [i_0] [9]), (var_12))))));
                }
                for (int i_30 = 0; i_30 < 10; i_30 += 3) 
                {
                    arr_121 [i_0] [i_30] [i_23] [i_30] = var_3;
                    var_48 = ((/* implicit */int) (unsigned char)235);
                    arr_122 [i_0] [i_30] [i_23] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 524287)) ? (962407520) : (1265433432)));
                }
                arr_123 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
            for (int i_31 = 3; i_31 < 9; i_31 += 3) 
            {
                arr_128 [i_0] [i_14] [i_31] [i_31 + 1] = ((/* implicit */unsigned char) (-2147483647 - 1));
                arr_129 [i_31] = arr_29 [7];
                arr_130 [i_31] [i_14] [i_0] = ((/* implicit */unsigned char) arr_24 [i_31]);
            }
        }
        /* LoopNest 2 */
        for (unsigned char i_32 = 0; i_32 < 10; i_32 += 1) 
        {
            for (unsigned char i_33 = 2; i_33 < 9; i_33 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_34 = 0; i_34 < 10; i_34 += 1) 
                    {
                        var_49 = ((/* implicit */int) (unsigned char)63);
                        arr_140 [i_32] [i_34] = ((unsigned char) ((arr_28 [i_0] [i_0] [2]) - (((int) arr_82 [i_34] [i_33] [i_34] [i_0] [i_0] [i_34]))));
                    }
                    /* LoopNest 2 */
                    for (int i_35 = 0; i_35 < 10; i_35 += 2) 
                    {
                        for (int i_36 = 1; i_36 < 9; i_36 += 2) 
                        {
                            {
                                arr_148 [i_0] [i_32] [i_32] = ((/* implicit */unsigned char) 1675934380);
                                arr_149 [i_0] [i_0] [i_33 - 1] = (unsigned char)31;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_50 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (1248678999))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))))))) ? (var_7) : (((int) var_5)));
}
