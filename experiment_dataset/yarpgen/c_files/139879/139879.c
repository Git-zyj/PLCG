/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_6;
    var_12 = ((var_3 <= (((var_10 / 7104324806244391804) / var_3))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] = ((max(var_3, var_7)));
                            var_13 = -var_8;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_4] [i_4] = (min((max(var_7, var_5)), (!1)));
                    arr_17 [i_0] [i_1] [i_0 + 3] = ((var_0 % (75 <= var_3)));
                    arr_18 [i_0] [i_1] [i_0] = (((var_9 ? var_4 : 32757)));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_14 = (((max(var_6, 413397856)) << (((min(var_3, var_4)) - 208375084))));
                                arr_28 [i_0] [i_0 + 3] [1] [i_7 + 2] [13] [i_1 - 1] [i_0] = (((var_7 || var_9) + (var_7 && var_2)));
                                arr_29 [i_0 - 1] [i_0] [i_0] [i_0] [6] [i_7 + 2] [i_7 + 1] = (((max(var_5, -19191)) - var_6));
                                var_15 = ((max(var_5, var_1)));
                            }
                        }
                    }
                    var_16 *= (min((((var_5 * var_2) ? var_6 : (~1))), (var_8 != var_0)));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_35 [i_0] [i_1 + 1] [0] [i_8] [i_0] = var_10;
                            var_17 += (!var_1);
                            var_18 = ((1 * (var_9 && var_8)));
                            var_19 += -5966142625899996384;
                            var_20 = (min(var_20, -var_0));
                        }
                        for (int i_10 = 1; i_10 < 14;i_10 += 1)
                        {
                            var_21 *= (var_3 == var_9);
                            arr_38 [i_8] [i_0] [i_8] [i_5] [i_5] [i_0] [1] = (var_2 > var_0);
                        }
                        arr_39 [7] [7] [i_0] [i_8] = (1 | 65522);
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_22 += ((var_9 / (min(var_10, (~1)))));
                        var_23 = var_10;
                    }
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                {
                    var_24 = (-2312 + 1405);
                    var_25 *= (~(-84 | 13629990732535218419));
                }
            }
        }
    }
    var_26 += var_1;
    #pragma endscop
}
