/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 ? 7350893448953189225 : (var_2 + -var_4)));
    var_11 = ((~(((((-4384 ? var_6 : var_6)) >= (~-4384))))));
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] = (((((~(max(var_6, (arr_6 [13] [13])))))) ? 68 : (-450899245 < var_9)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_3] [i_0] [i_2] [i_2] [i_3] = (i_0 % 2 == 0) ? ((((var_0 + 2147483647) << (((arr_2 [i_0] [1]) - 54822))))) : ((((var_0 + 2147483647) << (((((arr_2 [i_0] [1]) - 54822)) - 1723)))));

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            arr_15 [i_1] [i_1] [i_2] [i_3] [i_1] [i_3] [i_0] = (((arr_6 [i_1 + 3] [i_1 + 2]) ^ ((1820363893 ? var_7 : var_9))));
                            arr_16 [i_0] [i_0] [1] [i_0] [i_0] = ((var_8 ^ (arr_14 [i_1 - 2] [i_3] [i_2] [i_3] [i_0])));
                            var_13 = var_2;
                            var_14 ^= -4384;
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_15 = (((arr_2 [i_0] [i_0]) ? 0 : (arr_2 [i_0] [i_0])));
                            arr_20 [i_0] [i_1] [i_0] [i_5] [i_5] [i_2] [i_2] = (!var_2);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_16 = (!var_9);
                            var_17 *= ((var_8 ? (arr_24 [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_1] [i_1 + 1]) : (arr_24 [i_1 + 1] [i_1 + 3] [i_1 - 2] [i_1] [i_1 - 3])));
                            var_18 = (~var_6);
                        }
                        var_19 = (((arr_24 [i_3] [i_2] [i_2] [17] [i_0]) - (arr_3 [i_1 + 1] [i_1 + 1])));
                        var_20 = (arr_14 [i_0] [i_0] [i_2] [2] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_21 = ((((((max(var_2, var_3))) && 240)) ? (((((arr_8 [i_0] [1] [i_2]) - 1463274311)) - ((-4549308781098195985 ? (arr_2 [i_0] [i_0]) : 566815736)))) : (((max(8128, var_1))))));
                        var_22 = ((-(((arr_24 [i_7] [i_7] [12] [i_7] [2]) * var_5))));
                        arr_27 [i_0] [i_0] [i_0] [i_2] [i_2] [19] = -4384;
                        var_23 = (((arr_8 [i_0] [i_1 - 4] [i_1]) ? (arr_23 [i_0] [i_1] [7] [i_7] [4] [4]) : ((566815736 - (arr_22 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_0] [3])))));
                        var_24 = var_5;
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_0] = (max((min(1820363893, 9223372036854775807)), (arr_17 [11] [i_1 + 1] [11] [i_0])));
                        var_25 = (arr_8 [i_0] [i_2] [5]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        var_26 = var_3;
                        arr_34 [i_0] = var_7;
                    }
                    var_27 += ((!(((arr_4 [i_0]) >= (arr_23 [i_1] [i_1 + 2] [i_2] [i_0] [2] [i_2])))));
                }
                for (int i_10 = 3; i_10 < 20;i_10 += 1)
                {
                    var_28 = (((0 ^ 873727564) / (((arr_17 [i_0] [i_1 - 2] [i_10] [i_0]) << (var_1 - 158)))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_43 [i_0] [i_1 - 3] [i_0] [i_11] [i_12] = (max(((var_4 ^ ((min(var_6, (arr_35 [i_0] [0] [1])))))), var_2));
                                arr_44 [i_0] [10] [i_10] [i_11] [i_12] = (arr_1 [i_0]);
                            }
                        }
                    }
                    arr_45 [i_0] [i_0] [i_0] [i_0] = ((65535 ? 566815725 : 0));
                    arr_46 [i_0] [i_1] [i_0] [i_0] = ((arr_1 [i_0]) ? (((((((arr_42 [i_0] [i_0] [i_10]) / (arr_33 [11] [11] [i_10] [2])))) ? -69 : var_7))) : (((arr_30 [i_0] [i_0] [i_0] [i_1] [i_1] [1]) << (((((arr_24 [i_0] [i_1 - 1] [i_0] [i_0] [16]) - var_0)) - 26227)))));
                    var_29 = (!-4384);
                }
            }
        }
    }
    #pragma endscop
}
