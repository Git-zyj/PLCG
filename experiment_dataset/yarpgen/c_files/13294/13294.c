/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (min((max(1173, (arr_2 [i_1] [i_1]))), (min((arr_1 [i_0]), ((-(arr_3 [i_0])))))));
                arr_5 [0] [1] = ((((min((arr_0 [5]), (arr_2 [i_0] [i_1])))) ? 7685189052030190101 : 1));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_21 = (arr_2 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_1] = ((-(arr_7 [i_0] [i_0])));
                                arr_14 [i_0] [i_1] [i_0] [3] [i_3] = (1 > (arr_4 [i_3 + 1] [i_3 + 1]));
                            }
                        }
                    }
                    var_22 *= ((3890822036 ? (arr_7 [i_0] [i_0]) : (arr_6 [i_0] [i_1] [i_0])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 7;i_7 += 1)
                        {
                            {
                                var_23 -= (~1);
                                arr_22 [i_7] [i_7] [i_7] [i_7] [i_7] = 3890822036;
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        arr_26 [3] [i_1] [1] [i_1] = (arr_0 [i_0]);
                        var_24 = var_3;
                        arr_27 [i_0] [i_1] = 2469473896055222879;
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_25 *= 23;
                        arr_31 [i_0] [i_0] [i_5] [i_9] = var_9;
                        arr_32 [i_5] [i_9] = (~var_14);
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        var_26 |= (15450498720201230530 >> 0);
                        var_27 = ((~(arr_24 [i_0] [i_0] [i_5] [i_5])));

                        for (int i_11 = 1; i_11 < 7;i_11 += 1)
                        {
                            arr_39 [i_10] [9] [i_10] [i_11] = (arr_3 [i_10]);
                            var_28 = (~47211);
                            var_29 = (((arr_34 [i_11 - 1]) ? -5857140993803929079 : (arr_7 [i_11 + 1] [i_11 - 1])));
                            var_30 = (1 || (arr_28 [i_0] [i_11 - 1] [i_0] [i_10]));
                            arr_40 [i_10] = (~var_13);
                        }
                    }
                    arr_41 [2] [i_5] = (arr_16 [i_0] [i_0] [i_0] [i_0]);

                    for (int i_12 = 4; i_12 < 8;i_12 += 1)
                    {
                        var_31 = (arr_34 [i_5]);
                        var_32 = 1;
                        arr_46 [i_0] [i_1] [i_12 - 1] = (((arr_35 [i_0] [i_12 + 1] [i_12 + 1] [4] [i_12] [0]) ? (arr_8 [i_0] [6] [6] [i_12 - 2]) : (((arr_23 [i_0] [i_0] [7] [i_12 - 3]) ^ (arr_29 [i_12 - 2] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        arr_49 [i_0] [i_0] [i_0] [i_5] [i_13] = (arr_43 [i_0] [i_5] [i_0] [i_1] [i_0]);
                        var_33 = (arr_33 [i_0] [i_0] [i_13] [i_13] [i_13]);
                        var_34 = 3890822054;
                        var_35 += ((var_10 ? (arr_1 [i_1]) : (15977270177654328738 > 47211)));
                        arr_50 [i_13] [i_13] [i_5] [i_13] [i_13] = var_14;
                    }
                    arr_51 [i_1] &= (~var_15);
                }
                for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                {
                    arr_54 [i_0] [i_0] [i_0] = arr_35 [i_0] [i_1] [i_1] [i_1] [i_14] [i_0];
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            {
                                var_36 = (min(517365693633319113, 0));
                                arr_59 [i_14] &= var_10;
                                arr_60 [i_0] [4] [i_0] [i_0] [7] [i_16] = ((~(min((arr_52 [9] [i_1] [i_1]), (((55 ? var_1 : var_4)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 19;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            {

                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    var_37 = (max(((~(arr_63 [i_17] [i_17]))), var_14));
                    var_38 = (min(var_38, ((((arr_63 [i_17] [i_17]) < 0)))));
                    var_39 = (((max((((~(arr_66 [i_17] [i_17])))), (arr_67 [i_17] [i_18])))) ? (((((min(1397250817, (arr_67 [i_18] [i_18]))) > (arr_66 [i_18] [i_17]))))) : (3669693206272572905 / 3882835312124562766));
                }
                for (int i_20 = 0; i_20 < 19;i_20 += 1) /* same iter space */
                {

                    for (int i_21 = 3; i_21 < 16;i_21 += 1) /* same iter space */
                    {
                        arr_75 [i_17] [i_17] [i_17] [6] [i_17] [i_17] = (min(((-(32765 / 15977270177654328750))), (arr_72 [i_17] [i_18] [i_18])));
                        arr_76 [i_17] [i_18] [i_17] [i_20] [i_20] = (arr_74 [i_17] [i_18] [i_21 - 2] [i_21] [0] [i_18]);
                    }
                    /* vectorizable */
                    for (int i_22 = 3; i_22 < 16;i_22 += 1) /* same iter space */
                    {
                        var_40 |= ((~(arr_63 [i_17] [i_22 - 1])));
                        arr_79 [i_17] [i_18] [i_18] [i_22 + 3] = (arr_65 [i_17] [i_22] [i_20]);
                        arr_80 [i_17] [7] [i_20] = ((40412 >> (3882835312124562778 - 3882835312124562764)));
                    }
                    arr_81 [i_18] [i_18] [i_18] = var_19;
                    arr_82 [i_20] [i_20] = (arr_67 [i_18] [i_18]);
                    arr_83 [i_18] [i_18] [i_17] = 2469473896055222868;
                }
                /* vectorizable */
                for (int i_23 = 0; i_23 < 19;i_23 += 1) /* same iter space */
                {
                    arr_86 [i_23] [11] [i_17] |= ((~(arr_73 [i_23] [3])));

                    for (int i_24 = 1; i_24 < 17;i_24 += 1)
                    {
                        var_41 ^= var_10;
                        var_42 = ((~(arr_78 [i_17] [i_18] [i_17] [i_24 + 2])));
                        var_43 = (((((-2 ? 3890822058 : 0))) ? (arr_67 [i_17] [i_17]) : 14562629365920272731));
                    }
                    for (int i_25 = 0; i_25 < 19;i_25 += 1) /* same iter space */
                    {
                        var_44 = (((arr_91 [10] [17] [i_23] [17] [17]) ? ((14562629365920272731 ? 7618151717389751225 : 254)) : 1));
                        arr_93 [i_17] [i_18] [i_18] [0] [6] = ((0 ? 1553740899 : 15977270177654328736));
                    }
                    for (int i_26 = 0; i_26 < 19;i_26 += 1) /* same iter space */
                    {
                        var_45 = (arr_71 [i_23] [i_26]);
                        var_46 = (16298 - 55026);
                    }
                }
                var_47 = (min(var_47, var_16));
                arr_96 [i_18] = ((((~(arr_73 [i_17] [i_17])))));
            }
        }
    }

    for (int i_27 = 1; i_27 < 8;i_27 += 1) /* same iter space */
    {
        arr_99 [i_27] = (arr_97 [i_27] [i_27]);
        arr_100 [i_27] [i_27] = (((arr_92 [i_27 + 1] [i_27 + 4] [i_27] [i_27 + 1]) ^ ((((arr_92 [i_27 - 1] [i_27 - 1] [i_27 + 1] [i_27 - 1]) & (arr_92 [i_27 - 1] [i_27 + 3] [i_27 + 1] [i_27 + 4]))))));
        var_48 = 3499675987756254486;
        arr_101 [10] [10] &= (arr_84 [i_27] [17] [17]);
    }
    for (int i_28 = 1; i_28 < 8;i_28 += 1) /* same iter space */
    {
        var_49 += max(4239410792831896438, (34553 % var_14));
        var_50 = (1 && 15420647716635031163);
    }
    var_51 |= var_10;
    var_52 = var_11;
    #pragma endscop
}
