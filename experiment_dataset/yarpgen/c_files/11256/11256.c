/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_0 [i_0]) != -1753366454));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) ^ (arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_16 = (arr_4 [i_1] [i_1]);

            for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
            {
                var_17 = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            var_18 = (((arr_4 [i_1] [i_1]) >= var_9));
                            arr_14 [i_1] [i_2] [i_1] = (((arr_13 [i_4] [i_4 + 1] [i_4 + 1] [i_1] [i_4 + 1] [i_4] [i_4]) ? (!0) : (arr_6 [i_1] [i_1] [i_3] [i_4 + 1])));
                        }
                    }
                }
                var_19 = 9223372036854775807;
                var_20 = 1;
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
            {
                var_21 = (i_1 % 2 == zero) ? ((((arr_6 [i_5] [i_1] [i_5] [i_5]) >> (((arr_6 [i_5] [i_1] [i_1] [i_0]) - 1554563221))))) : ((((((arr_6 [i_5] [i_1] [i_5] [i_5]) + 2147483647)) >> (((((arr_6 [i_5] [i_1] [i_1] [i_0]) - 1554563221)) + 1993432945)))));
                arr_17 [i_0] [0] [i_1] [i_5] = (((((-125 ? 110 : var_0))) ? (arr_11 [i_0] [i_1] [i_1] [i_0]) : (var_6 + 24380)));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_22 = ((~((var_2 ? var_4 : -1040368709748973303))));
                            arr_22 [i_1] [i_1] [i_1] [i_6 + 1] [i_7 + 1] [i_1] [i_1] = var_14;
                            arr_23 [i_1] [i_1] [i_5] [i_7] [i_7] [i_5] [i_6] = (arr_8 [i_0] [i_1] [i_5] [i_1]);
                        }
                    }
                }
                arr_24 [i_1] = -2906966503939874318;
            }
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        var_23 = (min(var_10, (((arr_15 [i_8] [i_8]) ? (arr_15 [i_8] [i_8]) : -26622))));
        arr_27 [i_8] = ((var_13 - ((max((16745433079063243167 <= var_1), (arr_26 [i_8] [i_8]))))));
    }
    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        var_24 = -var_1;
        arr_30 [i_9] = ((((max(((-(arr_13 [10] [10] [i_9] [16] [4] [i_9] [i_9 + 2]))), (arr_28 [i_9])))) ? ((((var_12 ? var_5 : (arr_28 [i_9]))) & (((arr_19 [i_9] [i_9] [i_9] [12] [i_9 - 1]) ? (arr_16 [2] [i_9]) : 1)))) : (~-32512)));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            arr_41 [i_9] [i_11] [i_11] [i_11] [i_11] = 0;
                            var_25 = ((!(((0 ? var_7 : var_2)))));
                        }
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            arr_44 [i_9] [i_11] [i_9] = (((!(arr_20 [i_9] [i_11] [i_9 + 2] [i_12] [i_11] [i_11]))));
                            arr_45 [i_11] [i_11] [i_10] [i_11] = (((((((48 ? -707985854313107244 : (arr_11 [i_14] [i_11] [i_11] [i_9])))))) - (((16384 << (16745433079063243173 - 16745433079063243173))))));
                            var_26 = (((((var_8 ? (arr_28 [i_11]) : 28734))) ? var_10 : var_10));
                        }

                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            arr_50 [i_11] [8] [i_12] [8] [i_11] [i_11] = ((~(((4838485692101551631 && var_15) ? (((-2138953285 + 2147483647) << (16745433079063243167 - 16745433079063243167))) : (arr_47 [i_15] [i_11] [i_11] [i_11] [i_9])))));
                            var_27 = (min(250, 36785));
                        }
                        var_28 = -18078;
                    }
                }
            }
        }
        var_29 = ((!(((arr_15 [2] [2]) <= (arr_15 [10] [10])))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {
        arr_53 [i_16] [i_16] = (((arr_8 [i_16] [i_16] [i_16] [i_16]) >> (arr_8 [i_16] [i_16] [i_16] [i_16])));
        arr_54 [i_16] = 0;
        arr_55 [i_16] = (0 ? -23621 : (arr_26 [i_16] [i_16]));
        var_30 = var_10;
    }

    for (int i_17 = 0; i_17 < 11;i_17 += 1)
    {
        var_31 = ((71 > (max((~16377), (var_3 + var_4)))));
        arr_59 [i_17] = ((!(!23618)));
    }
    #pragma endscop
}
