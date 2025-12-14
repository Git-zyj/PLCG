/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(arr_0 [i_0])));
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [6] [i_0] = var_14;
        var_19 = ((+(((arr_1 [i_0]) ? var_9 : 3675111783616512789))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_20 = (max(var_20, 2045963732));

        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_1] = -var_5;
            var_21 = (!254);
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 6;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_22 = (((arr_19 [i_5] [i_5] [i_5 + 2] [i_5]) & (arr_13 [i_3])));
                        arr_21 [2] [i_4] [i_3] [i_6] [3] [2] = ((((var_15 ? (arr_20 [i_3] [i_3] [i_3] [7]) : var_1)) << (var_17 - 36079)));
                    }
                }
            }
            var_23 ^= ((!(-1619501267451261765 >= 35522)));
            var_24 &= (arr_10 [i_3] [i_4]);
        }
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            arr_24 [i_3] [3] [i_3] = (((((~var_0) + 2147483647)) >> (max(1, 16))));
            arr_25 [4] [i_7] [i_7] |= (arr_14 [4]);

            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                var_25 = var_11;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 7;i_10 += 1)
                    {
                        {
                            var_26 += (~var_13);
                            arr_33 [0] [i_7] [i_8] [i_9] [i_3] = ((-(arr_19 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 2])));
                            var_27 = (max(var_27, ((((var_6 ? var_0 : (arr_31 [i_7 + 1] [i_7] [i_7] [i_9] [i_10]))) - ((max((arr_6 [i_7 + 1] [14]), 18305)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_28 = (min(var_6, ((((min(var_10, 3707469148))) ? var_16 : (~var_4)))));
                            arr_40 [i_3] [i_3] = ((14771632290093038827 << (((((arr_23 [i_8]) + 2147483647)) >> (1780959282 - 1780959255)))));
                            var_29 *= ((-(arr_10 [i_8] [i_11])));
                            var_30 = (max(var_30, ((-(max(26214, ((255 ? 39417 : -125))))))));
                        }
                    }
                }
                var_31 = var_5;
            }
            for (int i_13 = 1; i_13 < 7;i_13 += 1)
            {
                var_32 ^= (~var_1);

                /* vectorizable */
                for (int i_14 = 3; i_14 < 8;i_14 += 1)
                {
                    var_33 = ((-(arr_42 [i_7 + 1] [i_13 + 1] [i_13 + 1] [i_14 + 1])));
                    var_34 = (((!(arr_43 [i_14] [i_7 - 1] [i_7]))));
                }
            }
            var_35 = ((!(((min(var_16, var_16))))));
        }
        arr_46 [i_3] = var_6;
        arr_47 [8] &= 214;
        arr_48 [i_3] = (~26214);
        var_36 = (min(var_36, 26214));
    }
    var_37 = var_0;
    var_38 = (max(var_38, var_11));
    var_39 = var_12;
    #pragma endscop
}
