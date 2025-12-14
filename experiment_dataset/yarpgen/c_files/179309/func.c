/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179309
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
    var_17 = ((/* implicit */long long int) (~(var_13)));
    var_18 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            arr_7 [i_1 - 2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 1] [i_0 - 1]))) ^ (((var_11) % (((/* implicit */long long int) arr_3 [i_0] [i_0]))))));
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */int) (~(arr_2 [i_0 - 1] [i_0 + 1])));
            var_19 *= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_20 = ((/* implicit */signed char) 1326203224U);
            var_21 = ((/* implicit */signed char) 1912542244746754810LL);
            /* LoopSeq 3 */
            for (short i_3 = 3; i_3 < 19; i_3 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    arr_20 [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */long long int) 1326203224U)) - (-5568422192826622603LL))));
                    /* LoopSeq 1 */
                    for (int i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        arr_25 [i_5] [i_2] [i_3] [i_2] [i_5 - 2] [i_4] = ((/* implicit */long long int) ((((((/* implicit */int) ((short) (short)-7448))) + (2147483647))) >> (((((/* implicit */int) arr_22 [i_3] [i_2] [i_3] [i_4 - 1] [(signed char)20] [i_0 + 1] [i_5])) - (34)))));
                        var_22 = ((/* implicit */_Bool) ((arr_4 [i_2]) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_12 [i_0]) : (((/* implicit */int) var_15)))))));
                    }
                }
                for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    var_23 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_16 [i_0] [i_2] [i_3] [(_Bool)1])) / (-6380426935016810754LL))))));
                    var_24 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_21 [i_0 - 1] [i_0 - 1] [i_0])))));
                }
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        {
                            arr_32 [i_0] [i_0] [i_3] [i_3] [i_0] [i_8] [i_0] = ((/* implicit */signed char) (!(arr_31 [i_3 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])));
                            var_25 ^= ((/* implicit */long long int) (+(((/* implicit */int) (short)-27926))));
                            var_26 |= ((/* implicit */short) arr_30 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((arr_12 [i_0]) + (2147483647))) >> ((((~(arr_3 [i_0 - 2] [i_0]))) - (3393304097U))))))));
                        }
                    } 
                } 
            }
            for (short i_9 = 3; i_9 < 19; i_9 += 4) /* same iter space */
            {
                arr_37 [i_9] [i_0] [i_0] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_0 [i_2]))))));
                /* LoopSeq 1 */
                for (long long int i_10 = 1; i_10 < 21; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        arr_42 [i_0] [0LL] [i_10] [i_10 + 1] [6LL] = ((/* implicit */int) (~(-6380426935016810762LL)));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_0]))));
                        arr_43 [i_10] [5LL] [i_9 - 1] [i_9] [i_9] = (~(((((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) + (var_11))));
                    }
                    arr_44 [(signed char)1] [0LL] [i_2] [i_10] = ((((/* implicit */_Bool) arr_15 [i_10] [3])) ? (arr_15 [i_2] [i_9 + 2]) : (arr_15 [i_2] [i_0]));
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        arr_47 [i_0 + 2] [i_2] [i_9] [12LL] [i_12] [i_9] [i_10] = ((/* implicit */_Bool) arr_1 [i_0]);
                        arr_48 [i_0] [10LL] [i_0] [i_10] [i_0] = ((/* implicit */long long int) var_6);
                        var_29 = (((~(1503795482867133427LL))) * (((((/* implicit */_Bool) (unsigned short)8568)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-3085336134310938809LL))));
                    }
                    for (short i_13 = 1; i_13 < 19; i_13 += 3) 
                    {
                        arr_51 [i_0] [i_10] [i_10] [i_0] [6] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [9LL] [i_0 - 1] [i_10 - 1] [i_13 + 2]))));
                        var_30 = ((/* implicit */long long int) var_15);
                        arr_52 [i_0] [15U] [i_10] [i_0] = ((/* implicit */int) arr_21 [i_0 + 2] [i_9] [i_10]);
                    }
                    for (long long int i_14 = 1; i_14 < 20; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_14 - 1])) && (((/* implicit */_Bool) arr_15 [i_0 - 1] [i_14 - 1]))));
                        arr_56 [i_0 + 1] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 1912542244746754810LL))));
                    }
                    var_32 = (~(arr_38 [i_0 - 2] [i_0]));
                }
                var_33 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [18LL] [i_2])) ? (((/* implicit */int) (unsigned short)128)) : (((/* implicit */int) (_Bool)1)))) & ((-(var_13)))));
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        {
                            var_34 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_7)))) ? (arr_40 [i_9] [i_9] [i_9] [i_9 + 3]) : (((/* implicit */long long int) ((/* implicit */int) ((-1503795482867133428LL) != (((/* implicit */long long int) 0))))))));
                            var_35 = var_11;
                            var_36 &= ((long long int) var_10);
                        }
                    } 
                } 
            }
            for (unsigned int i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                arr_66 [i_17] [(short)11] [(short)11] [i_17] = ((/* implicit */int) (_Bool)0);
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_71 [i_0 + 2] [4] [i_17] [i_18] [i_0] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)59725))));
                            var_37 = var_7;
                        }
                    } 
                } 
            }
        }
        for (long long int i_20 = 1; i_20 < 19; i_20 += 1) 
        {
            /* LoopNest 3 */
            for (short i_21 = 2; i_21 < 21; i_21 += 3) 
            {
                for (signed char i_22 = 1; i_22 < 20; i_22 += 1) 
                {
                    for (int i_23 = 0; i_23 < 22; i_23 += 3) 
                    {
                        {
                            var_38 &= ((/* implicit */short) ((8053918191594127214LL) - (6380426935016810774LL)));
                            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) var_3))));
                            var_40 = ((((/* implicit */_Bool) (+(((long long int) (_Bool)1))))) ? (var_13) : (((/* implicit */int) (signed char)114)));
                            var_41 = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_16 [i_0 + 1] [i_0 + 1] [i_21 - 1] [i_22 - 1])), (4970456322508552229LL)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) var_13)) / (114688U)))) : (-6243233022803191591LL));
                        }
                    } 
                } 
            } 
            arr_82 [i_20] [i_20] [i_20 + 2] = ((/* implicit */unsigned int) arr_78 [i_0] [i_20] [i_20 - 1] [3] [i_0 + 1] [i_20 + 1]);
            var_42 ^= ((/* implicit */short) var_14);
        }
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 22; i_24 += 3) 
        {
            for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
            {
                {
                    arr_88 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [5U] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_65 [i_0] [i_0] [i_24] [i_0]))) % (arr_85 [i_25] [i_24] [i_0])))))) : ((-(((-1LL) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                    /* LoopNest 2 */
                    for (short i_26 = 0; i_26 < 22; i_26 += 4) 
                    {
                        for (int i_27 = 0; i_27 < 22; i_27 += 1) 
                        {
                            {
                                arr_93 [i_0] [i_24] [i_24] [i_25] [i_27] [i_24] = ((/* implicit */long long int) 4065340410U);
                                var_43 ^= max((max((((/* implicit */long long int) (_Bool)1)), (arr_69 [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_25] [i_25 - 1] [i_25 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0] [i_0 + 2])) ? (arr_36 [i_0] [i_0] [i_26] [i_0]) : (((/* implicit */long long int) 7U))))) ? ((~(arr_59 [i_0 + 2] [i_0 + 2] [i_25] [i_25] [i_26] [10U]))) : (((((/* implicit */int) (signed char)101)) >> (((((/* implicit */int) (short)-1)) + (19)))))))));
                                var_44 = arr_38 [i_25 - 1] [i_26];
                                arr_94 [i_25] [i_24] [i_25] [i_24] [i_24] = ((/* implicit */_Bool) var_6);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_28 = 4; i_28 < 21; i_28 += 1) 
                    {
                        arr_97 [i_25] [i_25] [i_25] [i_28] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) var_14)))))))) || (((/* implicit */_Bool) max((((short) var_10)), (((/* implicit */short) ((signed char) var_13))))))));
                        var_45 -= ((/* implicit */long long int) max(((!(arr_79 [i_25 - 1] [i_0]))), (arr_79 [i_25 - 1] [i_0])));
                        var_46 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3085336134310938807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-180608551495773271LL)))) || (((/* implicit */_Bool) max((arr_14 [i_0] [i_0 - 1] [i_0]), (((/* implicit */unsigned short) arr_0 [i_24])))))));
                    }
                    for (long long int i_29 = 0; i_29 < 22; i_29 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_30 = 0; i_30 < 22; i_30 += 2) 
                        {
                            var_47 = ((/* implicit */short) arr_19 [i_0] [i_30]);
                            arr_104 [i_29] [i_29] [i_29] [i_29] [i_25] [i_29] [i_29] = ((/* implicit */unsigned int) (-(max((((var_10) | (((/* implicit */long long int) var_6)))), (var_4)))));
                        }
                        for (long long int i_31 = 3; i_31 < 18; i_31 += 2) 
                        {
                            arr_108 [i_0 + 1] [i_0 + 1] [14] [i_29] [i_25] = ((/* implicit */signed char) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                            arr_109 [i_0 + 2] [i_0 + 2] [i_25] [i_0 + 2] [i_31] = ((/* implicit */long long int) var_0);
                        }
                        for (long long int i_32 = 0; i_32 < 22; i_32 += 3) 
                        {
                            var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_58 [3] [3] [3] [i_25 - 1] [i_25] [i_32]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (var_14))))) : ((~(1474503086U)))));
                            arr_112 [i_25] [i_25] = ((/* implicit */signed char) min(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_2))))));
                        }
                        var_49 ^= ((/* implicit */_Bool) (-(((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2]))) != (3237385678U)))) / ((-(((/* implicit */int) (short)28058))))))));
                    }
                    var_50 ^= ((/* implicit */unsigned int) ((((arr_80 [i_0 + 2] [i_0] [i_0 - 2] [i_0 + 2] [i_0] [i_0 + 1] [i_0]) ? (arr_83 [i_0 - 1] [i_0] [i_24]) : (((/* implicit */int) (signed char)-5)))) | (arr_72 [i_0] [i_0 - 1])));
                }
            } 
        } 
    }
    for (unsigned int i_33 = 0; i_33 < 22; i_33 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_34 = 0; i_34 < 22; i_34 += 1) /* same iter space */
        {
            var_51 -= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_110 [i_34] [i_34] [12LL] [i_33] [12LL] [i_33] [i_33])) ? (((/* implicit */int) arr_57 [(short)8] [i_33] [i_33] [i_34])) : (((/* implicit */int) var_2))))) % (arr_70 [i_33] [i_33] [i_33] [(unsigned short)12] [i_34]))) - (((/* implicit */long long int) ((/* implicit */int) arr_105 [i_33] [i_34] [i_34])))));
            /* LoopNest 2 */
            for (signed char i_35 = 2; i_35 < 19; i_35 += 1) 
            {
                for (short i_36 = 1; i_36 < 18; i_36 += 3) 
                {
                    {
                        var_52 = ((/* implicit */unsigned int) (-(arr_120 [i_33] [i_35] [13U])));
                        var_53 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) 1865821808)), (131008LL)))) || (((/* implicit */_Bool) 1475281782U)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)17038))))) : (min((((/* implicit */unsigned int) (short)6384)), (606539132U)))));
                    }
                } 
            } 
            var_54 = ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)28324))))) : (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_65 [i_33] [i_33] [i_34] [i_34])))) | (max((((/* implicit */long long int) (short)17034)), (arr_38 [i_33] [i_33]))))));
            var_55 = ((long long int) ((((/* implicit */_Bool) arr_81 [(short)6] [i_33] [i_33] [i_33] [4LL] [20LL] [i_33])) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_8))))));
            /* LoopNest 3 */
            for (unsigned short i_37 = 0; i_37 < 22; i_37 += 1) 
            {
                for (short i_38 = 0; i_38 < 22; i_38 += 1) 
                {
                    for (signed char i_39 = 0; i_39 < 22; i_39 += 2) 
                    {
                        {
                            var_56 = ((/* implicit */long long int) ((((/* implicit */int) (short)16376)) - (((/* implicit */int) (short)8267))));
                            var_57 = ((/* implicit */short) ((((arr_11 [i_39] [i_38] [i_37]) + ((+(((/* implicit */int) arr_79 [i_33] [i_33])))))) - (arr_1 [i_39])));
                        }
                    } 
                } 
            } 
        }
        for (short i_40 = 0; i_40 < 22; i_40 += 1) /* same iter space */
        {
            var_58 = ((/* implicit */int) arr_41 [12LL] [i_40] [i_33] [i_33] [i_33] [12LL] [12LL]);
            /* LoopNest 3 */
            for (long long int i_41 = 0; i_41 < 22; i_41 += 1) 
            {
                for (unsigned int i_42 = 1; i_42 < 19; i_42 += 3) 
                {
                    for (short i_43 = 0; i_43 < 22; i_43 += 1) 
                    {
                        {
                            var_59 &= ((/* implicit */short) ((((unsigned int) var_3)) + (((/* implicit */unsigned int) ((var_0) >> (((((/* implicit */int) (short)-16366)) + (16397))))))));
                            var_60 = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_105 [i_42] [i_41] [i_40])))), (((/* implicit */int) arr_77 [i_33] [i_40] [i_41] [i_41] [i_42 + 3] [(unsigned short)17]))));
                        }
                    } 
                } 
            } 
        }
        arr_143 [i_33] = ((/* implicit */signed char) ((4294967280U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
        /* LoopSeq 1 */
        for (long long int i_44 = 0; i_44 < 22; i_44 += 1) 
        {
            /* LoopNest 3 */
            for (short i_45 = 1; i_45 < 20; i_45 += 2) 
            {
                for (int i_46 = 1; i_46 < 20; i_46 += 3) 
                {
                    for (_Bool i_47 = 0; i_47 < 1; i_47 += 1) 
                    {
                        {
                            arr_154 [i_33] = ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)914)), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (-1865821817) : (((/* implicit */int) arr_149 [i_33] [i_33] [i_33] [i_33] [i_33]))))), ((+(5016815832509849826LL)))))));
                            var_61 = ((/* implicit */int) (-(((((/* implicit */_Bool) min((arr_141 [14U] [i_46] [i_45 + 1] [i_33] [i_44] [i_33]), (((/* implicit */long long int) arr_146 [1LL] [i_45]))))) ? (arr_76 [i_45 + 1] [i_45 + 2] [i_45 + 2] [i_46 - 1] [i_45 + 2]) : (var_4)))));
                            arr_155 [4] [2LL] [4] &= ((/* implicit */long long int) (short)-29190);
                        }
                    } 
                } 
            } 
            var_62 = ((/* implicit */unsigned short) var_6);
            var_63 = ((/* implicit */long long int) ((_Bool) ((((((/* implicit */_Bool) 4970456322508552229LL)) ? (arr_26 [i_44] [21] [i_33] [i_33]) : (var_7))) / (arr_64 [i_33] [i_33] [i_44]))));
        }
    }
    var_64 += ((/* implicit */_Bool) var_8);
}
