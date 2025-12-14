/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148008
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
    var_15 = ((((/* implicit */_Bool) var_3)) ? (min((-5829524411476287718LL), (((/* implicit */long long int) ((int) (short)-6887))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-6893))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) (signed char)15)) ^ (((/* implicit */int) (signed char)-121)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                arr_7 [i_2] = arr_2 [i_2] [i_2 + 1] [i_2];
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_17 *= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) arr_10 [i_3] [(_Bool)1] [i_2] [i_3])) : ((+(var_8)))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [(_Bool)1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                            arr_14 [i_0] [i_0] [i_2] [5U] [i_4] = (short)-6887;
                            arr_15 [i_0] [i_2 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (2147483647U) : (2147483661U)))) / (4556916788006099505LL)));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    arr_20 [i_5] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2 - 1]))));
                    var_18 ^= ((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -7186227969823921947LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-30664))))));
                    arr_21 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                }
                for (signed char i_6 = 2; i_6 < 19; i_6 += 4) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(signed char)10] [17U] [i_2 - 1] [i_2] [i_6 + 1]))) : (4556916788006099505LL)));
                    var_20 = ((/* implicit */short) var_5);
                    arr_25 [i_0] [i_0] [i_2] [i_6 - 1] = ((/* implicit */signed char) arr_5 [i_2] [i_6]);
                }
                for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_27 [i_0] [i_1] [i_2 - 1]))));
                    arr_28 [i_2] = ((/* implicit */int) arr_26 [i_0] [i_2] [i_2] [i_7]);
                    arr_29 [i_0] [i_0] [i_0] [i_2 + 1] [i_2] [(_Bool)1] = ((var_3) != (var_11));
                    arr_30 [i_0] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-13)) - (((/* implicit */int) (short)30644))));
                }
            }
            var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) 2147483636U)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((long long int) 299470893))))));
            var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-14)))) / (((/* implicit */int) (short)19610))));
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    for (long long int i_10 = 4; i_10 < 21; i_10 += 3) 
                    {
                        {
                            arr_38 [i_10] = arr_34 [i_0] [i_1] [i_0] [i_10 - 1] [i_9] [i_9];
                            arr_39 [i_0] [i_1] [i_8] [i_10] [i_10] [i_0] [i_1] = ((/* implicit */signed char) var_1);
                            arr_40 [i_1] [i_10] = ((arr_31 [i_0] [i_0] [i_8] [i_8]) <= (((/* implicit */long long int) (-(((/* implicit */int) arr_33 [i_0] [i_1] [i_8] [i_9] [i_10]))))));
                            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_10] [i_10 - 3] [i_10 - 4] [i_10] [i_10] [i_10 - 2] [i_10]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) (+((+(var_5)))));
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_26 += ((/* implicit */long long int) ((((var_6) + (2147483647))) << (((/* implicit */int) (_Bool)1))));
                    var_27 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)92))));
                    arr_45 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)11)) | (((/* implicit */int) (signed char)-20))));
                    var_28 &= ((/* implicit */signed char) (-(((/* implicit */int) arr_44 [i_0] [i_1] [(short)2] [(_Bool)1]))));
                }
                for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) (!(var_9)));
                        arr_52 [i_0] [i_1] [i_8] [i_12] [i_13] [(unsigned short)12] [(signed char)0] = ((/* implicit */signed char) (((-(-1795962060170240731LL))) & (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_49 [i_1] [i_1] [i_12] [(_Bool)1] [i_13])) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_53 [i_0] [i_1] [i_1] [i_8] [i_12] = ((/* implicit */long long int) ((((((/* implicit */int) var_14)) + (((/* implicit */int) var_14)))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (arr_46 [(_Bool)0] [(_Bool)0] [(_Bool)0] [(unsigned short)14])))));
                }
            }
            for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    for (int i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        {
                            var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 0)) || ((((-2147483647 - 1)) >= (((/* implicit */int) (signed char)-96))))));
                            arr_60 [(_Bool)1] [i_1] [4LL] [i_15] [i_16] [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-26)) ? (-6032205112232914037LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65517)))));
                            arr_61 [i_0] [i_15] [11LL] [(signed char)9] [(signed char)11] = ((/* implicit */long long int) ((unsigned int) (unsigned short)65393));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_17 = 1; i_17 < 20; i_17 += 4) 
                {
                    for (signed char i_18 = 3; i_18 < 21; i_18 += 4) 
                    {
                        {
                            arr_66 [i_0] [i_1] [i_14] [2LL] [i_18] [i_18 + 1] = ((/* implicit */unsigned int) (+(9059183854269608412LL)));
                            arr_67 [i_0] [i_0] [i_14] [i_17] [i_18] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (4023372130U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (short)6911)) : (((/* implicit */int) (signed char)-14))))) : (arr_17 [i_17 - 1] [i_17] [i_17 - 1])));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_12))));
                var_32 = ((/* implicit */unsigned short) (signed char)15);
            }
            /* LoopSeq 3 */
            for (long long int i_19 = 0; i_19 < 22; i_19 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_20 = 3; i_20 < 20; i_20 += 4) 
                {
                    arr_73 [i_0] [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) (signed char)-14))));
                    var_33 *= ((/* implicit */_Bool) arr_8 [i_1]);
                    /* LoopSeq 2 */
                    for (int i_21 = 1; i_21 < 21; i_21 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned int) arr_0 [i_1] [i_19]);
                        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) arr_26 [i_21 - 1] [i_1] [i_1] [i_1]))));
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_78 [i_22] [(_Bool)1] [i_20] [i_20] [i_1] [20LL] = ((signed char) (short)6911);
                        arr_79 [18] [i_20] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) 9007199254740991LL))) != (((/* implicit */int) (!(((/* implicit */_Bool) -7289751720303702483LL)))))));
                    }
                    arr_80 [i_1] |= ((_Bool) (-(((/* implicit */int) (_Bool)1))));
                }
                for (short i_23 = 2; i_23 < 21; i_23 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_24 = 0; i_24 < 22; i_24 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) var_14);
                        arr_85 [i_24] [(short)15] [i_19] [i_24] = (+(((/* implicit */int) arr_34 [i_0] [i_23 - 1] [i_19] [i_23] [(_Bool)1] [i_0])));
                        var_37 ^= ((/* implicit */long long int) -2147483628);
                        var_38 = ((/* implicit */signed char) 2147483680U);
                    }
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32809))) : (-4501339880826530918LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_23 - 1] [i_23] [i_23] [i_23])) | (((/* implicit */int) (signed char)2))))) : (20U))))));
                }
                for (signed char i_25 = 0; i_25 < 22; i_25 += 4) 
                {
                    var_40 ^= ((/* implicit */long long int) ((-7590932434611579292LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_0] [i_1] [i_19] [i_25])))));
                    /* LoopSeq 3 */
                    for (signed char i_26 = 0; i_26 < 22; i_26 += 4) 
                    {
                        arr_92 [i_0] [i_0] [i_19] [i_25] [11] = ((/* implicit */long long int) ((271595182U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_1] [i_19] [i_25])))));
                        arr_93 [i_1] [i_19] [(signed char)16] [(signed char)16] [i_26] [i_0] = ((/* implicit */_Bool) arr_70 [i_1] [i_1] [14] [i_26]);
                        arr_94 [i_0] [i_26] [(unsigned short)20] [i_19] [15] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_19] [i_25])) + (((/* implicit */int) arr_2 [i_0] [21LL] [i_25]))));
                        var_41 &= ((/* implicit */unsigned int) arr_31 [i_0] [i_0] [7LL] [i_26]);
                        var_42 = ((/* implicit */_Bool) arr_17 [i_1] [i_19] [i_1]);
                    }
                    for (signed char i_27 = 0; i_27 < 22; i_27 += 4) /* same iter space */
                    {
                        arr_97 [i_0] [i_1] [i_19] [i_19] [i_25] [i_1] [i_19] = ((/* implicit */_Bool) -3607041219279747033LL);
                        var_43 = ((/* implicit */_Bool) (~(1963411625268888424LL)));
                    }
                    for (signed char i_28 = 0; i_28 < 22; i_28 += 4) /* same iter space */
                    {
                        arr_100 [i_28] [17LL] [(_Bool)1] [(short)4] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_1] [(signed char)10] [i_28]))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) * (271595155U)))));
                        arr_101 [i_0] [20U] [19U] [i_25] [20U] = ((/* implicit */_Bool) 9223372036854775807LL);
                    }
                }
                arr_102 [2] [i_19] = ((/* implicit */short) ((long long int) 2998298011U));
                arr_103 [i_0] [i_0] [14LL] [i_19] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_10))))));
            }
            for (long long int i_29 = 4; i_29 < 20; i_29 += 4) /* same iter space */
            {
                var_44 += ((/* implicit */signed char) ((arr_51 [i_29 - 3] [i_29 - 1] [i_29 - 4] [i_29 + 2]) ? (((/* implicit */int) arr_51 [i_29 + 1] [i_29 + 1] [i_29 + 2] [i_29 - 2])) : (1745134583)));
                var_45 = ((/* implicit */int) var_8);
                /* LoopNest 2 */
                for (signed char i_30 = 0; i_30 < 22; i_30 += 3) 
                {
                    for (signed char i_31 = 0; i_31 < 22; i_31 += 1) 
                    {
                        {
                            var_46 += ((/* implicit */int) var_0);
                            arr_113 [i_0] [i_0] [i_31] [i_30] [i_30] [i_29] = (!(((((/* implicit */int) (signed char)122)) > (((/* implicit */int) (short)32754)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_32 = 0; i_32 < 22; i_32 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_33 = 2; i_33 < 20; i_33 += 4) 
                    {
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(4467810268047167515LL)))) ? (((/* implicit */int) arr_33 [(signed char)21] [i_1] [i_29] [i_32] [i_33])) : (((/* implicit */int) arr_104 [i_0] [i_29] [(signed char)13]))));
                        var_48 = ((/* implicit */short) var_7);
                    }
                    arr_119 [(_Bool)1] [i_32] [(_Bool)1] [i_32] = ((/* implicit */unsigned short) (+(9007199254741006LL)));
                }
                for (long long int i_34 = 2; i_34 < 21; i_34 += 4) 
                {
                    var_49 *= ((/* implicit */_Bool) (signed char)-27);
                    var_50 = ((/* implicit */unsigned short) ((arr_105 [i_0] [i_0] [i_0] [i_0]) & (arr_105 [i_0] [i_1] [i_29 - 2] [i_34])));
                }
            }
            for (long long int i_35 = 4; i_35 < 20; i_35 += 4) /* same iter space */
            {
                var_51 = ((/* implicit */int) ((short) ((((/* implicit */int) (signed char)2)) & (((/* implicit */int) (signed char)12)))));
                /* LoopSeq 4 */
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    var_52 -= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)127))));
                    var_53 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [(signed char)16] [(short)0] [0] [12] [i_35] [(signed char)16])) & (((/* implicit */int) (signed char)24))));
                }
                for (long long int i_37 = 1; i_37 < 19; i_37 += 1) 
                {
                    arr_131 [i_0] [(short)14] [i_35] [(unsigned short)1] &= ((/* implicit */int) ((_Bool) arr_98 [i_0] [i_1] [(_Bool)1] [i_35 - 2] [i_0] [i_37 + 3]));
                    var_54 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_62 [i_0] [i_0] [i_0] [i_37 + 1]))));
                    var_55 = var_5;
                }
                for (unsigned short i_38 = 2; i_38 < 21; i_38 += 1) 
                {
                    var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) ((unsigned short) -6765139370092393618LL)))));
                    var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (signed char)123))) || (((/* implicit */_Bool) var_0)))))));
                    arr_134 [i_0] [i_35 - 3] [i_0] = ((/* implicit */long long int) arr_69 [i_35] [i_1]);
                }
                for (signed char i_39 = 4; i_39 < 21; i_39 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) /* same iter space */
                    {
                        arr_141 [i_0] [(_Bool)1] [(_Bool)1] [i_35] [i_39] [i_40] = ((/* implicit */signed char) var_10);
                        var_58 &= ((/* implicit */short) ((arr_99 [i_35 - 4] [4] [i_35 - 1] [i_39 - 3] [i_39 - 1]) & (arr_99 [i_35 + 2] [i_35 + 1] [i_35 - 1] [i_39 - 3] [i_39 - 4])));
                    }
                    for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) /* same iter space */
                    {
                        arr_144 [i_0] [i_0] [15LL] [i_1] [i_35 + 1] [i_39] [9] = (+(((long long int) arr_142 [i_39])));
                        var_59 = ((/* implicit */_Bool) max((var_59), ((_Bool)1)));
                        arr_145 [i_0] [i_39] [i_35] = ((/* implicit */unsigned short) arr_56 [i_41] [i_39 - 4] [(signed char)12] [i_1]);
                    }
                    var_60 = ((/* implicit */signed char) max((var_60), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) <= (arr_3 [i_0]))))));
                    var_61 = ((/* implicit */long long int) min((var_61), (var_3)));
                    arr_146 [i_39] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10)))) * (-1LL)));
                }
                var_62 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) arr_22 [18U] [18U] [(_Bool)1] [i_35]))));
            }
        }
        arr_147 [i_0] = ((/* implicit */signed char) 3282451839U);
    }
}
