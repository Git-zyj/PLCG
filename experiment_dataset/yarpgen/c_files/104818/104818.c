/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = (((((var_5 ? 20 : var_10))) ? 2147483632 : var_6));
    var_14 = max(var_4, (var_9 / var_8));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (min((var_6 - var_6), ((-((var_6 ? (arr_1 [i_0] [i_0]) : var_4))))));
        var_15 = (((min(((max(var_6, var_9))), (arr_2 [i_0] [i_0])))) ? ((((!((min(var_9, 41567))))))) : (max(((min(var_5, var_4))), 248)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (((arr_7 [20] [20] [i_2 + 1]) ? var_2 : var_10));
                    arr_9 [i_0] [1] [i_2] = (min(((var_6 ? (arr_7 [15] [15] [i_2 + 1]) : -1420673290)), ((min(var_4, var_11)))));
                }
            }
        }
        arr_10 [i_0] [i_0] = (((19356 >= var_3) ? (((!(~-1308947677)))) : ((((arr_7 [i_0] [i_0] [i_0]) > (min(23, (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        arr_15 [i_3] = arr_5 [i_3];

        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_17 = (min(var_17, ((((arr_11 [i_3 - 3]) < var_6)))));
            var_18 = (((0 << (4384703623871460034 - 4384703623871460011))));
        }
        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_19 = (~var_5);
                        arr_28 [i_3] [0] [i_3] [i_5] [i_3] [i_3 + 4] = (((arr_2 [i_5 + 1] [i_5 - 1]) ? (arr_2 [i_5 + 1] [i_5 - 1]) : var_7));
                        var_20 = (-(arr_7 [i_3 + 3] [i_5 + 1] [i_5 - 1]));
                    }
                }
            }
            var_21 = (+((1988738969 ? (arr_14 [i_3] [i_5]) : var_6)));
            var_22 = ((1988738977 ? (((!(arr_5 [i_3])))) : (!-32746)));
            arr_29 [i_5] [i_5] = 1634815062;
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_23 = (var_6 / ((67 ? 1676 : 6651)));
            arr_32 [i_3] [2] [i_3] = (-1 ? (arr_18 [i_3 - 2]) : (arr_23 [i_3] [i_8] [i_3 - 3] [i_8]));
            arr_33 [i_3] [i_3 - 1] [i_3] = (arr_25 [i_8] [i_3 + 2] [i_8] [i_3] [i_3 + 3]);
            arr_34 [i_3] = ((!(((var_1 ? var_0 : 2717333967)))));
        }
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            arr_37 [i_9] = (arr_4 [i_9 + 1]);
            var_24 = 1892011422;
        }
        arr_38 [i_3] = var_2;
        var_25 = (~var_7);
    }

    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                {
                    var_26 = (min((((~427) ? -14125 : -125)), (var_4 - var_10)));
                    var_27 = var_8;
                }
            }
        }
        arr_46 [i_10] = (arr_45 [i_10] [i_10] [i_10]);
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 1; i_14 < 20;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    {
                        arr_59 [i_14] [i_15] [i_14] [i_14] = (max((604258361 != var_10), (max(var_0, ((((arr_0 [i_16]) && var_10)))))));
                        arr_60 [20] [i_14] [1] [i_16] [i_14] [i_14] = (arr_51 [i_14] [i_14 + 1] [i_14]);
                        var_28 = var_0;
                    }
                }
            }
        }
        var_29 = (max(((~(29707 <= 3690708935))), ((-(arr_1 [i_13] [i_13])))));

        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            var_30 = (min(((!(((var_5 << (((arr_1 [i_13] [i_13]) - 72))))))), (((arr_51 [i_17] [i_17] [i_17 - 1]) && ((((arr_1 [i_13] [i_17]) ? var_4 : -1420673292)))))));
            var_31 = ((var_8 - var_6) - -var_2);
        }
        for (int i_18 = 0; i_18 < 21;i_18 += 1)
        {
            arr_65 [i_13] [i_18] = min((arr_58 [i_13] [3] [0] [1]), (max((((~(arr_2 [i_13] [i_13])))), (arr_55 [i_13] [i_13]))));
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 21;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        {
                            arr_72 [i_13] [i_18] [3] [i_19] [i_19] [i_19] [i_21] = ((min((arr_68 [i_13] [i_18] [i_19] [i_19] [19] [i_18]), (arr_68 [i_13] [i_18] [i_19] [i_13] [i_13] [i_18]))));
                            arr_73 [i_19] [i_20] = (((var_4 ? var_7 : (arr_4 [i_13]))));
                            var_32 = var_10;
                            arr_74 [i_13] [i_18] [i_18] [i_18] [i_20] [13] = (((-((var_5 ? var_4 : var_8)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
