/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = var_2;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 -= (!-1587029031);
                    var_16 = (-10987 != (~-7768660510291955820));
                }
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_17 = -34;
                        var_18 = max(-1, ((-(max(1, 0)))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_18 [i_3] [i_3] [i_3 + 1] [i_6] [i_3] = ((((1 + 2869427689) | (arr_11 [i_3] [i_3 + 1] [0] [i_5] [i_6] [i_1]))));
                                var_19 = 1587029030;
                                var_20 -= (max((((arr_16 [i_3 - 2] [5] [i_3] [1] [i_3 + 1] [i_3 - 1]) ? (arr_16 [i_3 - 1] [i_3] [i_3] [i_3] [i_3 + 1] [i_3 + 1]) : (arr_16 [i_3 - 2] [i_3 - 1] [2] [i_3] [i_3 - 1] [i_5]))), (arr_4 [i_1] [i_6])));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    arr_23 [i_7] = var_10;
                    arr_24 [i_7] [i_7] [i_1] = ((~(arr_16 [i_0] [i_0] [i_1] [i_1] [i_7] [17])));
                    var_21 = ((~(arr_5 [i_0] [1])));
                    var_22 = 0;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        var_23 *= (arr_25 [i_8 + 1]);
        arr_27 [i_8] = ((~((~(arr_26 [i_8 + 1])))));
        arr_28 [7] = var_7;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 20;i_11 += 1)
                {
                    {
                        arr_39 [i_8] [i_9] = -113;

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_24 = (arr_25 [i_8 + 1]);
                            var_25 = (min(var_25, 389961556));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_44 [i_8 + 1] [i_9] [i_9] = (((arr_32 [i_8] [23] [i_9] [i_13]) / 6371836836165616361));
                            var_26 = ((-(arr_30 [1] [1] [i_9])));
                            arr_45 [i_9] [i_9] [i_9] = arr_34 [i_10];
                        }
                        for (int i_14 = 2; i_14 < 22;i_14 += 1)
                        {
                            var_27 |= (arr_36 [i_14] [i_14] [i_14 - 1] [i_14 - 1] [i_14 + 1] [i_14]);
                            var_28 = ((1 ? 0 : (arr_37 [i_9] [i_11 - 4] [i_10 - 1] [15] [i_10] [i_9])));
                        }

                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            var_29 = (!8823744766418672836);
                            var_30 += (arr_48 [i_15] [15] [i_15] [i_15] [i_15] [i_15] [23]);
                            arr_50 [i_8] [i_9] [i_10] [i_11] [i_15] = ((arr_36 [i_8] [i_10] [i_11 + 3] [i_8] [i_11 + 3] [i_9]) % (arr_36 [i_10 - 1] [9] [i_11 - 1] [1] [i_15] [i_9]));
                            var_31 = (min(var_31, 0));
                        }
                    }
                }
            }
        }
        arr_51 [i_8 + 1] [i_8 + 1] = ((0 ? (arr_31 [i_8] [i_8 + 1] [i_8]) : var_1));
    }
    var_32 += 1;
    var_33 = ((var_3 ? var_8 : (((var_2 % var_1) ? 10296466826239807879 : (22219 / -1894944034)))));
    #pragma endscop
}
