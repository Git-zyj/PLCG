/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_16 = 31;
        arr_2 [i_0] = var_5;
        var_17 = (max((((~(arr_1 [i_0 + 1] [i_0 - 3])))), ((var_14 ? (!var_10) : (min(var_7, (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_18 = (!61345);
        arr_5 [i_1] [i_1] = var_15;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_13 [i_3] [i_3 + 1] [i_3] [i_3] [i_3] = var_4;
                        var_19 = ((!(~-1656)));
                    }
                }
            }
        }
        var_20 = (max((arr_12 [i_1] [i_1] [i_1] [i_1]), (min(((-1661 ? -1664 : var_15)), 25))));
    }
    var_21 = (!var_5);

    /* vectorizable */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_22 = -1266474939;

        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            var_23 = 1173728488524686582;
            var_24 = (var_9 && var_12);
            var_25 = var_1;
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_26 = (!var_6);
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 8;i_9 += 1)
                {
                    {
                        arr_28 [i_5 - 1] [i_7] [i_5] [i_9 + 1] = (((arr_7 [i_5 + 2] [i_5 - 1]) ? (arr_7 [i_5 - 1] [i_5 + 1]) : (arr_7 [i_5 + 2] [i_5 + 1])));
                        var_27 = -1656;
                        var_28 = (!var_0);

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            arr_33 [i_5] = (!var_13);
                            var_29 = (arr_20 [i_5]);
                            arr_34 [i_5] = arr_8 [i_5] [i_5] [i_5] [i_5 + 2];
                        }
                    }
                }
            }
            var_30 = (((arr_26 [0] [i_5 - 1] [i_5 - 1] [i_5]) ? var_1 : (arr_27 [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5 + 1] [i_5])));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_31 = var_9;
                            var_32 *= var_13;
                            var_33 = (arr_1 [3] [i_12]);
                            arr_44 [7] [i_7] [8] [2] [i_5] = var_10;
                        }
                    }
                }
            }
        }
        var_34 = (arr_19 [i_5 + 2]);

        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    {
                        arr_53 [i_5 - 1] [10] [i_5] [2] = var_2;
                        arr_54 [i_5] [6] [6] [i_16] = ((var_6 ? var_14 : (~var_13)));
                        arr_55 [i_16] [i_5] [i_5] [i_5] [4] = ((~(arr_22 [i_5 + 2])));
                        arr_56 [i_5] [i_14] [i_15] [i_5] = var_1;
                    }
                }
            }
            var_35 = ((!(((var_8 ? (arr_25 [i_5 + 1] [i_14] [i_14] [3]) : -1651)))));
        }
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            var_36 &= (~var_8);
            /* LoopNest 2 */
            for (int i_18 = 2; i_18 < 7;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    {
                        var_37 = (max(var_37, var_0));
                        var_38 = (arr_29 [i_5 + 1] [i_17] [i_18] [0] [i_19]);
                    }
                }
            }
            var_39 = (arr_50 [i_5 - 1] [i_5 + 1] [i_17]);
            var_40 = var_0;
        }
    }
    #pragma endscop
}
