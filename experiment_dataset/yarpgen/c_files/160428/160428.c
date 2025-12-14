/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 255;
        arr_3 [i_0] [2] = (18446744073709551615 * var_2);
        arr_4 [i_0] = (min((((((var_4 ? var_5 : var_3))) % (min(var_8, (arr_1 [12] [i_0 - 1]))))), ((min((min(var_2, var_0)), (((var_9 <= (arr_0 [i_0] [i_0 - 1])))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_2] [i_1] [11] [i_1] = 4;
                        arr_14 [i_1] [2] [2] [i_1] = ((~var_5) & (arr_9 [i_1] [i_1]));
                        arr_15 [i_1] [15] [i_1] [i_3] [i_3] [i_4] = (min((((((18446744073709551615 << (var_5 - 105)))) ? var_4 : var_7)), (min(11437379667368232843, 0))));
                    }
                }
            }
        }
        arr_16 [i_1] [5] = (((max((max(1, (arr_12 [i_1] [i_1] [1] [i_1]))), (min(var_0, 7)))) + ((((!(((100 ? var_7 : var_7)))))))));

        /* vectorizable */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            var_10 = ((-9223372036854775807 - 1) ? (((arr_12 [7] [i_1] [7] [i_1]) ? var_4 : 156)) : ((((arr_12 [i_1] [i_5] [14] [i_1]) + var_2))));

            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                var_11 = var_9;
                var_12 = ((!(var_2 && var_6)));
                var_13 = (((arr_11 [i_6 + 1] [i_6] [i_6 + 1]) <= var_2));
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_14 = (18446744073709551592 <= 1);
                            arr_31 [i_9] [i_5] [i_1] [i_5] [i_1] [i_1] [i_1] = 18446744073709551609;
                            arr_32 [i_1] [i_8] [i_9] = var_5;
                            arr_33 [i_1] [i_5] [i_1] [i_7] [11] [2] [9] = (((arr_12 [i_8] [1] [i_7] [i_1]) ? (arr_25 [i_1] [i_1] [i_8] [i_8] [i_8 - 1] [i_5]) : (arr_25 [i_1] [i_1] [i_1] [i_8] [i_8 - 1] [0])));
                            var_15 = (arr_10 [4] [0] [i_5 + 2]);
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    var_16 = (var_7 - 8190853270726185671);
                    arr_37 [i_1] [i_1] [i_5] = var_3;
                    var_17 = var_7;
                }
            }

            for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
            {
                arr_42 [i_1] = 156;
                arr_43 [i_1] [i_1] = (0 & var_0);
                arr_44 [i_1] [i_1] [i_11] = (var_0 / var_9);
                arr_45 [i_1] [i_1] [i_1] [2] = var_5;
            }
            for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
            {
                arr_49 [i_1] [i_5] [i_1] = ((var_5 > ((~(arr_10 [i_1] [i_5 + 1] [12])))));
                var_18 = (var_3 ? (arr_19 [i_1] [i_5 + 1]) : (arr_20 [15] [i_5 - 1] [i_5] [i_5 + 1]));
                arr_50 [i_1] [i_5] [i_12] [i_12] = -var_1;
            }
            for (int i_13 = 2; i_13 < 16;i_13 += 1)
            {
                arr_53 [i_1] [i_1] = -1667169462;
                arr_54 [i_1] [i_1] = ((-((var_3 ? var_2 : (arr_23 [i_13] [i_5] [i_5] [i_1])))));
            }
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 15;i_15 += 1)
                {
                    {
                        arr_60 [i_1] = 250;
                        arr_61 [i_1] [i_5] [i_5] [i_5] [i_5] [i_5] = (((var_7 * var_5) | 4554362002365154601));
                        arr_62 [i_1] [i_1] [10] [i_1] = 4554362002365154601;
                        arr_63 [i_15] [i_1] [14] = (((arr_39 [i_5 + 1] [5] [i_1] [13]) - (arr_39 [i_5 + 1] [7] [i_1] [i_1])));
                    }
                }
            }
        }
    }
    var_19 = var_7;
    var_20 = var_5;
    #pragma endscop
}
