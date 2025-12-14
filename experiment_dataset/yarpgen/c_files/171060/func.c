/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171060
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
    for (short i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
            {
                arr_7 [i_0 - 1] [i_2] = 0;
                var_11 = ((/* implicit */int) ((3734535343U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134)))));
                var_12 |= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -5)))))));
            }
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
            {
                var_13 ^= ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2]);
                arr_11 [i_3] = ((((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -1864288353)) || (((/* implicit */_Bool) 271961329)))))));
            }
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) var_10)) == (((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])) | (var_8)))))))));
        }
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_5 = 2; i_5 < 19; i_5 += 4) 
            {
                for (long long int i_6 = 4; i_6 < 19; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        {
                            var_15 |= ((/* implicit */unsigned char) var_8);
                            var_16 = ((/* implicit */long long int) 9275656545373098225ULL);
                            var_17 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-16480))) + (((((/* implicit */_Bool) var_2)) ? (4655143855990126161LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_4] [i_7])) ? (-271961329) : (-271961329))))))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */int) (-(-1392602174946458146LL)));
        }
        /* LoopSeq 3 */
        for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            var_19 ^= ((/* implicit */unsigned char) (-(13194139533312ULL)));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (arr_6 [i_10]) : (((((/* implicit */int) (short)8191)) | (((/* implicit */int) (short)-15448))))));
                        var_21 = ((/* implicit */long long int) arr_14 [i_9] [0LL] [i_9]);
                        arr_29 [i_0] [i_0] [i_10] [i_9] [i_10] = var_5;
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) (~(46253205)));
            /* LoopNest 3 */
            for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        {
                            arr_37 [i_8] [i_8] [i_13] = ((/* implicit */int) 3839510469U);
                            arr_38 [i_13] [i_8] [i_11] [i_13] = ((/* implicit */unsigned char) arr_2 [i_8] [i_8]);
                            var_23 = min((var_4), (((/* implicit */unsigned int) (short)-15448)));
                            arr_39 [i_0] [i_8] [i_13] [(short)13] [17LL] = ((/* implicit */int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-15456))))) ? (min((var_5), (var_5))) : (((/* implicit */unsigned int) ((int) -1LL))))), (((/* implicit */unsigned int) arr_32 [i_0 + 2] [i_13] [i_8] [i_8]))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
        {
            arr_43 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-8183))));
            /* LoopSeq 3 */
            for (int i_15 = 0; i_15 < 21; i_15 += 4) /* same iter space */
            {
                arr_47 [i_0 - 3] [i_14] [i_15] = ((/* implicit */unsigned int) (-(271961328)));
                arr_48 [i_0 - 2] = max((((((/* implicit */_Bool) arr_14 [i_0 - 2] [i_14] [i_15])) ? (var_10) : (((/* implicit */long long int) arr_14 [i_0] [i_14] [i_15])))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-16480))))));
                arr_49 [i_0] [i_14] [i_15] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) -271961329)) ? (0LL) : (((/* implicit */long long int) 0)))) : (((/* implicit */long long int) ((unsigned int) (short)-8201))))));
                var_24 ^= ((/* implicit */unsigned int) min((-1LL), (((/* implicit */long long int) var_6))));
            }
            for (int i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    for (unsigned int i_18 = 4; i_18 < 20; i_18 += 3) 
                    {
                        {
                            var_25 += ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) 458250188U)) ? (var_4) : (2170306552U))) : (((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (arr_50 [19] [i_17])))));
                            var_26 = (+(((int) var_0)));
                            var_27 = ((/* implicit */short) (+(-1392602174946458146LL)));
                        }
                    } 
                } 
                arr_58 [i_0 + 1] [i_14] [i_14] [i_16] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_57 [i_0 - 2] [i_0] [i_14] [i_14] [i_14] [6U])))))), (700636147)));
            }
            for (int i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
            {
                var_28 *= ((/* implicit */unsigned char) var_2);
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    for (int i_21 = 0; i_21 < 21; i_21 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_52 [i_0] [i_0 - 1])) ? (arr_63 [i_0 + 1] [i_0 + 2] [i_0] [i_0 - 1] [i_14]) : (var_6))), (((((/* implicit */_Bool) var_6)) ? (arr_34 [0] [i_0 + 2] [i_0 + 2] [i_0 - 2]) : (2180812803U)))));
                            var_30 = ((/* implicit */long long int) arr_14 [i_19] [i_14] [17]);
                            arr_68 [i_0] [i_21] [i_19] [i_20] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) (~((+(arr_41 [6])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_54 [i_0 - 3] [i_0] [4] [i_0] [i_0 - 4] [i_20]))))) : ((~(var_4)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_22 = 3; i_22 < 20; i_22 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_23 = 0; i_23 < 21; i_23 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((543928538) / (((/* implicit */int) (short)992))));
                        var_32 = ((/* implicit */int) arr_63 [i_23] [9ULL] [i_19] [i_0] [i_0]);
                        var_33 = ((unsigned int) arr_72 [i_23] [i_22 - 2] [i_19] [i_0]);
                        arr_76 [i_0] [i_0 - 4] [i_0] [2LL] [8] [3U] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -1595503812)) ? (arr_69 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_0] [i_14] [i_0] [i_22])))))));
                    }
                    /* vectorizable */
                    for (long long int i_24 = 1; i_24 < 20; i_24 += 4) 
                    {
                        var_34 -= ((/* implicit */unsigned char) var_2);
                        var_35 = ((/* implicit */int) (-(2180812803U)));
                    }
                    arr_81 [i_22] [i_19] [i_19] [11] [(unsigned char)9] [i_0] = ((/* implicit */int) (unsigned char)10);
                    var_36 = ((/* implicit */unsigned int) arr_25 [i_19]);
                }
            }
            arr_82 [i_0] [3] = (-(((unsigned int) (~(var_4)))));
            /* LoopNest 2 */
            for (unsigned int i_25 = 1; i_25 < 20; i_25 += 3) 
            {
                for (short i_26 = 0; i_26 < 21; i_26 += 3) 
                {
                    {
                        var_37 = ((/* implicit */int) (-((+(arr_83 [i_25])))));
                        var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_67 [i_0 - 4] [i_14] [i_25 - 1] [i_26]))));
                        arr_89 [i_25] [i_25] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned char) var_3))), (min((arr_59 [i_0] [i_14] [i_26]), (((/* implicit */long long int) (short)-16476))))));
                    }
                } 
            } 
            arr_90 [i_0] [(unsigned char)12] [i_0] = min((min((arr_71 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]), (((/* implicit */unsigned int) arr_5 [i_14] [i_0 - 1] [i_14] [(short)16])))), (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_4))));
        }
        for (long long int i_27 = 3; i_27 < 18; i_27 += 4) 
        {
            /* LoopNest 3 */
            for (int i_28 = 0; i_28 < 21; i_28 += 4) 
            {
                for (unsigned int i_29 = 0; i_29 < 21; i_29 += 3) 
                {
                    for (long long int i_30 = 3; i_30 < 17; i_30 += 3) 
                    {
                        {
                            arr_102 [i_30] [i_29] [i_28] [i_27] [i_30] = ((/* implicit */int) max(((unsigned char)161), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2)))))));
                            arr_103 [i_30] [i_30] [i_27] = var_6;
                            arr_104 [i_0 - 4] [i_0 + 1] [i_0 + 1] [i_30] [i_0] = (((((~(1562686552))) + (2147483647))) << (((((/* implicit */int) var_9)) - (124))));
                        }
                    } 
                } 
            } 
            arr_105 [i_0] [i_27] = (~(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)245)))));
            var_39 = ((/* implicit */int) var_2);
            var_40 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-14568))));
        }
    }
    for (long long int i_31 = 0; i_31 < 17; i_31 += 3) /* same iter space */
    {
        arr_110 [i_31] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */unsigned long long int) (-(131071U)))) : (var_8)));
        var_41 = ((/* implicit */int) (((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? ((+(min((((/* implicit */unsigned long long int) var_6)), (7929906059189041960ULL))))) : (((/* implicit */unsigned long long int) var_10))));
        /* LoopNest 2 */
        for (int i_32 = 0; i_32 < 17; i_32 += 4) 
        {
            for (unsigned int i_33 = 2; i_33 < 14; i_33 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_34 = 3; i_34 < 16; i_34 += 3) 
                    {
                        for (int i_35 = 0; i_35 < 17; i_35 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */long long int) min((max((min((arr_61 [i_31] [5U] [i_34]), (arr_28 [i_31] [i_33] [i_32] [i_31]))), (((/* implicit */unsigned int) 786695716)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_66 [i_31] [i_31] [i_32] [i_33 - 1] [i_32] [i_35])) & (((/* implicit */int) arr_98 [i_35] [19U] [i_33] [i_32] [19U])))))));
                                arr_122 [i_31] [i_32] [i_32] [i_34 - 1] [i_31] = (~(((unsigned int) min((((/* implicit */unsigned int) (unsigned char)128)), (var_6)))));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) arr_109 [i_32]))));
                }
            } 
        } 
    }
    for (long long int i_36 = 0; i_36 < 17; i_36 += 3) /* same iter space */
    {
        arr_125 [i_36] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) -786695717)), ((+(min((((/* implicit */unsigned int) 0)), (var_4)))))));
        var_44 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)74)))))))) ? (max((((/* implicit */unsigned long long int) (~(3839510469U)))), (min((((/* implicit */unsigned long long int) arr_31 [i_36] [i_36])), (var_8))))) : ((((!(((/* implicit */_Bool) var_7)))) ? ((-(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        /* LoopSeq 3 */
        for (int i_37 = 0; i_37 < 17; i_37 += 3) 
        {
            var_45 = ((/* implicit */unsigned long long int) 2170306563U);
            /* LoopNest 2 */
            for (unsigned char i_38 = 1; i_38 < 16; i_38 += 3) 
            {
                for (unsigned int i_39 = 0; i_39 < 17; i_39 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_40 = 0; i_40 < 17; i_40 += 3) 
                        {
                            arr_140 [11LL] [i_40] [i_38 + 1] = ((/* implicit */short) (-(((/* implicit */int) ((short) var_10)))));
                            var_46 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (short)-16480))))))));
                            var_47 = ((/* implicit */unsigned char) arr_14 [i_40] [i_38 + 1] [i_39]);
                        }
                        arr_141 [i_38] [(unsigned char)9] = ((/* implicit */unsigned long long int) ((unsigned int) 268435455U));
                    }
                } 
            } 
            var_48 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_136 [i_36] [i_36] [i_37] [4LL] [i_37])) ? (arr_136 [12U] [(unsigned char)2] [0U] [(unsigned char)2] [i_36]) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((var_8) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_32 [i_36] [i_36] [i_37] [i_36])) : (var_7)))))) : (((/* implicit */int) (unsigned char)223))));
            arr_142 [i_36] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (536838144U) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)125)) : (var_0))))))));
        }
        for (int i_41 = 0; i_41 < 17; i_41 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_42 = 0; i_42 < 17; i_42 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_43 = 0; i_43 < 17; i_43 += 3) 
                {
                    for (int i_44 = 2; i_44 < 14; i_44 += 3) 
                    {
                        {
                            var_49 ^= ((/* implicit */int) min((((/* implicit */unsigned int) max((min((arr_33 [i_44] [i_43] [i_42] [19U] [i_36]), (((/* implicit */int) (unsigned char)245)))), ((-(-1)))))), (((min((2630940394U), (((/* implicit */unsigned int) arr_145 [i_44])))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_41] [20] [i_43] [i_44]) : (1782458873))))))));
                            arr_156 [5] [i_36] [i_41] [i_43] [(unsigned char)6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                        }
                    } 
                } 
                var_50 ^= (unsigned char)157;
                var_51 = ((/* implicit */int) 3252954180U);
                arr_157 [i_42] [i_36] [i_36] [i_36] = ((/* implicit */unsigned int) (-(min((var_2), (((/* implicit */unsigned long long int) arr_98 [i_36] [i_41] [i_41] [i_41] [i_42]))))));
            }
            /* vectorizable */
            for (unsigned int i_45 = 1; i_45 < 15; i_45 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_46 = 0; i_46 < 17; i_46 += 3) 
                {
                    for (long long int i_47 = 3; i_47 < 16; i_47 += 3) 
                    {
                        {
                            arr_165 [i_36] [i_47] [9LL] [i_36] [i_46] [i_47] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)32)) ? (-8946904573222361750LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32)))))) ? (0U) : ((~(3830083084U)))));
                            var_52 = (-(((/* implicit */int) ((unsigned char) var_0))));
                        }
                    } 
                } 
                var_53 = (~(arr_55 [i_36] [i_45] [i_45] [i_45] [i_45 - 1] [i_45 - 1]));
            }
            for (short i_48 = 1; i_48 < 15; i_48 += 4) 
            {
                var_54 = ((/* implicit */unsigned int) 1517781126507285019LL);
                var_55 ^= 7U;
            }
            for (long long int i_49 = 2; i_49 < 16; i_49 += 4) 
            {
                var_56 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(arr_34 [i_36] [i_41] [8LL] [i_41])))), (((1464638190122307620LL) | (((/* implicit */long long int) var_5))))))), (((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_41] [i_49] [i_41] [i_49] [i_41] [i_41])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))) | (arr_75 [i_36] [i_36] [i_41] [i_49] [i_49 - 2] [i_49])))))));
                arr_170 [i_36] [i_41] [i_49 - 2] = ((/* implicit */unsigned long long int) 5101481517541973082LL);
                /* LoopNest 2 */
                for (unsigned char i_50 = 1; i_50 < 13; i_50 += 4) 
                {
                    for (unsigned int i_51 = 0; i_51 < 17; i_51 += 3) 
                    {
                        {
                            var_57 = ((/* implicit */unsigned char) 127047566U);
                            var_58 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_137 [i_51] [i_51] [i_41] [i_50 + 1] [i_41] [i_41] [i_36])), ((-(8U)))));
                        }
                    } 
                } 
            }
            var_59 = ((/* implicit */int) ((min((((((/* implicit */_Bool) (short)16479)) ? (((/* implicit */unsigned long long int) var_4)) : (var_2))), (((/* implicit */unsigned long long int) ((long long int) var_3))))) >> (((((1161685430U) << (((-140905951) + (140905975))))) - (3053453288U)))));
            var_60 ^= ((/* implicit */int) max((((((/* implicit */_Bool) 1782458873)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_41] [i_41] [i_41]))))), (((/* implicit */unsigned int) max((134217727), (-1500662733))))));
        }
        for (int i_52 = 0; i_52 < 17; i_52 += 4) /* same iter space */
        {
            arr_180 [i_52] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_59 [i_36] [(unsigned char)4] [i_52]) + (((/* implicit */long long int) arr_100 [i_36]))))) >= (((((/* implicit */_Bool) var_8)) ? (var_2) : (arr_93 [i_36] [i_36] [i_52]))))))));
            var_61 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (~(-1464638190122307620LL)))) ? (((/* implicit */long long int) max((-1500662733), (((/* implicit */int) var_3))))) : (arr_116 [i_36])))));
        }
        var_62 = ((/* implicit */long long int) (-(((/* implicit */int) arr_46 [i_36]))));
    }
    var_63 *= ((/* implicit */unsigned int) var_8);
    var_64 = ((/* implicit */long long int) var_9);
}
