/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119093
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
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */int) (((-(0))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 7)))))))) <= (((int) arr_1 [i_0 - 1]))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((arr_1 [i_0 - 1]) | (((/* implicit */int) (!(((/* implicit */_Bool) -6))))))) <= (((int) 2147483633)))))));
    }
    for (int i_1 = 3; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 3; i_2 < 17; i_2 += 1) 
        {
            var_20 = ((((/* implicit */int) ((arr_5 [9] [i_2] [i_2 - 1]) <= (((/* implicit */int) ((67108863) <= (-1))))))) % (arr_8 [i_1] [i_1] [i_2]));
            arr_9 [i_2] [7] = ((arr_8 [i_1] [13] [10]) / (((7) + (-1))));
            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2147483647), (0)))) ? (((((/* implicit */_Bool) var_5)) ? (arr_3 [i_2]) : (2147483647))) : ((~(var_11)))))) ? (2147483647) : (((((/* implicit */_Bool) -8)) ? (-22) : (2147483634))));
        }
        arr_10 [i_1 - 3] = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_6 [i_1 - 3] [i_1 - 2] [i_1])))) ? (min((var_3), (arr_3 [i_1 - 3]))) : (((/* implicit */int) ((8323072) >= (2147483647)))))))));
    }
    for (int i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_4 = 2; i_4 < 18; i_4 += 4) 
        {
            arr_16 [i_3] = min((((((/* implicit */_Bool) (+(32704)))) ? ((-(var_4))) : (((((/* implicit */_Bool) arr_14 [i_4] [i_3])) ? (arr_11 [i_3 + 1]) : (4161536))))), (var_15));
            arr_17 [i_4] [i_4 + 1] [i_4] &= ((((/* implicit */_Bool) (~(min((15), (var_17)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(16744448))))))) : (min((arr_0 [i_3]), (var_18))));
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 20; i_5 += 1) 
        {
            arr_20 [i_3] = (-((~(var_7))));
            var_22 = ((int) ((arr_18 [i_5] [i_5 - 2] [i_3]) | (var_8)));
        }
        for (int i_6 = 1; i_6 < 17; i_6 += 3) 
        {
            var_23 = ((/* implicit */int) min((var_23), (arr_11 [i_6])));
            var_24 = max(((~(arr_18 [i_3 + 2] [i_3 + 1] [i_3 - 1]))), ((((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) 2147483627)) ? (-1) : (2147483647))) : ((-(var_7))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_7 = 2; i_7 < 20; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    arr_30 [i_7] |= ((((/* implicit */_Bool) arr_27 [i_8] [i_7] [i_6] [i_6 + 1] [i_3 + 2])) ? (((arr_28 [i_3] [i_6] [i_7 - 1] [i_8]) ^ (var_11))) : (((int) var_3)));
                    /* LoopSeq 1 */
                    for (int i_9 = 3; i_9 < 19; i_9 += 3) 
                    {
                        var_25 = arr_26 [i_3 + 1] [i_3 + 1] [3] [i_3 + 2] [i_3] [i_3 + 1];
                        var_26 &= ((((/* implicit */_Bool) var_11)) ? (arr_21 [i_7] [i_3]) : (2147483634));
                        var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */_Bool) ((int) -12))) ? (-1) : (((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_7])) ? (2147483647) : (var_8)))))));
                        arr_34 [i_3] [i_6] [i_7] [i_3] [12] [i_9] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3 - 1] [i_6] [i_7]))));
                    }
                    /* LoopSeq 4 */
                    for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        arr_38 [i_3 - 1] [i_3] [15] [i_7] [i_8] [i_8] [i_10] = ((/* implicit */int) (((+(var_6))) <= (((/* implicit */int) (!(((/* implicit */_Bool) -33554432)))))));
                        arr_39 [i_7] &= ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_0 [i_3 - 1]) : (arr_0 [i_3]));
                        var_28 = ((int) 1073741824);
                        var_29 = (-(((/* implicit */int) ((var_18) <= (-2147483635)))));
                    }
                    for (int i_11 = 1; i_11 < 19; i_11 += 3) 
                    {
                        var_30 = ((/* implicit */int) max((var_30), (((arr_1 [i_8]) ^ (-4161537)))));
                        var_31 = ((/* implicit */int) min((var_31), ((+(((/* implicit */int) ((2147483647) >= (2147483647))))))));
                        arr_42 [i_6] [i_6] [10] [i_3] [10] = ((((/* implicit */_Bool) 0)) ? (4192256) : (-2147483638));
                        var_32 = ((int) arr_33 [i_11 - 1] [i_8] [i_7 + 1] [i_6] [i_3]);
                    }
                    for (int i_12 = 3; i_12 < 17; i_12 += 1) 
                    {
                        var_33 = var_0;
                        arr_47 [i_3] = ((((/* implicit */_Bool) ((var_18) % ((-2147483647 - 1))))) ? (arr_31 [i_6] [i_6] [i_6 - 1] [i_6 + 4] [i_6 + 4] [i_6] [i_6 + 4]) : ((-(var_1))));
                    }
                    for (int i_13 = 2; i_13 < 18; i_13 += 1) 
                    {
                        arr_51 [i_3] [i_6] = ((((/* implicit */_Bool) 1073737728)) ? (((((/* implicit */_Bool) 1)) ? (arr_18 [i_6] [i_8] [i_13]) : (2147483647))) : (((((/* implicit */_Bool) 384)) ? (-1) : (var_4))));
                        arr_52 [20] [i_6] [i_7] [18] [i_6] &= ((/* implicit */int) ((arr_12 [6]) <= (arr_45 [i_7] [i_13 + 1] [i_3 + 2] [i_13] [i_7 + 1] [i_7])));
                        var_34 = ((/* implicit */int) max((var_34), (((((/* implicit */_Bool) arr_40 [i_13] [i_13 - 1] [i_13 + 2] [i_13] [i_13 + 1])) ? (arr_40 [i_13] [i_13] [i_13 + 3] [i_13] [i_13]) : (-1)))));
                        arr_53 [i_3] [i_3] [14] [i_7] [i_8] [i_13] [i_13 - 1] = ((((/* implicit */_Bool) arr_31 [i_3] [i_3 + 2] [i_3 + 1] [i_3] [i_3] [i_3] [i_3])) ? (arr_49 [i_3 + 2] [i_3 - 1] [i_6 + 4]) : (arr_50 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13 + 1]));
                        var_35 = (~((~(-16))));
                    }
                    var_36 = ((int) ((((/* implicit */_Bool) 0)) ? (67108856) : (arr_28 [i_3] [i_7] [20] [i_8])));
                }
                arr_54 [i_7] [i_3] [i_3] [i_3 + 1] = arr_40 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 + 2];
                /* LoopSeq 2 */
                for (int i_14 = 4; i_14 < 20; i_14 += 4) 
                {
                    arr_57 [i_3] [i_6] [i_3] [i_7 + 1] [i_7 + 1] [i_14] = 8;
                    /* LoopSeq 1 */
                    for (int i_15 = 1; i_15 < 17; i_15 += 4) 
                    {
                        arr_61 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) 12)) ? (2147483639) : (var_18));
                        var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_43 [8] [i_6] [i_7 - 1] [i_7] [i_7]) : (var_7)))) ? ((-(var_7))) : ((+(-1))));
                        var_38 = (+(((0) ^ (var_4))));
                    }
                    var_39 -= (+((+(4))));
                    var_40 = -2147483639;
                }
                for (int i_16 = 1; i_16 < 19; i_16 += 3) 
                {
                    arr_66 [i_3] [i_3] [i_3] [i_7] [i_16] = ((/* implicit */int) ((arr_23 [i_6] [i_6 + 3] [i_3 + 2]) <= (2147483647)));
                    var_41 = -10;
                    var_42 = ((int) ((((/* implicit */_Bool) 2147483647)) ? (arr_32 [11] [i_6] [i_3]) : (4194303)));
                    var_43 = ((/* implicit */int) min((var_43), (((int) 0))));
                }
                var_44 = ((((/* implicit */_Bool) var_2)) ? (-33554432) : (4193792));
            }
            var_45 = (-(arr_32 [i_6] [i_6] [i_3]));
            arr_67 [i_6] [i_6] [i_3] = var_18;
        }
        arr_68 [i_3] = ((((/* implicit */_Bool) ((int) (-(var_4))))) ? (-2147483641) : (max((arr_15 [i_3] [i_3 + 2] [i_3]), (max((var_4), (arr_32 [i_3 - 1] [i_3] [i_3 + 1]))))));
        arr_69 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (min((arr_23 [i_3] [i_3 + 2] [i_3]), (arr_27 [19] [i_3] [i_3 - 1] [8] [i_3]))) : (19)))) ? (((((/* implicit */_Bool) (+(-1)))) ? (0) : (min((3670016), (arr_56 [i_3 - 1]))))) : (((int) (-(arr_36 [i_3] [i_3] [i_3] [i_3] [i_3])))));
    }
    for (int i_17 = 0; i_17 < 19; i_17 += 2) 
    {
        arr_73 [i_17] = (~((~(arr_25 [i_17] [i_17] [i_17]))));
        arr_74 [i_17] = min(((-(0))), (min((var_15), (((((/* implicit */_Bool) var_2)) ? (12) : (0))))));
        arr_75 [13] [i_17] = (~(((arr_15 [i_17] [i_17] [i_17]) - (arr_15 [i_17] [i_17] [i_17]))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_18 = 0; i_18 < 19; i_18 += 4) 
    {
        arr_79 [17] [i_18] = (~(((/* implicit */int) (!(((/* implicit */_Bool) 0))))));
        arr_80 [i_18] = arr_46 [i_18] [i_18] [i_18] [i_18] [i_18];
    }
    for (int i_19 = 0; i_19 < 21; i_19 += 2) 
    {
        arr_84 [i_19] [i_19] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((int) 0)))))));
        var_46 = (+((~((~(var_14))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_20 = 1; i_20 < 20; i_20 += 2) 
        {
            var_47 = ((((/* implicit */_Bool) arr_81 [i_20 - 1] [i_20 + 1])) ? (var_14) : (2147483647));
            var_48 = arr_45 [i_19] [i_19] [i_19] [i_19] [i_20 + 1] [i_20 + 1];
            var_49 = 2147483640;
        }
    }
    for (int i_21 = 0; i_21 < 11; i_21 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_22 = 0; i_22 < 11; i_22 += 3) 
        {
            var_50 = -2147483625;
            /* LoopSeq 3 */
            for (int i_23 = 0; i_23 < 11; i_23 += 1) 
            {
                var_51 += ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) <= ((~(arr_45 [i_21] [8] [12] [i_22] [i_23] [i_23])))));
                arr_93 [i_21] [i_21] [10] |= ((/* implicit */int) (!((((~(arr_50 [i_23] [i_23] [i_21] [i_21] [i_21] [i_21] [i_21]))) <= (var_8)))));
                var_52 -= ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_21] [i_21] [i_21] [i_22] [i_23])) ? (arr_3 [i_21]) : (arr_70 [i_21] [i_22]))))))) % (((((int) arr_87 [i_22])) >> ((((~(arr_35 [i_21] [19] [i_21] [i_23] [i_23]))) - (550345648))))));
            }
            for (int i_24 = 0; i_24 < 11; i_24 += 4) 
            {
                var_53 = ((((/* implicit */_Bool) arr_13 [i_21])) ? (min((var_17), (arr_70 [i_22] [i_24]))) : (((((/* implicit */_Bool) (-(13)))) ? (((((/* implicit */_Bool) var_17)) ? (var_14) : (-1))) : (arr_55 [i_21] [i_22] [i_24] [i_22] [i_24]))));
                var_54 = max((((((int) var_6)) % (var_15))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (0) : (-3))))))));
            }
            /* vectorizable */
            for (int i_25 = 0; i_25 < 11; i_25 += 3) 
            {
                arr_99 [i_21] [i_21] [i_25] |= 7;
                /* LoopSeq 1 */
                for (int i_26 = 4; i_26 < 9; i_26 += 4) 
                {
                    var_55 = ((/* implicit */int) max((var_55), (arr_6 [14] [i_22] [i_22])));
                    var_56 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_21] [i_22] [i_26]))));
                    arr_103 [i_21] [4] [4] [i_21] = ((((((/* implicit */_Bool) -1)) ? (arr_91 [i_21] [i_21] [i_21]) : ((-2147483647 - 1)))) | (arr_26 [i_26 + 2] [9] [i_26 - 1] [i_25] [i_21] [i_21]));
                }
            }
            arr_104 [i_21] = ((int) ((((/* implicit */_Bool) (~(var_18)))) ? (max((2147483646), (var_15))) : (((((/* implicit */_Bool) var_3)) ? (127) : (arr_29 [i_21] [i_22] [i_21])))));
        }
        arr_105 [i_21] = min((-2147483641), ((+(((/* implicit */int) ((2147483632) <= (arr_29 [i_21] [i_21] [i_21])))))));
        var_57 = ((/* implicit */int) min((var_57), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_18 [i_21] [i_21] [i_21]) : (var_2)))) ? (((((/* implicit */_Bool) arr_71 [i_21] [i_21])) ? (arr_37 [i_21] [0] [0] [i_21]) : (var_8))) : (var_4))) | (min((max((arr_35 [i_21] [i_21] [i_21] [i_21] [i_21]), (arr_65 [i_21] [i_21] [i_21] [i_21]))), ((~(arr_1 [6])))))))));
    }
    for (int i_27 = 1; i_27 < 15; i_27 += 2) 
    {
        arr_110 [i_27] = (-(max(((~(-1))), (((((/* implicit */_Bool) 0)) ? (-1) : (31))))));
        var_58 *= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 67108863)) ? ((-2147483647 - 1)) : (var_5)))) ? (0) : (min((arr_15 [i_27 + 3] [i_27 + 1] [i_27 + 3]), (arr_40 [i_27] [i_27] [i_27] [i_27 - 1] [i_27]))))) | (((/* implicit */int) (!(((/* implicit */_Bool) 33521664))))));
        var_59 = (+(((((/* implicit */_Bool) ((int) var_12))) ? (((-1) & (arr_71 [8] [i_27]))) : (max((arr_82 [i_27 + 3] [i_27]), (arr_29 [i_27 + 2] [i_27] [18]))))));
        /* LoopSeq 1 */
        for (int i_28 = 1; i_28 < 16; i_28 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_29 = 0; i_29 < 18; i_29 += 3) 
            {
                var_60 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (0) : (2147483647)))) ? ((~(var_11))) : (((arr_71 [i_29] [i_28 - 1]) | (arr_76 [i_27]))))), (arr_77 [i_28]));
                var_61 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (var_16) : (var_17))) & (max((var_13), ((-2147483647 - 1))))))) ? ((((~(-2147483630))) ^ (((var_12) ^ (0))))) : (((((/* implicit */_Bool) (~(var_4)))) ? (arr_23 [16] [i_27] [i_27]) : (((((/* implicit */_Bool) arr_43 [i_27] [i_27] [i_27 + 3] [15] [i_27])) ? (-2) : (0))))));
                var_62 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((2147483647), (536739840)))) ? (-12) : (((((/* implicit */_Bool) var_3)) ? (arr_44 [i_29] [i_29] [i_28] [i_28 + 2] [i_28] [2] [i_27 + 1]) : (arr_27 [i_27] [i_27] [i_27 + 2] [i_27 + 1] [i_27 - 1]))))))));
            }
            for (int i_30 = 0; i_30 < 18; i_30 += 4) 
            {
                arr_118 [6] [i_28] [i_27] = (-2147483647 - 1);
                arr_119 [i_27 + 3] [i_27] [i_30] [17] = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) var_1))))))));
            }
            /* vectorizable */
            for (int i_31 = 0; i_31 < 18; i_31 += 4) 
            {
                var_63 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_31])) ? ((-2147483647 - 1)) : (0)))) ? (var_18) : (((/* implicit */int) ((16777214) <= (var_16)))));
                var_64 = var_9;
            }
            var_65 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_71 [i_28] [i_27]) : (var_3))))))) & (((((/* implicit */_Bool) min((arr_0 [i_28]), (var_1)))) ? ((-(var_10))) : ((-(arr_0 [i_27]))))));
            arr_122 [i_27] [i_27] [i_27] = min((max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) 0)) ? (2147483647) : (2147483638))))), ((+(((arr_85 [i_28 - 1]) ^ (arr_78 [i_28 - 1]))))));
            /* LoopSeq 1 */
            for (int i_32 = 0; i_32 < 18; i_32 += 3) 
            {
                var_66 = (((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (((/* implicit */int) ((-1) <= ((-2147483647 - 1))))) : (min(((+(arr_12 [i_32]))), (arr_48 [i_27] [2] [i_32] [2] [i_27] [i_32]))));
                arr_125 [i_27 - 1] [i_28 + 1] [i_27] = -1;
            }
        }
    }
    var_67 = ((int) ((((/* implicit */_Bool) var_1)) ? (((var_15) | (var_11))) : (max((var_13), (var_9)))));
}
