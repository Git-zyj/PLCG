/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136736
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [(_Bool)1] &= ((min((var_4), (arr_4 [2]))) ? ((+(8191))) : (((/* implicit */int) (!(arr_4 [(_Bool)1])))));
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_0]) : (((arr_6 [i_0] [i_0] [i_1] [i_2]) | ((-2147483647 - 1))))));
                    arr_11 [i_1] = (_Bool)1;
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */_Bool) max((var_10), (((_Bool) var_7))));
    /* LoopSeq 4 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */int) ((max((((((/* implicit */_Bool) 7)) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [i_3] [i_3] [18]))), (((/* implicit */int) arr_0 [i_3] [i_3])))) == (((arr_4 [8]) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_3])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_3] [16] [10] [6]))))))));
        arr_15 [7] |= ((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_4 [16]))));
        arr_16 [(_Bool)1] &= max((arr_12 [(_Bool)1] [i_3]), (((/* implicit */int) var_9)));
    }
    for (int i_4 = 1; i_4 < 20; i_4 += 2) 
    {
        arr_20 [i_4] [i_4] = ((int) (-(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (int i_6 = 1; i_6 < 19; i_6 += 4) 
            {
                {
                    var_11 &= ((/* implicit */_Bool) min((arr_5 [i_5]), (arr_25 [2] [i_6 - 1] [i_6 - 1] [i_5])));
                    var_12 = max((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))), ((((!(arr_4 [4]))) ? (((2147483647) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((arr_2 [i_5] [i_5]) >= (((/* implicit */int) (_Bool)0))))))));
                    arr_26 [i_4] [i_4] = (+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_1)))));
                    arr_27 [i_5] = ((/* implicit */_Bool) min((-1), (8191)));
                    var_13 = arr_3 [i_4 + 1] [i_4 - 1] [i_4 + 1];
                }
            } 
        } 
        var_14 = ((/* implicit */int) max((var_14), (min((((/* implicit */int) var_1)), (arr_1 [i_4])))));
        /* LoopSeq 3 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                for (int i_9 = 3; i_9 < 18; i_9 += 1) 
                {
                    {
                        arr_37 [i_9] [i_9] [i_9] [(_Bool)1] = ((/* implicit */int) arr_35 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_7 - 1]);
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_15 = ((/* implicit */_Bool) max(((-(arr_21 [i_4 + 1] [i_7 - 1]))), (((((/* implicit */_Bool) arr_23 [i_4 - 1])) ? (max((((/* implicit */int) arr_8 [(_Bool)1] [i_7] [(_Bool)1])), (var_8))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (var_7))))))));
                            arr_41 [i_9] [i_7] [i_7] [(_Bool)1] [i_7] = ((/* implicit */_Bool) max(((-(((var_3) ? (((/* implicit */int) (_Bool)1)) : (arr_21 [i_7 - 1] [i_9]))))), (((2147483647) - (((/* implicit */int) (_Bool)1))))));
                            var_16 = ((/* implicit */int) min((var_16), (max((-2147483639), (((/* implicit */int) (_Bool)1))))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                for (int i_12 = 2; i_12 < 20; i_12 += 1) 
                {
                    {
                        arr_47 [1] [i_11] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_4 - 1] [i_4] [i_4 - 1])) ? (((((/* implicit */_Bool) arr_32 [i_4 - 1] [i_7] [i_11])) ? (2147483642) : (((((/* implicit */_Bool) arr_6 [i_4] [i_7] [(_Bool)1] [(_Bool)0])) ? (((/* implicit */int) arr_4 [16])) : (((/* implicit */int) arr_19 [i_4])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_4] [6])) ? (((/* implicit */int) var_4)) : (var_6)))) ? (((arr_5 [i_4]) << (((arr_21 [i_4 - 1] [i_4]) - (1384066441))))) : (arr_38 [i_7 - 1] [(_Bool)1])))));
                        arr_48 [(_Bool)1] [i_7] [i_11] [i_11] [i_12] = ((((((/* implicit */_Bool) 2147483647)) ? (((arr_1 [i_4]) + (((/* implicit */int) arr_19 [i_4])))) : (((arr_31 [i_4 + 1] [i_4]) ? (((/* implicit */int) arr_33 [i_7] [i_7 - 1] [9] [i_7 - 1])) : (((/* implicit */int) (_Bool)1)))))) * (((arr_5 [i_11]) * (((((/* implicit */_Bool) arr_23 [i_12])) ? (((/* implicit */int) arr_18 [i_4] [i_11])) : (arr_46 [i_4] [i_4] [(_Bool)1] [i_4 + 1]))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((arr_38 [i_7 - 1] [(_Bool)1]) != (((/* implicit */int) (!(arr_0 [i_4 - 1] [i_4 - 1])))))))));
        }
        /* vectorizable */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_18 *= ((/* implicit */_Bool) arr_43 [(_Bool)1]);
            arr_51 [i_4] [i_4] = ((/* implicit */_Bool) ((-12) ^ (-15)));
        }
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
        {
            var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1)) ? (arr_23 [i_4]) : (var_7)))) ? (arr_29 [i_4]) : (((/* implicit */int) arr_40 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]))))) ? (((/* implicit */int) max(((_Bool)0), (var_2)))) : (arr_36 [2] [10] [2] [10] [i_4 - 1])));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_20 += (_Bool)1;
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((var_1) ? (arr_59 [i_4 + 1]) : (arr_59 [i_4 - 1])));
                            var_22 -= ((/* implicit */_Bool) arr_59 [i_14]);
                        }
                    } 
                } 
            }
            var_23 = ((int) arr_18 [i_4] [i_14]);
        }
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_67 [(_Bool)1] [i_18] = max((((var_1) ? (arr_45 [i_18] [i_18] [i_18] [i_18]) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_36 [i_18] [i_18] [i_18] [i_18] [i_18]) : (((/* implicit */int) (_Bool)0)))))), ((((((_Bool)1) && ((_Bool)1))) ? (((0) % (-2147483645))) : (max((((/* implicit */int) arr_66 [i_18])), (var_6))))));
        var_24 = ((arr_31 [i_18] [i_18]) ? (arr_23 [i_18]) : ((((_Bool)1) ? (max((((/* implicit */int) (_Bool)1)), (4194303))) : (((/* implicit */int) (_Bool)1)))));
        arr_68 [i_18] = ((/* implicit */int) arr_66 [i_18]);
        var_25 &= (_Bool)0;
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        arr_71 [6] &= (((((~(((/* implicit */int) arr_17 [i_19] [i_19])))) + (2147483647))) >> (((/* implicit */int) arr_17 [i_19] [i_19])));
        /* LoopSeq 2 */
        for (int i_20 = 0; i_20 < 11; i_20 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_21 = 0; i_21 < 11; i_21 += 2) 
            {
                var_26 *= arr_18 [(_Bool)1] [18];
                /* LoopSeq 3 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    arr_81 [i_19] [i_19] = ((/* implicit */_Bool) 2147483647);
                    arr_82 [(_Bool)1] [i_19] [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)0)) : (min((arr_59 [i_20]), (((/* implicit */int) arr_79 [i_19] [i_20] [5] [i_20]))))));
                }
                /* vectorizable */
                for (int i_23 = 0; i_23 < 11; i_23 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        arr_87 [i_19] [4] [i_19] [i_23] [i_23] [i_23] = ((/* implicit */_Bool) ((var_4) ? (var_8) : (var_6)));
                        arr_88 [i_19] [(_Bool)1] [i_19] [i_20] [i_19] = arr_38 [i_19] [i_19];
                        arr_89 [i_19] [i_19] [i_19] [i_19] [i_19] = ((((/* implicit */int) (_Bool)1)) > (((((/* implicit */int) (_Bool)1)) ^ (arr_25 [i_19] [i_19] [i_21] [i_19]))));
                    }
                    for (int i_25 = 3; i_25 < 10; i_25 += 3) 
                    {
                        var_27 = (((-2147483647 - 1)) ^ (((/* implicit */int) arr_18 [i_25 - 1] [i_25 - 2])));
                        var_28 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [8] [i_20] [i_19] [i_23] [i_19]))))) ? (((/* implicit */int) arr_39 [i_23] [i_23] [i_19] [i_20] [i_25 - 3])) : (-2147483645));
                        var_29 = ((/* implicit */_Bool) min((var_29), (arr_58 [i_25 + 1] [i_25 + 1] [i_25] [i_25 + 1] [i_25 + 1] [i_19])));
                    }
                    var_30 = (+(534773760));
                }
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    arr_96 [i_19] [i_19] [i_20] [7] [i_26] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_60 [i_19] [i_20] [i_21] [i_26] [(_Bool)1]) % (arr_60 [i_19] [i_20] [i_20] [i_26] [i_26]))))));
                    arr_97 [i_19] [i_19] [(_Bool)1] [i_19] = arr_58 [i_19] [i_20] [i_21] [i_26] [i_21] [i_26];
                    var_31 ^= ((/* implicit */_Bool) max((((/* implicit */int) var_4)), (max((arr_13 [i_19]), (-2147483645)))));
                }
                /* LoopSeq 2 */
                for (int i_27 = 1; i_27 < 10; i_27 += 1) 
                {
                    arr_100 [i_19] [i_19] [3] [(_Bool)1] [i_27] [i_19] = (i_19 % 2 == 0) ? (((/* implicit */int) ((((2147483647) << (((arr_72 [i_19]) - (367864701))))) > ((-2147483647 - 1))))) : (((/* implicit */int) ((((2147483647) << (((((arr_72 [i_19]) - (367864701))) - (1170067145))))) > ((-2147483647 - 1)))));
                    arr_101 [i_19] [i_19] [i_27] = var_8;
                }
                for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                {
                    arr_104 [i_19] = (-(arr_57 [i_28] [i_19] [i_19] [i_19]));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_77 [i_19] [i_21] [i_28 + 1] [i_28])) ? (arr_77 [i_19] [i_19] [i_28 + 1] [i_28]) : (((/* implicit */int) var_5)))))))));
                    arr_105 [i_19] [i_19] [i_21] [i_28] |= arr_0 [i_20] [i_19];
                    arr_106 [i_19] [i_19] = ((/* implicit */_Bool) max((((max((arr_32 [i_20] [i_21] [i_20]), (arr_93 [(_Bool)1] [2]))) ^ (((arr_39 [(_Bool)1] [i_19] [i_19] [(_Bool)1] [i_28]) ? (((/* implicit */int) arr_49 [i_19] [i_19] [i_19])) : (var_6))))), (((/* implicit */int) (!((_Bool)1))))));
                    arr_107 [i_19] [i_19] [5] [i_19] [i_19] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [(_Bool)1] [i_20])) ? (((/* implicit */int) arr_24 [i_20] [i_21] [i_28 + 1] [i_28 + 1])) : (max((2147483647), (((((/* implicit */int) (_Bool)1)) & (-2147483640)))))));
                }
            }
            /* vectorizable */
            for (int i_29 = 0; i_29 < 11; i_29 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    arr_112 [i_19] [i_19] [i_29] [i_30] = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        var_33 = ((/* implicit */_Bool) arr_103 [i_19] [i_20] [i_29] [8] [i_31] [i_19]);
                        arr_115 [i_31] [i_20] [i_20] [(_Bool)1] [i_19] &= ((/* implicit */_Bool) ((int) ((arr_110 [i_31] [i_30] [i_20] [i_20] [i_19]) ? (arr_93 [i_19] [i_19]) : ((-2147483647 - 1)))));
                        arr_116 [i_31] [i_19] [(_Bool)1] [i_19] [i_19] = ((((/* implicit */int) arr_35 [i_31] [i_29] [i_20] [i_19])) ^ (((arr_4 [i_19]) ? (((/* implicit */int) arr_0 [i_19] [i_19])) : (((/* implicit */int) arr_33 [1] [1] [i_29] [1])))));
                        arr_117 [i_19] [(_Bool)1] [i_29] [i_30] [i_30] = ((/* implicit */int) (!(((/* implicit */_Bool) -2147483628))));
                        var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) ((1) != (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (int i_32 = 0; i_32 < 11; i_32 += 3) 
                    {
                        var_35 -= ((/* implicit */int) ((arr_72 [i_20]) >= (arr_72 [i_20])));
                        var_36 = ((/* implicit */int) min((var_36), (((int) (-2147483647 - 1)))));
                    }
                    var_37 = ((/* implicit */int) min((var_37), (((((/* implicit */_Bool) (((_Bool)1) ? (var_7) : (2147483642)))) ? (((/* implicit */int) arr_114 [i_19] [i_19] [i_19] [i_19] [i_20])) : (((var_1) ? (((/* implicit */int) arr_42 [i_19] [(_Bool)1] [i_20] [16])) : (((/* implicit */int) (_Bool)0))))))));
                    arr_120 [i_19] [4] = (-(((/* implicit */int) (_Bool)1)));
                }
                /* LoopNest 2 */
                for (int i_33 = 3; i_33 < 9; i_33 += 4) 
                {
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */_Bool) arr_99 [i_33] [i_19] [i_19] [i_19]);
                            var_39 &= ((/* implicit */int) (!(((((/* implicit */_Bool) arr_23 [i_19])) && (arr_19 [i_19])))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) arr_114 [i_20] [0] [i_20] [i_20] [i_20]))));
                var_41 = ((/* implicit */int) min((var_41), (((((var_6) != (arr_13 [(_Bool)1]))) ? (((/* implicit */int) arr_74 [i_20])) : (arr_125 [(_Bool)1] [i_20] [i_29] [i_20])))));
            }
            /* vectorizable */
            for (_Bool i_35 = 0; i_35 < 0; i_35 += 1) 
            {
                arr_128 [i_19] [i_20] [5] = (!(((/* implicit */_Bool) arr_55 [i_35 + 1] [i_35 + 1] [i_35 + 1])));
                arr_129 [i_19] [i_19] [i_19] [i_19] = ((_Bool) arr_78 [i_35 + 1] [i_35] [i_19]);
                arr_130 [i_19] [i_19] [i_19] = (!(var_9));
            }
            arr_131 [i_19] [i_19] = (~(((((/* implicit */_Bool) arr_12 [i_20] [i_20])) ? (arr_12 [i_20] [i_19]) : (arr_12 [i_20] [i_19]))));
        }
        for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
        {
            arr_134 [i_19] = ((/* implicit */int) ((arr_4 [i_19]) && (((/* implicit */_Bool) ((arr_4 [i_19]) ? (var_6) : (((/* implicit */int) arr_4 [i_19])))))));
            arr_135 [i_19] [(_Bool)1] = ((/* implicit */int) arr_69 [i_19]);
        }
        var_42 *= ((/* implicit */_Bool) (-2147483647 - 1));
    }
}
