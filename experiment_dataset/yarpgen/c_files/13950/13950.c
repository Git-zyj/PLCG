/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += 8025377681548204350;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = ((((((((846419416681931482 ? var_4 : (arr_1 [12] [i_0])))) ? (arr_0 [i_0]) : var_4))) ? var_6 : 0));
        arr_2 [i_0] = 13;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = var_0;
        var_19 = 6724;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_20 = (((arr_6 [i_2] [i_2] [i_2 + 1]) ? 417301710 : var_0));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_21 = ((-4356949933142013837 <= (((1 >> (var_4 - 6759005287317531442))))));
                                var_22 = (max(var_22, var_3));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_16 [i_6] [i_2] [1] = ((65535 ? (arr_4 [10]) : ((14 ? var_0 : var_13))));

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_23 = ((((((arr_17 [i_2] [i_6] [i_3] [4] [i_2]) ? 37330 : 0))) ? ((var_4 ? var_1 : 536376245)) : (arr_9 [i_2] [7] [i_2 + 1] [0] [10])));
                            var_24 = ((var_12 ? var_3 : (arr_8 [i_2 + 1] [i_2 + 1])));
                        }
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            var_25 *= var_0;
                            var_26 = (((arr_15 [i_2 + 1] [1] [i_2] [i_2]) && 0));
                            var_27 |= 207;
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            arr_24 [i_2] [i_2] [i_2] = ((var_1 ? (arr_18 [10] [i_2] [i_3] [i_6] [7] [1] [8]) : var_1));
                            var_28 = (188 || 193);
                        }
                        arr_25 [i_2] [8] [i_3] [i_6] |= (arr_17 [i_2 + 1] [i_2] [i_2 + 1] [i_3] [i_1]);
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_29 = ((~((~(arr_27 [3] [2] [1] [i_3] [i_2] [15])))));
                        var_30 = var_8;
                        var_31 = (!9);

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_32 |= (((arr_27 [i_2 - 1] [i_10] [9] [i_1] [1] [i_10]) ? (arr_27 [i_2 - 1] [15] [i_3] [i_10] [i_3] [8]) : var_15));
                            var_33 = ((1820140853 ? (12 | var_9) : (98 % 12871)));
                            arr_31 [i_11] [9] [i_2] [10] [i_11] = (((arr_10 [i_11] [i_3] [i_2] [i_1]) ? (65524 > -1903166941315808981) : (arr_4 [i_2 + 1])));
                        }
                    }
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        var_34 = ((-(arr_6 [i_2] [i_2 + 1] [i_2 - 1])));
                        var_35 = (((arr_4 [i_2 + 1]) & -1805390903));
                    }
                    for (int i_13 = 2; i_13 < 17;i_13 += 1)
                    {
                        var_36 = (((arr_14 [i_1] [5] [0] [5]) ? var_11 : (52562 * 0)));
                        var_37 = var_6;
                    }
                }
            }
        }
        var_38 |= ((-(~2669241558568680433)));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 17;i_16 += 1)
                {
                    {
                        var_39 = -var_6;

                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            var_40 = (max(var_40, (!3)));
                            var_41 = (arr_43 [13] [i_16 - 1] [5] [i_16]);
                            var_42 = (((((((arr_4 [i_17]) + 2147483647)) << (3045954188845722148 - 3045954188845722148))) << (var_13 - 56392)));
                            var_43 = ((var_6 ? (arr_5 [i_15]) : (arr_5 [i_15])));
                        }
                    }
                }
            }
        }
    }
    var_44 = (((max(14513310249124477897, 6728)) << (var_10 - 279168129574181322)));
    #pragma endscop
}
