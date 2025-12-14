/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((((max(57444, (arr_2 [i_0])))) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : var_4));
        var_16 += 1;
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_17 = ((108 ? 32767 : 11));
        arr_6 [i_1] = ((((max(var_6, ((2625418747 ? var_6 : (arr_4 [i_1 - 2])))))) ? (arr_3 [i_1] [i_1 + 1]) : (~var_0)));
    }
    for (int i_2 = 4; i_2 < 11;i_2 += 1)
    {
        var_18 = (min(var_18, (min((40688 / 1), (((arr_7 [i_2 - 4]) + (arr_5 [i_2 - 1])))))));
        var_19 = (min(var_19, (arr_3 [i_2 - 4] [i_2])));
        var_20 = (min(7, ((63 ? 1 : 71))));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_15 [1] [i_4] = (arr_4 [i_2 - 2]);
                        var_21 = (((arr_12 [11] [i_2] [i_2 + 1]) + var_5));
                        arr_16 [i_2 - 2] [i_3] [i_3 - 2] [i_4] [i_5] [i_5] = ((0 ? -108 : 1));
                        arr_17 [i_5] [i_3 - 1] = ((~(((arr_2 [i_2 - 4]) + (!var_11)))));
                        var_22 -= var_10;
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = (max((!1), var_6));
        var_23 -= 3;
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            {
                arr_27 [i_7] [i_7] [13] = ((max(((1 ? 19588 : 1), 14037))));

                for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                {
                    var_24 += (((26865 == -93) ? (arr_22 [17] [1]) : (min((arr_24 [i_8]), (((arr_25 [i_7]) * var_3))))));

                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_25 = (max((arr_30 [i_7] [i_10] [i_9] [i_10]), 121));
                        var_26 = 119;

                        for (int i_11 = 4; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            var_27 = 126;
                            var_28 = ((116 ? ((max(0, 1))) : 1));
                            var_29 = ((((((arr_34 [i_11 - 1] [i_11 - 3] [i_11 - 4] [i_11] [i_11] [i_11]) + -107))) ? ((max(var_3, var_4))) : ((var_10 ? (arr_34 [i_11 - 1] [i_11 - 3] [i_11 - 4] [i_11] [i_11 - 4] [i_11]) : 56138))));
                            var_30 -= 255;
                        }
                        for (int i_12 = 4; i_12 < 22;i_12 += 1) /* same iter space */
                        {
                            var_31 = ((~(arr_30 [i_12] [i_10] [i_9] [i_8])));
                            arr_39 [1] [13] [i_7] = ((1 ? 30636 : 1));
                            var_32 = (max(4142196277, 0));
                        }
                        var_33 -= ((((max((arr_29 [i_7] [12] [i_9]), (arr_29 [i_10] [i_9] [i_8])))) - var_12));
                    }
                    for (int i_13 = 1; i_13 < 23;i_13 += 1)
                    {
                        var_34 = var_11;
                        var_35 = (max(var_35, ((min((min(1, 871960565)), (((~var_0) ? 3428326836 : ((((arr_32 [i_9] [i_9]) & -122))))))))));
                        var_36 = var_14;
                        var_37 = ((((max(1565667393, (arr_25 [i_13 - 1])))) ? (arr_25 [i_13 + 2]) : 25681));
                        var_38 = (max(var_38, (((var_12 & (min(2147483648, 1)))))));
                    }
                    arr_42 [i_7] [i_9] = ((+(max((((arr_34 [i_7] [i_7] [1] [i_7] [22] [i_7]) / (arr_24 [6]))), (var_10 + -32761)))));
                }
                for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 24;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            {
                                var_39 = (((((~(arr_29 [i_14] [i_15 + 1] [i_16])))) ? var_2 : (var_5 / 112)));
                                var_40 = ((24847 ? 47008 : 1));
                            }
                        }
                    }
                    var_41 = ((((min(10313, 1))) ? (((arr_48 [i_14] [14] [i_7] [i_7] [i_7] [i_7] [i_7]) * var_3)) : ((-((var_13 ? (arr_34 [i_14] [i_14] [i_8] [13] [i_7] [18]) : (arr_28 [i_14] [i_7] [i_7])))))));
                    var_42 = ((!((max((arr_37 [i_8] [i_8] [i_8] [i_8] [i_7]), (arr_25 [i_7]))))));
                    arr_50 [i_7] [i_8] [i_7] [i_14] = (((((-(max(9421, 1048575))))) ? (min(1, (arr_31 [18] [i_7] [i_7] [i_7]))) : (428235184 != 1)));
                }
                var_43 = (((!2557548245) != ((((((arr_38 [i_8] [i_7] [i_7] [1] [i_7] [i_7]) ? var_1 : var_2))) ? (arr_47 [10] [i_7] [i_8] [i_8] [i_8]) : (max((arr_47 [i_7] [i_8] [i_7] [i_8] [i_7]), var_11))))));

                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    var_44 = ((!((((min(var_3, (arr_25 [i_17]))) ? (var_10 & var_7) : ((max(var_4, (arr_51 [i_7] [i_8] [i_7])))))))));

                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        var_45 |= ((var_3 ? ((~(arr_54 [i_18] [i_17] [i_7]))) : (((max(var_2, -26))))));
                        var_46 = ((82 ? 82 : (max(268435455, 249))));
                        var_47 = ((12647 ? (!153) : 173));
                    }
                    var_48 = min((((((5636 ? 36975 : 0)) & 1))), ((82 | (arr_54 [i_17] [i_8] [i_7]))));
                }
                var_49 = (((min(var_3, ((-(arr_57 [i_7] [i_8] [i_8]))))) % ((min(0, -73)))));
            }
        }
    }
    var_50 = var_3;
    var_51 = -54;
    var_52 = ((var_6 ? ((max(var_1, ((min(var_5, 17)))))) : ((((((max(var_9, var_3)))) == ((var_9 ? var_6 : 18276)))))));
    #pragma endscop
}
