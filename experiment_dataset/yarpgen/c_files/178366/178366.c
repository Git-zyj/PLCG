/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_10 = (((((arr_1 [i_3] [i_1]) ? (14758133077739257155 - var_8) : -86)) + (arr_4 [i_3])));
                            var_11 = (max(var_11, ((((var_4 / var_4) * var_4)))));
                            arr_14 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] = 48351;
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_0] = ((-5215 ? var_4 : (max(((((arr_2 [i_0]) >> (var_5 - 1664819580)))), (arr_5 [i_0] [i_1] [i_1])))));
                var_12 *= var_7;
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_13 = (max(var_13, (arr_16 [i_0] [i_1] [i_6] [i_5])));
                                arr_25 [i_0] [i_1] = (min((((~(arr_12 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 + 2] [i_6 + 1])))), (min(97, (-9223372036854775807 - 1)))));
                                var_14 = 97;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_15 = 2436443298;
                            var_16 = var_2;
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    arr_39 [i_11] [i_8] [i_8] [i_7] = 15450;
                    arr_40 [i_8] = (arr_11 [i_8] [i_11] [i_11]);
                }
                var_17 = (min(-15467, 613651240140654343));
                arr_41 [i_7] [i_8] [i_7] = var_6;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 18;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 18;i_14 += 1)
            {
                {
                    var_18 = (min(var_18, (arr_20 [i_12 - 1] [i_12 + 1] [i_12])));
                    /* LoopNest 2 */
                    for (int i_15 = 4; i_15 < 18;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            {
                                var_19 |= (arr_32 [i_12] [i_13] [i_12] [i_15]);
                                var_20 = var_4;
                            }
                        }
                    }

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        arr_59 [i_17] [i_17] [i_17] [i_12] = (arr_21 [i_12 + 1] [i_13] [i_14 + 1] [i_17]);

                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
                        {
                            arr_62 [i_18] [i_17] [i_14 - 2] [i_17] [i_18] = 218;
                            arr_63 [i_13] [i_17] = -613651240140654332;
                            arr_64 [i_18] [i_17] [i_17] [i_14] [i_17] [i_12] = (-111 & 65535);
                        }
                        for (int i_19 = 0; i_19 < 19;i_19 += 1) /* same iter space */
                        {
                            arr_68 [i_12] [i_17] = (arr_21 [i_12 + 1] [i_12] [i_12] [i_12]);
                            var_21 = (min((((20500 && 85) && ((min((arr_66 [i_17] [i_17] [i_14] [i_13] [i_13] [i_17]), 86))))), ((2147483622 || ((var_0 == (arr_22 [i_19] [i_13] [i_19] [i_17])))))));
                            var_22 = ((((~(((-2147483647 - 1) ^ var_4)))) == (((arr_45 [i_14 + 1]) ? (((arr_0 [i_14] [i_12]) / (arr_65 [i_12]))) : (arr_44 [i_19])))));
                        }
                    }
                    var_23 = 613651240140654343;
                }
            }
        }
    }
    #pragma endscop
}
