/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (((0 ? ((min(268173312, var_10))) : 4350491750065266973)) % (arr_1 [2] [i_0]));
        arr_2 [i_0] = 194699389;
        var_12 = ((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? 4350491750065266973 : -var_8));
        arr_3 [i_0] [i_0] = 194699358;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = var_2;
        var_13 = (((var_9 ? var_0 : var_9)));
        arr_7 [i_1] [i_1] = var_10;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        var_14 = ((~(arr_0 [5])));

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_15 = (max(var_15, (((((0 ? (arr_5 [i_2]) : var_7)) >> (((~var_9) + 28112)))))));
            arr_14 [i_2] [i_3] [i_3] = ((var_7 & (arr_5 [i_2])));
            arr_15 [0] [i_2] = var_0;
        }
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            arr_18 [i_2] = (((arr_10 [i_2]) ? (arr_0 [i_4 + 1]) : var_7));

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_16 = (min(var_16, -1));
                var_17 &= (~var_0);
            }
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                var_18 = (((arr_21 [i_2] [i_4] [i_4]) <= 4026793983));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_31 [i_7] [8] [i_2] [i_7] [i_7] = (((arr_16 [i_2 - 1] [i_7 - 1]) ? var_10 : var_8));
                            arr_32 [i_2] [i_2] [i_6] [i_7] [i_8] = ((var_8 / ((-(arr_21 [3] [3] [i_8])))));
                        }
                    }
                }
                arr_33 [i_2] [i_4] [i_2] = ((!(arr_23 [2] [2] [i_6] [i_2])));
            }
            var_19 = (min(var_19, (((((((arr_12 [1]) ? var_3 : (arr_21 [i_2] [i_2] [i_4])))) ? var_6 : var_6)))));
            arr_34 [i_2] = (arr_20 [i_2] [i_4 - 3]);
        }
        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            var_20 = -65533;
            var_21 = (max(var_21, 0));
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            arr_39 [i_2] [i_2] [i_2] = (((arr_26 [i_10] [i_10] [i_10] [i_2 + 1]) >= (arr_23 [i_2 + 1] [i_10] [1] [i_2 + 1])));
            var_22 -= ((42 ? 65527 : (arr_24 [i_2 + 2])));
            var_23 = ((var_8 ? (arr_21 [i_2] [i_2 - 1] [i_2 + 2]) : var_0));
        }

        for (int i_11 = 2; i_11 < 10;i_11 += 1)
        {
            arr_42 [i_2] = (((arr_21 [12] [i_11] [i_11]) ? 42 : var_8));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            var_24 = 1499231386;
                            var_25 = (((var_2 - -1119412583) % ((var_2 ? -1975 : 0))));
                            arr_50 [4] [7] [i_11] [i_13] [i_2] = (arr_28 [i_2] [4] [11] [i_12] [i_12] [i_11 + 2] [i_2]);
                            var_26 = (arr_36 [i_12 + 1] [i_12 + 1] [i_12]);
                        }
                        arr_51 [i_2 + 1] [i_2] [i_12] [i_13] = (arr_22 [i_2 - 3] [i_11 - 1] [i_12 + 1]);
                        arr_52 [i_2] [i_12] [i_11] [i_2] = var_4;
                        var_27 = ((-(arr_8 [i_2 - 1] [i_2])));
                    }
                }
            }
        }
    }
    var_28 = ((var_0 % ((var_7 | (!237)))));
    #pragma endscop
}
