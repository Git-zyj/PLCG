/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120019
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
    var_12 = ((/* implicit */int) max((var_12), (max((((((/* implicit */_Bool) ((var_11) % (var_6)))) ? ((~(-1608232455))) : (var_10))), (((/* implicit */int) (!(((/* implicit */_Bool) 0)))))))));
    var_13 = -1;
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0 - 1] [i_0] = ((int) 2147483647);
        arr_4 [i_0] = (~(((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] = arr_1 [i_0 + 1] [i_0 - 2];
                        arr_12 [i_0] = ((int) arr_0 [i_0 + 1]);
                        var_14 = ((min((arr_1 [i_0 - 1] [i_0 - 2]), (arr_1 [i_0 - 2] [i_0 - 2]))) * (((((/* implicit */_Bool) (-2147483647 - 1))) ? (0) : (2147483633))));
                    }
                } 
            } 
            arr_13 [i_0 + 1] [i_1] [i_0 + 1] = arr_7 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 1];
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 23; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                arr_23 [i_0 + 1] [i_4] [i_4] [i_4] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) ^ (var_5))))));
                                arr_24 [i_0 - 1] [i_4] [i_4] [19] [i_4] = max(((-((+(-903160577))))), ((~(479485966))));
                                var_15 = max((var_8), (1882674763));
                            }
                        } 
                    } 
                    var_16 |= ((((/* implicit */_Bool) max((arr_5 [i_0 - 1] [i_4 - 1]), (((((/* implicit */_Bool) var_5)) ? (479485944) : (arr_18 [i_0] [i_4 + 1] [i_5] [i_0 + 1] [i_0] [i_0 - 1])))))) ? (arr_22 [i_0] [i_4 - 1] [i_0] [i_0 - 1] [i_5]) : (max(((+(arr_19 [i_0] [i_0] [i_4] [i_4] [i_5] [i_5]))), (((((/* implicit */_Bool) var_7)) ? (arr_17 [i_0]) : (573781568))))));
                    var_17 = ((((/* implicit */_Bool) (-(arr_18 [i_4 - 3] [i_4 - 1] [i_4 - 1] [i_0 - 1] [i_4] [i_0 + 1])))) ? (((479485950) & (arr_19 [i_0] [i_0 + 1] [i_4 - 1] [i_5] [i_5] [i_5]))) : (((((/* implicit */_Bool) -1175662289)) ? (var_2) : (arr_19 [i_5] [i_4 - 3] [i_4 - 2] [i_4] [i_0] [i_0]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 14; i_8 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                var_18 = ((((/* implicit */_Bool) ((int) arr_19 [i_10] [i_9] [20] [i_9] [i_8] [i_8 + 1]))) ? (arr_10 [i_8 + 1] [i_8] [i_9] [i_10]) : (((((/* implicit */_Bool) 429793832)) ? (2147418112) : (15))));
                var_19 = ((((/* implicit */_Bool) 1896728899)) ? (-2021295310) : (0));
                var_20 = ((((/* implicit */_Bool) arr_16 [i_8 + 2] [i_8 + 2] [i_8 + 2])) ? (1360774010) : (arr_31 [i_8 + 2]));
                arr_32 [i_8] [i_9] [i_10] = var_1;
            }
            for (int i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                arr_35 [i_9] [i_9] [i_11] [i_9] = 2147483647;
                arr_36 [i_8] [i_9] [i_8] [i_9] = -219625501;
                arr_37 [i_8] [i_8 - 1] [i_9] [i_11] = arr_18 [i_11] [i_9] [i_9] [i_9] [i_8] [i_8];
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 15; i_12 += 2) 
                {
                    for (int i_13 = 2; i_13 < 15; i_13 += 4) 
                    {
                        {
                            arr_44 [i_8] [i_9] = ((((/* implicit */_Bool) arr_7 [i_12] [i_8 - 1] [i_8] [i_8])) ? (arr_42 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8]) : (arr_33 [i_9] [i_13 - 1] [5]));
                            arr_45 [i_8 + 2] [i_9] = var_1;
                        }
                    } 
                } 
            }
            var_21 = (~(arr_14 [i_8 + 2] [i_9] [i_8]));
        }
        for (int i_14 = 2; i_14 < 14; i_14 += 4) 
        {
            arr_48 [i_8 + 1] [i_14] [i_14 + 2] = ((int) arr_29 [i_14]);
            var_22 = var_6;
            arr_49 [i_14 + 1] [i_14 + 2] = (~((-2147483647 - 1)));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 16; i_16 += 1) 
                {
                    for (int i_17 = 4; i_17 < 15; i_17 += 2) 
                    {
                        {
                            arr_60 [i_8] [i_8] [13] [11] [i_8] |= ((((/* implicit */_Bool) arr_22 [i_14] [i_14] [i_14] [i_14 + 2] [i_17 - 3])) ? (arr_22 [i_14] [i_8] [i_8] [i_14 + 1] [i_17 - 1]) : (arr_22 [i_14] [i_14 + 2] [i_14 + 2] [i_14 + 2] [i_17 - 3]));
                            var_23 = ((((/* implicit */_Bool) var_3)) ? (var_5) : (arr_27 [i_14 - 2] [i_8 + 2]));
                        }
                    } 
                } 
            } 
        }
        for (int i_18 = 0; i_18 < 16; i_18 += 1) 
        {
            var_24 += ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_8] [i_18] [i_8 + 2] [i_8 + 2])) && (((/* implicit */_Bool) arr_52 [i_8] [i_18] [i_8 + 2] [i_18]))));
            var_25 = ((((((/* implicit */_Bool) var_9)) ? (var_5) : (1444609737))) + (((((/* implicit */_Bool) var_9)) ? (1849072941) : (4194302))));
        }
        var_26 = ((int) arr_14 [i_8] [i_8] [i_8]);
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 16; i_19 += 3) 
        {
            for (int i_20 = 3; i_20 < 15; i_20 += 4) 
            {
                {
                    var_27 = ((/* implicit */int) max((var_27), ((~(arr_1 [i_20 - 1] [i_8 + 2])))));
                    var_28 = var_2;
                    var_29 = ((/* implicit */int) max((var_29), (arr_42 [i_8 + 2] [i_8 + 2] [i_8] [i_8 + 2] [i_8])));
                }
            } 
        } 
    }
    for (int i_21 = 3; i_21 < 11; i_21 += 2) 
    {
        var_30 = ((((/* implicit */_Bool) ((((((479485966) | (-668735398))) + (2147483647))) >> (((arr_63 [i_21]) - (457032583)))))) ? (((((/* implicit */_Bool) -140675243)) ? (arr_68 [i_21 + 2]) : (arr_68 [i_21 - 1]))) : (((var_0) | (arr_72 [i_21] [i_21]))));
        var_31 = ((/* implicit */int) min((var_31), (var_11)));
        arr_73 [i_21] = max((((int) (~(var_2)))), (arr_8 [12] [i_21 - 1] [12]));
        var_32 = ((/* implicit */int) max((var_32), ((-2147483647 - 1))));
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 15; i_22 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_23 = 0; i_23 < 15; i_23 += 4) 
        {
            arr_82 [3] [i_22] [i_23] = 7855368;
            arr_83 [i_22] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3145728)) ? (-1) : (262140))))));
            var_33 = (-(arr_21 [i_22] [i_22] [i_23]));
            /* LoopSeq 1 */
            for (int i_24 = 0; i_24 < 15; i_24 += 4) 
            {
                var_34 = var_0;
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 15; i_25 += 1) 
                {
                    for (int i_26 = 0; i_26 < 15; i_26 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_10 [i_22] [i_22] [i_22] [i_22]))));
                            var_36 = var_5;
                        }
                    } 
                } 
                var_37 = ((((/* implicit */_Bool) var_6)) ? (4177920) : (arr_61 [i_22]));
                /* LoopSeq 1 */
                for (int i_27 = 0; i_27 < 15; i_27 += 3) 
                {
                    var_38 = ((/* implicit */int) ((((/* implicit */_Bool) 140675242)) && (((/* implicit */_Bool) 536870784))));
                    var_39 = var_7;
                }
            }
            arr_95 [i_22] [i_22] [i_23] = (~(arr_8 [i_22] [i_23] [i_23]));
        }
        for (int i_28 = 0; i_28 < 15; i_28 += 2) 
        {
            /* LoopNest 3 */
            for (int i_29 = 2; i_29 < 14; i_29 += 2) 
            {
                for (int i_30 = 0; i_30 < 15; i_30 += 4) 
                {
                    for (int i_31 = 0; i_31 < 15; i_31 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */int) max((var_40), (((((((/* implicit */_Bool) arr_67 [i_31] [i_29] [i_29])) ? (124400196) : (arr_105 [i_28] [3] [i_28] [i_31]))) | (arr_58 [i_22] [i_28] [i_28] [i_22])))));
                            var_41 = (-(arr_102 [i_29 + 1] [i_29] [i_29] [i_29 - 1] [i_29 + 1]));
                            var_42 = var_3;
                            var_43 = ((/* implicit */int) ((arr_39 [i_29 + 1] [i_29 - 1] [i_29 - 1] [i_29]) > (var_4)));
                            var_44 |= ((int) -420312865);
                        }
                    } 
                } 
            } 
            arr_109 [i_22] = ((arr_0 [i_22]) % (((((/* implicit */_Bool) 140675243)) ? (arr_63 [i_22]) : (var_2))));
        }
        /* LoopSeq 4 */
        for (int i_32 = 4; i_32 < 12; i_32 += 2) 
        {
            /* LoopNest 3 */
            for (int i_33 = 2; i_33 < 14; i_33 += 4) 
            {
                for (int i_34 = 3; i_34 < 12; i_34 += 2) 
                {
                    for (int i_35 = 4; i_35 < 14; i_35 += 1) 
                    {
                        {
                            arr_121 [i_22] [i_32] [i_33] [i_34] [i_35] = ((((/* implicit */_Bool) ((int) arr_15 [i_34]))) ? (((int) (-2147483647 - 1))) : (((((/* implicit */_Bool) var_6)) ? (var_11) : (arr_15 [i_34]))));
                            var_45 = ((((arr_90 [i_32 - 2] [i_34 - 2] [i_35] [11] [i_35 - 1]) + (2147483647))) << (0));
                        }
                    } 
                } 
            } 
            arr_122 [i_22] [i_32] [i_22] = ((((/* implicit */_Bool) arr_69 [i_32] [i_32] [i_32 + 3])) ? (arr_69 [i_32] [i_32] [i_32 + 3]) : (var_4));
            arr_123 [i_22] [i_22] = arr_25 [i_22] [i_32 + 2];
        }
        for (int i_36 = 1; i_36 < 13; i_36 += 4) 
        {
            var_46 = ((/* implicit */int) max((var_46), (-698631271)));
            var_47 = ((/* implicit */int) max((var_47), ((~(var_11)))));
        }
        for (int i_37 = 1; i_37 < 12; i_37 += 1) 
        {
            var_48 = (-(arr_103 [i_37 + 3] [i_37 + 1] [i_37 + 2] [i_37 + 1] [i_37 + 3] [i_37 + 3]));
            arr_130 [i_22] [i_22] = ((arr_33 [14] [14] [i_37 - 1]) ^ (arr_33 [10] [10] [i_37]));
        }
        for (int i_38 = 3; i_38 < 13; i_38 += 2) 
        {
            arr_134 [i_22] [i_22] [i_22] = (~(1553628100));
            arr_135 [13] [7] [1] = arr_96 [i_22];
            /* LoopSeq 3 */
            for (int i_39 = 0; i_39 < 15; i_39 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_40 = 0; i_40 < 15; i_40 += 1) /* same iter space */
                {
                    arr_142 [i_40] [i_40] [i_40] [i_40] [i_40] [i_40] = (~(66584576));
                    var_49 = ((/* implicit */int) max((var_49), (arr_59 [i_40] [i_40] [i_40] [i_38 - 1] [i_38] [i_38 + 1] [i_38 - 2])));
                }
                for (int i_41 = 0; i_41 < 15; i_41 += 1) /* same iter space */
                {
                    arr_145 [i_38] = ((/* implicit */int) (!(((/* implicit */_Bool) -2147483642))));
                    /* LoopSeq 1 */
                    for (int i_42 = 1; i_42 < 12; i_42 += 4) 
                    {
                        var_50 = 1674241294;
                        var_51 = ((((/* implicit */_Bool) arr_90 [i_38] [i_38 - 1] [i_38 - 2] [i_41] [i_42 + 2])) ? (arr_112 [i_22] [i_22]) : (arr_107 [i_22] [i_38] [i_38] [i_38 + 2] [i_41]));
                    }
                }
                arr_148 [i_38] = arr_100 [i_38 + 1] [i_38 - 2] [i_38 - 3] [i_39];
            }
            for (int i_43 = 0; i_43 < 15; i_43 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_44 = 3; i_44 < 13; i_44 += 4) 
                {
                    var_52 = arr_104 [i_22];
                    arr_155 [i_44] [i_22] = ((/* implicit */int) (!(((/* implicit */_Bool) 4194289))));
                }
                arr_156 [i_43] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (186420114)))) ? (arr_2 [i_38 + 2]) : (arr_19 [i_22] [i_38 - 2] [i_38 - 2] [i_22] [i_22] [i_22]));
                /* LoopNest 2 */
                for (int i_45 = 1; i_45 < 14; i_45 += 4) 
                {
                    for (int i_46 = 2; i_46 < 14; i_46 += 2) 
                    {
                        {
                            arr_163 [i_22] [i_38] [i_45] [i_38] [i_38] [i_45] = arr_46 [i_38 + 2] [i_45 + 1];
                            var_53 = var_10;
                        }
                    } 
                } 
            }
            for (int i_47 = 0; i_47 < 15; i_47 += 3) /* same iter space */
            {
                var_54 = ((/* implicit */int) ((var_10) != (arr_108 [i_22] [i_22] [i_22] [6])));
                arr_166 [i_22] [i_47] [2] = (~(-4194298));
                arr_167 [i_22] [14] [i_47] |= (+(2077903199));
                arr_168 [i_22] [i_38] [i_47] = (~((-(-1))));
            }
            arr_169 [i_22] [i_38 - 2] [i_38 - 2] = ((((((/* implicit */_Bool) var_3)) ? (var_3) : (var_10))) ^ (arr_129 [i_38 - 1] [i_38 - 1]));
        }
        var_55 = arr_25 [i_22] [i_22];
        var_56 = var_3;
    }
}
