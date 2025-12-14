/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_10 + 2147483647) << (var_1 - 61)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_1] = (arr_2 [i_0] [i_1] [i_1]);

            /* vectorizable */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_14 = var_8;
                var_15 -= (arr_5 [i_0] [i_0] [i_0] [i_0]);
                var_16 = (((arr_5 [i_0] [i_1] [i_2] [i_2]) <= ((var_0 << (((arr_0 [i_1]) - 1782773995))))));
            }

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                var_17 = (max(var_17, (arr_3 [i_0])));
                arr_10 [i_3] [i_1] [i_1] [i_0] = (((max(var_2, var_6))));
                arr_11 [i_0] [1] [i_3] = (min((((((max(var_3, var_2))) ? ((((!(arr_9 [i_1]))))) : 1740342167))), var_5));
            }
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                arr_16 [i_4] [i_0] [i_1] [2] = var_9;

                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    arr_19 [i_1] [i_4] [8] |= ((((-(arr_9 [i_5 + 2]))) - -var_9));
                    var_18 = (max(var_18, (arr_14 [i_0] [i_1] [i_0] [i_0])));
                    var_19 = ((6473436912338661008 ? (((var_7 && var_1) ? 18446744073709551615 : (!-17533))) : ((((arr_12 [i_0] [i_4]) ? (arr_15 [i_0] [i_1] [17]) : (((arr_12 [i_4] [i_4]) ? var_7 : (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    var_20 = (var_1 - var_9);
                    arr_23 [i_0] [8] [i_4] [i_4] [i_6] = var_12;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_21 = (arr_22 [i_0]);
                        arr_31 [i_4] [i_4] = ((var_9 ? var_10 : (((arr_24 [i_0] [i_1] [i_4] [i_7]) ? var_10 : (arr_15 [i_0] [i_0] [i_0])))));
                        var_22 = (max(var_22, ((((((arr_20 [4] [i_1] [1] [4] [i_7]) > var_5)) ? (!var_3) : -var_0)))));
                    }
                    arr_32 [i_7] [18] [i_4] [i_4] [i_0] [i_0] = (arr_25 [i_4] [i_4] [i_4]);
                }
                arr_33 [i_4] = (max((((arr_21 [i_0] [6] [i_4] [6] [i_4]) ? (arr_29 [i_4] [i_4] [i_4] [i_1] [i_4] [9] [i_4]) : (arr_29 [i_0] [i_0] [i_0] [i_1] [23] [23] [i_4]))), (((!(arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                arr_34 [i_4] [3] [i_4] = (max((arr_9 [i_0]), ((~(arr_9 [i_0])))));
            }
            var_23 = ((min(var_1, (min(var_1, 6740515452184981241)))) / ((+(((arr_7 [i_0] [16]) ? var_3 : (arr_3 [22]))))));
            arr_35 [i_0] [i_0] = ((~(17532 + 63)));
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 23;i_9 += 1)
        {
            var_24 = ((~(arr_21 [i_0] [i_9 - 2] [i_9] [i_0] [i_9 + 1])));
            arr_39 [11] [11] [11] = var_4;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        arr_46 [i_11] [i_10] [i_10] [i_10] [22] = (arr_42 [i_0] [i_0] [8] [i_0] [i_0] [i_0]);

                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            var_25 = (max(var_25, (((var_11 ? 8 : (arr_3 [i_0]))))));
                            arr_49 [i_0] [i_0] [i_0] [i_10] = 72;
                            arr_50 [i_0] [i_10] [i_10] [i_0] [i_10] = ((~(arr_5 [i_12 - 1] [i_11] [i_9] [i_9])));
                            var_26 = (((var_2 + 2147483647) >> ((((var_11 ? 35434 : var_1)) - 35412))));
                        }
                    }
                }
            }
        }
        var_27 = ((~(((arr_30 [i_0] [i_0] [i_0] [i_0] [8]) ? (arr_30 [8] [i_0] [i_0] [i_0] [8]) : (arr_30 [20] [20] [i_0] [i_0] [16])))));

        for (int i_13 = 0; i_13 < 0;i_13 += 1)
        {
            arr_53 [22] [i_0] [i_13] |= (arr_9 [3]);
            var_28 = ((((arr_42 [i_13 + 1] [i_13 + 1] [i_0] [i_0] [i_0] [i_0]) | var_8)));
        }
    }
    var_29 = (~var_1);

    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        arr_56 [i_14] = (~var_12);
        arr_57 [i_14] [i_14] = (arr_5 [i_14] [i_14] [i_14] [i_14]);
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 10;i_15 += 1)
    {
        arr_60 [i_15 + 1] = (arr_47 [i_15] [i_15]);
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                {
                    var_30 = ((var_4 ? (arr_28 [i_15] [i_17]) : var_7));
                    var_31 = (((((var_11 | (arr_42 [i_17] [i_17] [i_16] [i_16] [i_15] [i_15])))) != var_8));
                }
            }
        }
    }
    #pragma endscop
}
