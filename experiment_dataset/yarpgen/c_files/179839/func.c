/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179839
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((var_5) == (var_0))))));
        var_15 |= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_10))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (+(((/* implicit */int) ((var_5) != (var_8)))))))));
                arr_9 [2U] [i_1] [i_0] = var_2;
                var_17 = (-(var_7));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    var_18 = (~(var_11));
                    var_19 = (-(var_8));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 2; i_4 < 10; i_4 += 3) 
                    {
                        arr_17 [i_0 + 2] [8U] = (+(var_8));
                        var_20 = (+(var_4));
                    }
                }
                for (unsigned int i_5 = 3; i_5 < 10; i_5 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    var_22 = var_5;
                }
            }
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_23 = (~(var_10));
                arr_23 [i_0] [i_0] [10U] = ((var_13) & ((~(var_13))));
                var_24 += (+(var_4));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_13))));
                var_26 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
            }
            arr_24 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1)))))) == ((~(var_10)))));
        }
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                var_27 += (~((~(var_7))));
                var_28 = (~(var_1));
            }
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                var_29 *= var_9;
                /* LoopNest 2 */
                for (unsigned int i_10 = 2; i_10 < 10; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        {
                            arr_37 [2U] = (-(195113426U));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((var_1) >> (((var_0) - (2532565427U)))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_12 = 3; i_12 < 12; i_12 += 3) 
            {
                arr_41 [i_0 - 1] [i_7] [i_7] [i_12] = (-(4099853869U));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    var_31 -= ((/* implicit */unsigned int) ((var_1) < (var_5)));
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned int) min((var_32), (var_5)));
                        var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        var_34 = (+(var_7));
                        var_35 = (-(var_13));
                        arr_49 [i_0] [i_7] [2U] [i_13] [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                    }
                }
            }
            /* LoopNest 3 */
            for (unsigned int i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                for (unsigned int i_17 = 4; i_17 < 10; i_17 += 2) 
                {
                    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 2) 
                    {
                        {
                            arr_57 [10U] [i_0] [i_7] [i_7] [10U] [i_17] [i_18] = var_7;
                            var_36 = (((+(var_8))) - ((-(var_2))));
                            var_37 = ((/* implicit */unsigned int) min((var_37), ((+(var_10)))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned int i_19 = 2; i_19 < 17; i_19 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_21 = 1; i_21 < 16; i_21 += 4) 
            {
                var_38 = (+(var_3));
                var_39 = var_1;
                var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                var_41 = ((/* implicit */unsigned int) max((var_41), (((var_0) - (var_0)))));
                /* LoopSeq 2 */
                for (unsigned int i_22 = 0; i_22 < 18; i_22 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_23 = 1; i_23 < 17; i_23 += 3) 
                    {
                        arr_69 [i_19] [i_20] [i_23] [i_22] [i_23 + 1] = (~(var_12));
                        arr_70 [6U] [i_23] [i_21] [i_22] [16U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_9))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_24 = 1; i_24 < 15; i_24 += 4) 
                    {
                        arr_73 [i_19] [i_20] [i_21] [i_22] [i_24] = (+(var_9));
                        arr_74 [i_24] = (+(var_13));
                    }
                    var_42 = ((/* implicit */unsigned int) min((var_42), ((+(var_10)))));
                }
                for (unsigned int i_25 = 0; i_25 < 18; i_25 += 4) 
                {
                    arr_77 [i_19] [i_20] [i_21] [i_21] [i_25] = ((/* implicit */unsigned int) ((var_4) != (var_7)));
                    arr_78 [i_19] [i_20] [16U] [i_21 + 1] [9U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
                }
            }
            var_43 = ((/* implicit */unsigned int) min((var_43), (var_2)));
        }
        /* LoopSeq 1 */
        for (unsigned int i_26 = 1; i_26 < 15; i_26 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_27 = 0; i_27 < 18; i_27 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_28 = 2; i_28 < 15; i_28 += 3) /* same iter space */
                {
                    arr_85 [1U] [i_19] [i_26] [i_27] [i_28] [i_28 + 3] = (+(var_13));
                    /* LoopSeq 3 */
                    for (unsigned int i_29 = 0; i_29 < 18; i_29 += 2) 
                    {
                        arr_89 [i_26] [i_26 + 3] [i_26] [i_26] [13U] = ((var_3) ^ (var_3));
                        var_44 = (~(var_9));
                        var_45 = (-((+(var_12))));
                    }
                    for (unsigned int i_30 = 0; i_30 < 18; i_30 += 4) /* same iter space */
                    {
                        var_46 = var_5;
                        var_47 = ((/* implicit */unsigned int) max((var_47), ((~(var_6)))));
                        var_48 = var_3;
                    }
                    for (unsigned int i_31 = 0; i_31 < 18; i_31 += 4) /* same iter space */
                    {
                        var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5))));
                        arr_95 [i_19 - 1] [i_19] [i_19 - 2] [i_19] [i_19] [i_19] = var_4;
                        var_50 = (~(((var_1) - (var_8))));
                    }
                }
                for (unsigned int i_32 = 2; i_32 < 15; i_32 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_33 = 0; i_33 < 18; i_33 += 4) 
                    {
                        var_51 |= (-(var_6));
                        arr_101 [i_19] [i_19] [i_26 + 2] [i_27] [i_32] [i_32] = var_5;
                    }
                    for (unsigned int i_34 = 0; i_34 < 18; i_34 += 4) 
                    {
                        var_52 = var_6;
                        var_53 = ((/* implicit */unsigned int) max((var_53), (var_6)));
                    }
                    for (unsigned int i_35 = 2; i_35 < 17; i_35 += 3) 
                    {
                        arr_108 [13U] [i_32] [17U] [i_32] [i_19] = var_3;
                        var_54 = ((/* implicit */unsigned int) min((var_54), ((+(var_11)))));
                        var_55 = ((((var_7) * (var_4))) >> (((var_13) - (1568474568U))));
                        var_56 = ((/* implicit */unsigned int) max((var_56), (((var_6) - (var_7)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_36 = 4; i_36 < 15; i_36 += 2) 
                    {
                        var_57 = ((/* implicit */unsigned int) min((var_57), (((var_8) >> (((((var_7) * (var_10))) - (4261771368U)))))));
                        var_58 |= var_8;
                    }
                }
                var_59 = ((/* implicit */unsigned int) max((var_59), (((var_8) | (var_3)))));
            }
            var_60 = ((/* implicit */unsigned int) min((var_60), ((-(var_7)))));
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_37 = 0; i_37 < 22; i_37 += 2) 
    {
        for (unsigned int i_38 = 0; i_38 < 22; i_38 += 3) 
        {
            {
                arr_118 [i_38] [2U] [i_37] = (-(min((var_11), (var_8))));
                /* LoopSeq 2 */
                for (unsigned int i_39 = 0; i_39 < 22; i_39 += 3) 
                {
                    arr_122 [i_39] [i_38] [i_39] = ((/* implicit */unsigned int) (((+((-(var_6))))) >= ((-((-(var_12)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_40 = 0; i_40 < 22; i_40 += 3) 
                    {
                        for (unsigned int i_41 = 3; i_41 < 18; i_41 += 2) 
                        {
                            {
                                var_61 *= min(((+((-(var_5))))), (((/* implicit */unsigned int) (((+(var_2))) == ((+(var_3)))))));
                                arr_127 [i_37] [i_37] [i_39] [i_37] [5U] [i_37] = min((min((var_0), (var_10))), (min(((~(var_1))), (var_9))));
                                var_62 *= (((~(var_5))) - (min(((-(var_3))), ((~(var_10))))));
                            }
                        } 
                    } 
                    arr_128 [i_39] [i_39] = ((max((var_11), (var_2))) | (min((var_12), (var_0))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_42 = 0; i_42 < 22; i_42 += 3) 
                    {
                        var_63 = ((var_5) & ((~(var_13))));
                        var_64 |= (~((~(var_10))));
                    }
                    /* vectorizable */
                    for (unsigned int i_43 = 0; i_43 < 22; i_43 += 4) 
                    {
                        arr_134 [i_39] [i_43] [i_38] [i_38] [i_39] = ((var_10) + (var_13));
                        var_65 = ((/* implicit */unsigned int) max((var_65), ((-(var_12)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_44 = 1; i_44 < 19; i_44 += 3) 
                        {
                            var_66 = (~(var_10));
                            arr_138 [i_39] [i_39] [15U] [i_43] [i_43] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((var_7) < (var_3))))));
                            arr_139 [i_37] [i_38] [2U] [i_43] [1U] [i_39] [i_44] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0))));
                        }
                    }
                }
                for (unsigned int i_45 = 1; i_45 < 20; i_45 += 1) 
                {
                    arr_142 [i_37] [i_38] [i_45] = (~(max((var_6), (var_12))));
                    /* LoopSeq 2 */
                    for (unsigned int i_46 = 2; i_46 < 21; i_46 += 4) 
                    {
                        arr_147 [i_37] [i_37] [i_37] [i_37] = max((((/* implicit */unsigned int) ((var_8) != (min((4099853870U), (698053573U)))))), (var_7));
                        var_67 = (+(((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_3)))))))));
                        var_68 = var_5;
                        arr_148 [i_37] [21U] [i_38] [i_45] [i_46] [i_46 + 1] = min(((-(max((var_7), (var_8))))), ((~(max((var_8), (var_7))))));
                    }
                    for (unsigned int i_47 = 0; i_47 < 22; i_47 += 3) 
                    {
                        var_69 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 195113420U))))), (var_10))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_48 = 0; i_48 < 22; i_48 += 1) /* same iter space */
                        {
                            var_70 = (~(var_2));
                            var_71 = var_10;
                            arr_154 [i_37] [i_38] [i_45 + 1] [i_47] [i_48] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2)))) || ((!(((/* implicit */_Bool) 1453907549U))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_49 = 0; i_49 < 22; i_49 += 1) /* same iter space */
                        {
                            arr_157 [i_37] [2U] [i_37] [i_47] [i_37] = ((195113424U) ^ (3338152313U));
                            var_72 = (-((~(var_10))));
                            var_73 = var_1;
                            var_74 = ((/* implicit */unsigned int) max((var_74), ((~(var_0)))));
                            var_75 += ((var_3) / (var_6));
                        }
                    }
                }
            }
        } 
    } 
    var_76 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12))))), ((-(var_2))))))));
    var_77 ^= var_12;
}
