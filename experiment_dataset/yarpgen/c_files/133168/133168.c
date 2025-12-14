/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((var_6 || var_4) >> (8160 > var_2))))));
    var_12 = (var_1 - var_5);
    var_13 -= (var_6 & (((((var_4 ? var_7 : var_0))) ? (~123) : ((var_2 ? var_4 : var_6)))));
    var_14 = 7111;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3 - 2] [i_1] = (+-116);
                                var_15 = (arr_12 [i_0] [i_1 - 1] [i_0] [i_3] [i_4 + 1]);
                                var_16 = (min(var_16, 121));
                                arr_15 [i_0] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_2] [i_1] = ((!(((32768 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) : -1)))));
                    var_17 = 220;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {
                        var_18 = (min(var_18, ((((arr_6 [i_7 + 1] [i_6] [i_6] [i_7]) ? (arr_6 [i_7 - 1] [i_6] [i_6] [i_6 - 2]) : var_1)))));
                        var_19 ^= (arr_9 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 1] [i_5 - 1]);
                        var_20 = (((var_3 ? -7108 : (arr_10 [i_0] [i_0] [i_5] [i_6 - 1] [i_0] [i_0]))));
                        arr_24 [i_6] [i_6] [i_6] |= ((-(((arr_17 [i_0] [i_7]) ? 65472 : -121))));
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_27 [i_0] [i_0] [i_8] = (arr_0 [i_8]);
            var_21 = var_7;

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {

                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_35 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]) + (arr_23 [i_10 + 3] [i_10 + 3] [i_10] [i_10] [i_10 + 1] [i_10])));
                        var_22 = -64;
                        arr_37 [i_8] [i_0] = -192;
                    }

                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        var_23 = (((arr_35 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_10 - 1]) ? (arr_35 [i_10 + 1] [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10 + 2]) : (arr_35 [i_10 + 2] [i_10 + 2] [i_10] [i_10] [i_10 - 1])));
                        var_24 -= (((((103 ? 2147483647 : (arr_39 [i_0] [i_8] [i_9] [i_10] [i_8])))) ? (arr_5 [i_10 + 1] [i_10 + 3]) : (((arr_23 [i_0] [i_8] [i_8] [i_9] [i_10] [i_12]) ? (arr_9 [i_0] [i_8] [i_0] [i_10] [i_12]) : var_7))));
                    }
                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        var_25 = ((!(arr_41 [i_0] [i_13 + 1] [i_10 - 1] [i_8] [i_0])));
                        arr_44 [i_0] = (arr_23 [i_0] [i_0] [i_0] [i_9] [i_10] [i_13 + 3]);
                    }

                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        var_26 = (((arr_18 [i_10 + 2] [i_0]) / -6011604150127716775));
                        var_27 = ((((arr_41 [i_0] [i_8] [i_0] [i_0] [i_14]) ? var_4 : (arr_25 [i_10]))));
                    }
                }
                arr_47 [i_0] = (((arr_19 [i_0] [i_8] [i_0]) ^ ((var_2 ? 7111 : (arr_23 [i_0] [i_0] [i_0] [i_8] [i_9] [i_9])))));

                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    var_28 = (max(var_28, ((((((var_8 ? (arr_49 [i_9] [i_15]) : (arr_35 [i_8] [i_9] [i_9] [i_8] [i_0])))) ? var_3 : (~116))))));
                    var_29 = (min(var_29, (arr_33 [i_0] [i_8] [i_8] [i_0] [i_9] [i_0])));
                    var_30 = (((arr_41 [i_0] [i_9] [i_9] [i_8] [i_0]) ? -1586329771 : (arr_41 [i_0] [i_8] [i_8] [i_9] [i_9])));
                }
            }
            arr_50 [i_0] = (~(arr_2 [i_0]));
        }
    }
    #pragma endscop
}
