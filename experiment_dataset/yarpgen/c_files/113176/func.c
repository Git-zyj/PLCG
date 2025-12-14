/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113176
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_12 = arr_1 [7];
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_13 = (((+(var_8))) + (var_11));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_14 |= ((((/* implicit */int) ((arr_8 [i_2] [i_1] [i_1] [i_1]) < (arr_7 [i_1] [i_2] [5] [i_4])))) - (((((/* implicit */_Bool) arr_9 [i_1])) ? (arr_2 [i_3]) : (-421682772))));
                                var_15 = var_3;
                                var_16 = (~(2147483647));
                                var_17 = var_10;
                                var_18 |= (+(arr_12 [i_1]));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_19 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                        var_20 = (((((+(var_7))) + (2147483647))) >> ((((-(1809394738))) + (1809394762))));
                    }
                    for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_21 &= (-(arr_2 [i_2]));
                        var_22 |= (~(((((/* implicit */_Bool) var_9)) ? (var_9) : (arr_15 [i_1] [i_1] [i_1]))));
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_23 = ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 377098170)))) ? (var_2) : (1596592131));
                            var_24 &= ((((/* implicit */_Bool) 524256)) ? (31) : (arr_19 [16] [i_6] [i_2] [i_2] [i_1] [i_0]));
                            var_25 &= 536260611;
                        }
                        for (int i_8 = 2; i_8 < 23; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((377098140) / (var_7)))) || (((/* implicit */_Bool) var_10))));
                            var_27 = ((((/* implicit */_Bool) arr_9 [i_8 + 1])) ? (var_9) : (536260632));
                            var_28 = ((int) arr_15 [i_0] [i_0] [i_2]);
                            var_29 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 800557825)) ? (1355026465) : (arr_20 [i_8] [i_6] [11] [i_1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_6] [i_1])) || (((/* implicit */_Bool) arr_9 [i_1]))))) : ((~(1088198163))));
                            var_30 = ((((/* implicit */_Bool) arr_8 [i_0] [i_8 - 1] [i_2] [i_6])) ? (arr_0 [i_0]) : (arr_8 [i_0] [i_8 - 2] [12] [i_6]));
                        }
                        for (int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_31 = (~(((int) arr_25 [i_0] [i_1] [i_6] [i_6] [i_2] [i_2] [i_0])));
                            var_32 = ((int) var_1);
                            var_33 = ((((/* implicit */_Bool) arr_16 [i_0])) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (arr_25 [i_9] [i_0] [13] [i_6] [i_2] [i_0] [i_0]));
                        }
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            var_34 = ((/* implicit */int) min((var_34), ((+(-536260652)))));
                            var_35 = ((/* implicit */int) ((var_0) >= (((int) 0))));
                            var_36 = (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (16256) : (var_5))));
                        }
                        var_37 = arr_3 [i_1];
                    }
                    for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            arr_36 [i_0] = arr_10 [i_0] [i_11] [i_2] [i_1] [i_0];
                            var_38 = ((((/* implicit */_Bool) ((int) arr_5 [i_0] [19] [i_2] [i_0]))) ? (arr_27 [19] [6] [i_1] [i_2] [i_11] [i_1]) : (((((/* implicit */_Bool) 1809394738)) ? (var_10) : (var_10))));
                            var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                            var_40 |= ((((/* implicit */_Bool) arr_11 [4] [i_12] [i_2])) ? (arr_11 [i_0] [i_1] [i_12]) : (arr_11 [i_0] [i_11] [i_12]));
                        }
                        var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_0] [i_0] [i_0] [i_11])) ? (arr_17 [14] [i_1] [i_0] [i_11] [i_1]) : (var_11))))));
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((int) arr_5 [i_0] [i_0] [i_0] [i_0]))) ? ((-(arr_6 [i_0] [8]))) : (1737745397));
                        var_42 = ((int) arr_5 [i_0] [i_1] [i_1] [i_0]);
                    }
                }
                var_43 = ((/* implicit */int) ((((/* implicit */_Bool) 1821760325)) && ((!(((/* implicit */_Bool) arr_16 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_13 = 1; i_13 < 22; i_13 += 2) 
    {
        var_44 = ((((/* implicit */_Bool) var_5)) ? (((int) arr_31 [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 - 1])) : (var_4));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 23; i_14 += 4) 
        {
            for (int i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                {
                    var_45 = ((((/* implicit */int) ((((((/* implicit */_Bool) arr_39 [i_13 - 1])) ? (arr_17 [i_15] [i_15] [i_15] [i_15] [i_15]) : (-800557809))) <= (((((/* implicit */_Bool) 1329978782)) ? (arr_2 [i_14]) : (arr_15 [i_14] [i_14] [14])))))) | ((((+(arr_1 [i_15]))) / (var_6))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 23; i_16 += 2) 
                    {
                        for (int i_17 = 0; i_17 < 23; i_17 += 2) 
                        {
                            {
                                arr_52 [i_13] [i_14] [i_15] [7] [i_17] [i_17] = (~(((arr_10 [i_15] [i_13 - 1] [14] [i_13 - 1] [i_13 + 1]) % (arr_10 [i_17] [i_13 - 1] [i_13] [i_13 + 1] [i_13 + 1]))));
                                var_46 = ((/* implicit */int) min((var_46), ((~((((!(((/* implicit */_Bool) arr_23 [i_13])))) ? (((((/* implicit */_Bool) arr_45 [i_16])) ? (arr_40 [i_14] [i_14]) : (arr_5 [i_13] [i_15] [i_16] [i_14]))) : (arr_3 [i_15])))))));
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */int) max((var_47), (var_0)));
                }
            } 
        } 
    }
    for (int i_18 = 0; i_18 < 12; i_18 += 4) 
    {
        var_48 = ((((/* implicit */_Bool) ((-320955192) + (((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_18] [i_18])) && (((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_18])) ? (arr_18 [i_18] [i_18] [i_18] [i_18] [i_18]) : (arr_31 [i_18] [i_18] [i_18] [i_18]))))))) : ((~((+(-800557840))))));
        var_49 = ((((((/* implicit */_Bool) arr_22 [i_18] [i_18] [i_18])) ? (arr_22 [i_18] [i_18] [i_18]) : (var_2))) | (((((/* implicit */_Bool) arr_32 [i_18])) ? (arr_32 [i_18]) : (arr_32 [i_18]))));
        /* LoopSeq 3 */
        for (int i_19 = 0; i_19 < 12; i_19 += 4) 
        {
            var_50 = ((int) (!(((/* implicit */_Bool) (-(var_10))))));
            /* LoopSeq 2 */
            for (int i_20 = 0; i_20 < 12; i_20 += 1) 
            {
                var_51 = ((int) ((((/* implicit */_Bool) 894144704)) ? (var_2) : (((((var_5) + (2147483647))) << (((((var_0) + (937669266))) - (22)))))));
                var_52 = (~(((((((min(((-2147483647 - 1)), (var_2))) + (2147483647))) + (2147483647))) << (((1582298721) - (1582298721))))));
            }
            /* vectorizable */
            for (int i_21 = 0; i_21 < 12; i_21 += 4) 
            {
                var_53 = arr_34 [i_18] [i_18] [i_21] [i_21] [i_21];
                var_54 = ((((/* implicit */_Bool) arr_25 [i_21] [i_19] [i_19] [i_19] [8] [i_19] [8])) ? (var_10) : (arr_25 [i_18] [i_18] [i_18] [i_18] [i_19] [i_18] [i_21]));
            }
            var_55 = ((/* implicit */int) min((var_55), (arr_1 [12])));
            /* LoopSeq 3 */
            for (int i_22 = 0; i_22 < 12; i_22 += 3) /* same iter space */
            {
                var_56 = min((((((/* implicit */_Bool) ((int) var_0))) ? (arr_54 [i_22]) : (arr_6 [5] [i_19]))), (((var_0) - (min(((-2147483647 - 1)), (-292607982))))));
                /* LoopNest 2 */
                for (int i_23 = 2; i_23 < 10; i_23 += 3) 
                {
                    for (int i_24 = 0; i_24 < 12; i_24 += 3) 
                    {
                        {
                            var_57 |= min(((-(var_8))), (((((/* implicit */_Bool) arr_31 [i_23 + 2] [i_23 + 2] [i_23 - 1] [i_23])) ? (var_5) : (-800557805))));
                            var_58 = max((1166367067), (-536260603));
                            var_59 = ((/* implicit */int) max((var_59), (min((((int) (!(((/* implicit */_Bool) arr_12 [i_19]))))), (var_2)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_25 = 0; i_25 < 12; i_25 += 3) /* same iter space */
            {
                var_60 = (-(-1838571275));
                arr_76 [i_25] [i_25] [i_25] [i_25] = (+(arr_22 [i_18] [i_18] [i_18]));
            }
            /* vectorizable */
            for (int i_26 = 0; i_26 < 12; i_26 += 2) 
            {
                var_61 = var_0;
                var_62 = arr_27 [i_18] [i_18] [i_19] [3] [i_19] [i_26];
            }
        }
        for (int i_27 = 0; i_27 < 12; i_27 += 2) 
        {
            var_63 = arr_39 [i_18];
            /* LoopNest 2 */
            for (int i_28 = 3; i_28 < 10; i_28 += 4) 
            {
                for (int i_29 = 0; i_29 < 12; i_29 += 1) 
                {
                    {
                        var_64 = min((((((/* implicit */_Bool) (~(536260611)))) ? (min((var_7), (var_5))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_2))))))), (((((/* implicit */_Bool) arr_14 [i_27] [i_27])) ? (((int) var_9)) : (var_7))));
                        var_65 = max((((var_2) & (min((var_2), (894144698))))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 1737745408))))));
                    }
                } 
            } 
        }
        for (int i_30 = 0; i_30 < 12; i_30 += 1) 
        {
            var_66 = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_18] [i_30] [i_18] [i_18]))))), ((-(var_9))));
            /* LoopSeq 2 */
            for (int i_31 = 0; i_31 < 12; i_31 += 2) 
            {
                var_67 = 426930440;
                /* LoopSeq 2 */
                for (int i_32 = 0; i_32 < 12; i_32 += 2) 
                {
                    var_68 &= var_4;
                    var_69 = ((((((/* implicit */_Bool) arr_10 [i_31] [i_31] [i_30] [i_31] [i_32])) ? (var_8) : (536260631))) * (((arr_87 [i_18] [i_18] [i_18]) / (var_11))));
                }
                for (int i_33 = 0; i_33 < 12; i_33 += 1) 
                {
                    var_70 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-733449621), (arr_20 [i_18] [i_30] [i_30] [i_31] [i_33])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_96 [3] [i_31] [3] [3])) || (((/* implicit */_Bool) 16))))) : (var_0)))) ? (var_4) : (((((/* implicit */_Bool) max((536260631), (800557808)))) ? (((/* implicit */int) ((arr_45 [i_18]) <= (arr_16 [i_31])))) : (min((arr_3 [i_18]), (arr_38 [i_18] [i_18]))))));
                    var_71 = ((/* implicit */int) min((var_71), (((((/* implicit */_Bool) ((int) max((var_9), (-65536))))) ? (286261064) : (min((var_7), (arr_38 [i_18] [i_30])))))));
                }
            }
            for (int i_34 = 0; i_34 < 12; i_34 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_35 = 0; i_35 < 12; i_35 += 2) 
                {
                    var_72 = ((((/* implicit */_Bool) min((arr_41 [i_18] [i_35]), (arr_41 [i_34] [i_30])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_34])) ? (-343824481) : (arr_87 [7] [i_30] [i_30])))) ? (min((arr_81 [i_18] [i_18] [i_18]), (var_1))) : (((((/* implicit */_Bool) 800557797)) ? (arr_13 [i_30] [1] [i_34] [13] [i_34]) : (var_2))))) : (arr_58 [i_18] [i_30]));
                    var_73 ^= ((((/* implicit */_Bool) min((var_5), (1582298703)))) ? (var_0) : (((((/* implicit */int) ((var_4) != (var_10)))) | (((((/* implicit */_Bool) -800557793)) ? (var_0) : (arr_82 [i_18] [i_18] [i_18]))))));
                    var_74 = ((((/* implicit */_Bool) arr_28 [i_18] [i_18] [i_34] [i_34] [i_34])) ? (((int) ((var_7) / (800557789)))) : (((max((var_6), (arr_63 [i_18] [i_30]))) + (((var_11) / (var_8))))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_36 = 0; i_36 < 12; i_36 += 4) 
                {
                    var_75 = arr_22 [i_18] [i_30] [i_34];
                    arr_110 [7] [i_30] [i_34] [i_36] [i_30] = (+(((((/* implicit */_Bool) var_9)) ? (arr_0 [i_34]) : (var_11))));
                    var_76 = (~(573219246));
                    var_77 = ((/* implicit */int) min((var_77), ((~(arr_49 [i_34] [i_18])))));
                }
                for (int i_37 = 0; i_37 < 12; i_37 += 1) 
                {
                    arr_113 [i_18] [i_34] = ((((arr_73 [i_18] [i_34]) == (var_0))) ? (var_0) : (((int) ((((/* implicit */_Bool) arr_32 [i_34])) ? (var_7) : (-1406695836)))));
                    var_78 = min((((/* implicit */int) ((((800557823) >= (var_0))) && (((/* implicit */_Bool) ((arr_7 [i_18] [i_30] [i_34] [i_37]) / (var_1))))))), (((int) ((arr_59 [i_30] [i_37]) / (1396980658)))));
                }
                for (int i_38 = 0; i_38 < 12; i_38 += 4) 
                {
                    var_79 = arr_8 [i_34] [i_34] [i_34] [i_34];
                    var_80 = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-1571952405) : (var_8)))) ? (((((/* implicit */_Bool) arr_20 [16] [i_30] [i_34] [i_30] [12])) ? (arr_61 [i_18] [i_30] [i_30]) : (var_4))) : (((var_1) ^ (var_8)))));
                    var_81 = ((/* implicit */int) max((var_81), (min((1548947790), ((+((+(var_9)))))))));
                }
            }
        }
        /* LoopSeq 2 */
        for (int i_39 = 0; i_39 < 12; i_39 += 1) 
        {
            var_82 = arr_56 [i_39];
            var_83 = ((/* implicit */int) min((var_83), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_104 [i_18] [i_39] [i_39] [i_18] [i_39] [2])) ? (arr_9 [i_39]) : (-1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_18]))))) : (var_10))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_68 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])) && (((/* implicit */_Bool) var_3)))))))));
        }
        for (int i_40 = 0; i_40 < 12; i_40 += 1) 
        {
            var_84 ^= -1;
            var_85 &= var_5;
        }
    }
    for (int i_41 = 0; i_41 < 15; i_41 += 3) 
    {
        /* LoopNest 3 */
        for (int i_42 = 0; i_42 < 15; i_42 += 3) 
        {
            for (int i_43 = 0; i_43 < 15; i_43 += 2) 
            {
                for (int i_44 = 1; i_44 < 12; i_44 += 4) 
                {
                    {
                        var_86 = (+(((int) arr_3 [i_44 + 3])));
                        var_87 |= ((((/* implicit */_Bool) var_10)) ? (arr_50 [i_44] [i_44 + 3] [i_43] [i_42] [i_41] [i_41]) : (((/* implicit */int) (!(((/* implicit */_Bool) 1914874540))))));
                        var_88 = var_6;
                        var_89 = ((/* implicit */int) (!((!(((((/* implicit */_Bool) 1521696842)) || (((/* implicit */_Bool) -800557789))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_45 = 0; i_45 < 15; i_45 += 4) 
        {
            var_90 = (-(arr_135 [i_45]));
            var_91 = ((/* implicit */int) max((var_91), (max(((+(((2147483641) - (var_6))))), (max(((-(arr_9 [i_45]))), (-1)))))));
        }
    }
}
