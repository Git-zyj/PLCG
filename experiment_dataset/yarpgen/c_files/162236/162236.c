/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, 15266204810936790426));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = max((!var_8), ((var_3 & (14 <= 14))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_18 &= ((((((arr_1 [i_0] [i_1]) ? (arr_1 [i_2] [i_1]) : (arr_1 [i_0] [i_1])))) ? 10073178728139254282 : (arr_1 [i_0] [i_1])));
                        var_19 = 14;
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_12 [11] [11] [i_1] [i_4] = ((525499001 ? (-2147483647 - 1) : 71));
                        var_20 = (arr_3 [i_1] [i_2]);
                    }
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = (arr_16 [i_5]);
        var_21 += ((((-((var_15 ? (arr_15 [4]) : 2147483637)))) + (!-116)));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            arr_22 [i_6] = ((var_12 ? (arr_15 [12]) : (arr_15 [8])));

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    arr_27 [i_8] [i_7] [i_7] [i_7] [i_7] = var_5;
                    arr_28 [6] [i_8] [i_8] [i_8] [i_6] = var_9;
                    var_22 = (min(var_22, (((arr_21 [i_8] [i_9]) ? var_7 : (((arr_15 [i_9]) ? 18150854184513617359 : 0))))));
                    var_23 = ((18150854184513617359 ? (((((arr_16 [i_8]) && (arr_13 [i_6] [i_8]))))) : (arr_18 [i_6 + 2] [i_8])));
                }
                var_24 = 13870865834845774548;
                var_25 = (-(((arr_24 [i_6] [8] [i_8]) ? (arr_26 [i_6] [i_6 - 1] [i_6] [i_6] [i_8]) : 2522410482332173815)));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_26 = var_7;
                            arr_35 [i_8] [13] [i_8] [i_8] [10] = ((!(arr_15 [i_8])));
                            var_27 = (((arr_25 [i_6 - 1] [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_8]) ? (2147483647 || 295889889195934258) : ((var_8 >> (((arr_31 [i_6] [i_7] [10] [i_11]) + 575414444))))));
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_28 = (min(var_28, ((((((arr_31 [i_12] [i_7] [14] [i_6]) + 2147483647)) << ((((((arr_29 [12]) && var_10))) - 1)))))));
                var_29 = ((!(arr_18 [i_6 + 2] [i_6 + 2])));
                var_30 = (arr_16 [i_12]);
            }
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                arr_43 [i_6] [9] [i_13] = arr_41 [9] [1];
                var_31 = ((10543036870748536616 ? (arr_20 [i_6 + 2]) : (arr_13 [10] [i_13])));
                arr_44 [i_6] [i_6 - 2] = (((arr_34 [i_6] [i_6] [i_6] [i_6] [i_6 + 2]) ? (arr_34 [i_6] [i_6] [i_6 - 2] [i_6] [i_6 + 2]) : (arr_34 [i_6] [i_6] [i_6] [i_6] [i_6 + 2])));
            }
        }
        for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
            {
                var_32 = (arr_13 [i_6 - 1] [i_15]);
                var_33 = ((-12 ? 295889889195934271 : 10));
            }
            for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
            {
                var_34 = (arr_39 [i_6 + 1] [i_16] [i_16]);
                arr_53 [i_6] [6] [i_16] = (arr_36 [i_6 + 2] [i_6 - 2] [i_6 - 2] [i_6]);
            }
            var_35 = ((var_14 ? ((var_7 ? var_11 : -96)) : -10));
            arr_54 [i_6 - 1] = (arr_30 [i_6] [8] [i_6]);
            arr_55 [i_6] [8] [i_14] = (arr_26 [i_6] [i_6 + 1] [i_6] [2] [14]);
        }
        arr_56 [i_6] = (+((var_5 ? (arr_52 [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 1]) : (arr_46 [i_6] [i_6 - 1]))));
    }
    var_36 = (min(var_36, (((var_0 ? -var_10 : ((((4131058984 ? var_7 : (-2147483647 - 1))))))))));
    var_37 = var_15;
    #pragma endscop
}
