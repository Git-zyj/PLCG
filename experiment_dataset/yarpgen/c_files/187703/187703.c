/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 += (max((((((var_12 / (arr_13 [i_0] [i_1] [i_1] [i_2] [15] [i_1])))) ? ((min((arr_3 [i_4] [i_3] [i_0]), -1))) : var_9)), (((((arr_13 [2] [10] [2] [i_3] [i_3] [i_3]) ? var_9 : var_2)) - 38958))));
                                var_14 = (min(var_10, (((var_3 == (min(var_3, var_7)))))));
                                var_15 = ((min(((2944133407617300459 ? 38958 : (arr_6 [5] [i_3] [i_3]))), var_5)));
                                var_16 = ((min(38962, (((arr_9 [i_0] [i_2] [i_3] [i_4]) && var_6)))));
                                var_17 = 6999029390423195654;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_18 = ((!(((arr_5 [i_1 + 2] [i_0 + 2] [i_0 + 2]) < (arr_5 [i_1 + 3] [i_1] [i_0 + 2])))));
                                var_19 = var_9;
                                var_20 = ((var_11 * ((var_11 / (var_10 | 26577)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((max(((var_12 ? (((var_2 ? -85 : var_10))) : (((arr_17 [i_8 - 1]) + (arr_20 [2] [2] [8] [i_7] [2]))))), 190)))));
                                var_22 = var_10;
                                var_23 = ((-((((var_2 ? -7440430935338477343 : var_11)) / var_6))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_24 = ((((((max(-1865883868, 51)) + (38989 - var_8)))) ? ((min(7440430935338477319, var_12))) : (arr_28 [5] [5] [i_13])));
                                var_25 = (!64527);
                                var_26 = (((249 * ((1 ? 203 : var_4)))));
                                var_27 = (--1865883868);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_28 = 38962;
                            var_29 = (((26575 >= 63145) + 51));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        {
                            var_30 = -1737199290;
                            var_31 = ((var_6 * (arr_37 [i_9] [i_9] [i_9] [i_16] [i_9])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 23;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        {
                            var_32 = (min(((max(2411, var_7))), (!var_9)));
                            var_33 |= (((1 + var_7) << (((((min(203, 38987)))) - 203))));
                            var_34 = 127;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 22;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 23;i_23 += 1)
                    {
                        {
                            var_35 = (15425256291626453576 * 303088174);
                            var_36 = (max(var_36, ((max((~-1531266670), ((((arr_56 [i_18] [i_18] [i_22 - 1]) ? (arr_54 [i_19]) : 26575))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_24 = 1; i_24 < 22;i_24 += 1)
                {
                    for (int i_25 = 1; i_25 < 21;i_25 += 1)
                    {
                        {
                            var_37 -= (arr_68 [20] [20]);
                            var_38 += ((32752 ? -23 : 1));
                            var_39 = (max(-2331981272794693513, 110));
                            var_40 = (((arr_63 [i_18] [i_18] [15] [i_25]) / ((var_5 ? (3040672861905945520 / var_8) : -5290000202838884908))));
                            var_41 = (-101 / -6630444791279490289);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_26 = 4; i_26 < 20;i_26 += 1)
                {
                    for (int i_27 = 1; i_27 < 22;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 23;i_28 += 1)
                        {
                            {
                                var_42 = 38947;
                                var_43 += ((26574 ? (arr_70 [i_26 - 3] [i_27 + 1] [12] [12]) : ((2390 + (arr_70 [i_26 + 3] [i_27 + 1] [14] [i_27 + 1])))));
                                var_44 = (arr_68 [i_26 + 1] [i_28]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 23;i_29 += 1)
                {
                    for (int i_30 = 2; i_30 < 21;i_30 += 1)
                    {
                        {
                            var_45 = (((3901 ? 63157 : 48984)));
                            var_46 |= (((1 ? var_5 : (89 || var_10))));
                            var_47 = -var_9;
                            var_48 *= -1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
