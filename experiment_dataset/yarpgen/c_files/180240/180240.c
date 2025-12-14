/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_14 ? (var_13 - var_1) : (min(var_0, var_16))))) ? (((min(var_3, -53)))) : var_17));
    var_20 = var_17;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1 + 2] = ((!(((-53 ? -44 : var_2)))));
                            arr_16 [i_0] [i_1] [2] [11] [2] [11] = (((arr_7 [i_1 - 2]) <= (arr_7 [i_1 - 2])));
                            arr_17 [21] [i_1] [i_2] [5] [i_1] |= (((arr_5 [i_1 - 1] [i_1 + 3] [22]) <= (arr_8 [i_0] [i_1 - 1] [i_0] [i_3])));
                        }
                    }
                }
            }
            arr_18 [i_1] = (var_3 ? (((var_6 ? var_11 : var_9))) : ((var_8 / (arr_4 [i_0] [i_0] [i_1]))));

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_21 -= (((((arr_2 [2] [2]) ? (arr_4 [i_0] [i_1 + 1] [13]) : (arr_4 [i_0] [i_0] [i_5]))) << (((-53 | 25) + 37))));
                arr_21 [11] [11] [i_5] [1] = var_10;
                arr_22 [i_0] = ((~(arr_11 [1] [7] [7] [i_1 - 2] [20] [0] [1])));
                arr_23 [i_0] [i_0] [i_5] [i_0] = (var_3 ? (arr_13 [i_1 + 2] [2] [8]) : 53);
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_22 = (min(var_22, 9604281844344134166));
                            var_23 = var_4;
                            var_24 = (max(var_24, var_18));
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    arr_34 [23] [19] [19] [19] = (arr_32 [4]);

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_37 [i_0] [15] [6] [i_0] [i_10] [7] = -2076728283;
                        var_25 = (((arr_5 [13] [2] [i_1 + 3]) ? (arr_5 [14] [14] [i_1 - 1]) : (arr_5 [17] [i_1] [i_1 + 3])));
                    }
                    var_26 = (((arr_25 [i_1 + 1] [22] [i_1 + 1] [3]) ? var_16 : (arr_25 [i_1 + 1] [i_6] [i_6] [21])));
                    arr_38 [19] [19] [i_6] [1] [11] [18] = (arr_24 [i_0] [i_1 - 1] [i_1 + 2]);
                }
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
            {
                var_27 = ((var_9 ? (arr_24 [i_0] [i_1 + 3] [i_1 + 1]) : var_12));
                arr_42 [i_0] [i_0] [15] = (!(arr_31 [6] [i_1 - 2] [i_11] [i_0] [i_1 + 3]));
                var_28 = var_17;
                var_29 = (min(var_29, (~-7895242681346050863)));
            }
            for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
            {
                arr_46 [14] [i_1 - 1] [14] [14] = (var_16 ? (arr_28 [i_0] [13] [13]) : var_18);

                for (int i_13 = 4; i_13 < 20;i_13 += 1)
                {
                    arr_50 [20] [1] [22] [i_13 + 2] = var_6;
                    arr_51 [3] [9] [3] [i_12] [3] [7] = 13;

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        arr_55 [i_14] [4] = (arr_36 [i_0] [i_0] [1] [12] [12]);
                        arr_56 [i_14] [i_13] [13] [i_14] [i_14] = var_18;
                    }
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        arr_60 [i_0] [13] = (((arr_59 [i_0] [i_1 + 1] [i_12] [9] [6]) ? (arr_59 [i_0] [i_1 + 2] [i_0] [i_13 + 3] [i_0]) : var_17));
                        arr_61 [20] [20] [20] [i_13 + 2] [20] = -var_10;
                        var_30 = (arr_9 [i_1] [i_1]);
                    }
                }
            }
            var_31 = ((((var_17 ? 7895242681346050868 : var_17)) / (arr_6 [i_0] [i_0] [11])));
            var_32 = var_3;
        }
        var_33 = (max(var_33, (((((((min(0, 147))) ? (arr_52 [i_0]) : 1))) ? (((((var_3 ? var_9 : (arr_54 [i_0])))) ? var_6 : 1711006221)) : ((min((arr_41 [9]), 1)))))));

        /* vectorizable */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            arr_64 [5] [5] = (((((var_18 ? (arr_40 [i_0] [i_0] [i_0] [i_16]) : var_2))) || var_0));
            var_34 -= (arr_19 [i_16] [1] [2] [2]);
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
    {
        var_35 = (arr_48 [13] [1] [16] [16] [16]);
        arr_69 [i_17] = -var_16;
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
    {
        arr_73 [9] = (~var_18);
        var_36 = (max(var_36, ((((arr_57 [21] [0] [i_18] [10]) | (!var_0))))));
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 24;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 24;i_20 += 1)
            {
                {
                    arr_80 [i_18] [i_18] [22] [12] = ((var_18 ? (arr_77 [15] [i_19] [15] [i_18]) : (arr_14 [5])));
                    var_37 = ((var_16 ? (var_4 + 1) : (arr_78 [i_18] [i_19] [i_19] [i_19])));
                    arr_81 [14] [4] [i_19] [4] |= var_2;
                }
            }
        }
        arr_82 [i_18] [i_18] = (arr_19 [i_18] [10] [i_18] [i_18]);
    }
    for (int i_21 = 0; i_21 < 24;i_21 += 1)
    {
        arr_85 [23] [i_21] = (((((min(var_16, (arr_79 [i_21] [13] [i_21] [i_21]))))) < (min(-7237, (arr_44 [i_21] [13] [i_21])))));
        var_38 -= ((((((arr_48 [10] [11] [7] [i_21] [10]) ^ ((min(var_3, var_5)))))) ? (((((arr_78 [i_21] [1] [i_21] [8]) > var_1)))) : (arr_31 [18] [16] [i_21] [i_21] [8])));
    }
    var_39 = var_17;
    #pragma endscop
}
