/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = (min(var_20, var_10));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_21 = ((-17167 ? 7 : 1));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] |= 1;

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] [i_2] = var_6;
                            var_22 = ((var_18 - (arr_2 [i_0] [i_2 + 3] [i_2 - 1])));
                        }
                        var_23 ^= (arr_3 [i_0] [i_2] [i_0]);
                    }
                }
            }

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_24 = var_14;
                var_25 = (((arr_7 [i_0] [i_0 - 2] [i_0]) ? 11 : (arr_13 [i_1] [i_1] [i_5] [i_5] [i_0] [i_5])));

                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    arr_21 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] = (((arr_2 [i_0] [i_0] [i_0]) ? (arr_15 [i_6] [i_0 + 1] [i_1] [i_0 + 1]) : (~var_13)));
                    var_26 = (min(var_26, (arr_1 [i_6 - 3])));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_27 = (max(var_27, ((((arr_6 [i_0] [i_5] [i_5]) ? var_3 : -2080843625)))));
                        var_28 = (arr_6 [i_0] [i_0] [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_29 ^= (arr_8 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0]);
                        arr_28 [i_8] [i_0] [i_0] [i_0] [i_0] = ((var_13 ? var_15 : (arr_25 [i_8] [i_6] [i_6] [i_6 - 3] [i_6] [i_6])));
                        arr_29 [i_0] [i_0] [i_0] = 11;
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = -var_7;
                    }
                    var_30 = (min(var_30, (((var_17 ? (arr_5 [i_0] [i_5] [i_0] [i_6 + 2]) : var_13)))));
                }
                var_31 = (!1);
            }
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            arr_34 [i_9 + 2] = (-4 + 1);
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 8;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_32 = (~-17167);
                            var_33 = (((arr_19 [i_0 - 1]) + (arr_36 [i_9 + 1] [i_10 - 1] [i_9 + 1])));
                            var_34 = (((arr_15 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 2]) << (((arr_15 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 + 1]) - 8580764426100261556))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 10;i_14 += 1)
                {
                    {
                        var_35 = (max(var_35, 7));
                        arr_46 [i_0] [i_0] = (~(arr_9 [i_0] [i_0] [i_0] [i_0]));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            var_36 = ((var_18 / (arr_4 [i_0] [i_0 - 2])));
            arr_51 [i_0] [i_0] = ((((13 & (arr_42 [i_15] [i_15] [i_15])))) ? (arr_11 [i_0] [i_0] [i_0] [i_15] [i_0 - 1] [i_0]) : ((((arr_48 [i_0] [i_0] [i_0]) & var_18))));
            /* LoopNest 2 */
            for (int i_16 = 2; i_16 < 11;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    {

                        for (int i_18 = 2; i_18 < 11;i_18 += 1)
                        {
                            arr_59 [i_0] [i_15] [i_16] [i_17] [i_17] [i_18] = (6037267192314560079 ? (arr_27 [i_0] [i_15] [i_16] [i_0]) : var_0);
                            var_37 = (max(var_37, -1));
                            arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] = ((255 ? -18 : -6826299398959506623));
                        }
                        arr_61 [i_0] [i_0] [i_17] &= (arr_37 [i_16 - 1] [i_16 - 1] [i_16 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                        var_38 = (arr_15 [i_15] [i_15] [i_16] [i_16 - 2]);
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 12;i_19 += 1)
        {
            var_39 = ((var_3 - (arr_32 [i_0])));
            var_40 += (!var_5);
        }
    }
    #pragma endscop
}
