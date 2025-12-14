/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (min((var_1 | var_5), ((-((max(1, var_4)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_4] = var_6;
                                arr_16 [i_1] [i_0] [i_1] = (((-5299 ? -1 : 1)));
                                var_10 = (min(var_10, ((((1 ? var_2 : var_8))))));
                                var_11 -= ((min(var_0, (((var_5 ? var_2 : var_6))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_12 -= -10190;
                        var_13 ^= (30605 ? 10196 : (var_6 == 5));
                        var_14 = -33;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_26 [i_7] [i_1] [i_2 + 3] [i_1] [i_0] = ((((max(391948278, -1))) > 1489271134656838029));
                                var_15 = var_6;
                                arr_27 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1] = (min(-5, var_9));
                            }
                        }
                    }
                }
            }
        }
        arr_28 [i_0] [i_0] = ((-((min(var_5, 18)))));
        arr_29 [i_0] [i_0] &= (min((((((max(0, var_1))) ? 0 : 8991221442757805794))), 8991221442757805810));

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_16 ^= (min((min(((var_8 ? var_6 : var_5)), ((min(-15, 31))))), 14));
            arr_32 [i_0] [i_0] [i_8] &= (~14);
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_17 = (min(var_17, (((var_3 ? ((-112 * ((2076510139 ? 3716608285 : 28828)))) : var_8)))));
            arr_36 [5] [i_0] [13] = var_4;
        }
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
    {
        var_18 *= ((-9209 || (((7663222307906936432 ? 3514633469 : -44)))));
        var_19 = ((max((min(var_5, var_9)), 7954)));
        var_20 = (((var_1 ? var_6 : (max(var_6, 2429812932)))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 11;i_12 += 1)
            {
                {
                    arr_43 [9] [i_11] [i_12] [i_11] = ((~(~var_9)));
                    arr_44 [2] [i_11] [i_11] [i_11] = -9200;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            {

                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        var_21 = (min(var_21, 6));
                        var_22 -= ((141 ? -19 : 1966615338));
                        var_23 ^= var_0;
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            {
                                arr_62 [i_14] = ((-19889 ? ((32763 ? 32759 : -22)) : (min(510075735, var_7))));
                                var_24 = (max((2731061575 || var_6), (min(111, 5))));
                            }
                        }
                    }
                }
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    var_25 = 391948278;
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 25;i_21 += 1)
                        {
                            {
                                var_26 = ((-4807 ? ((-(max(9108, var_6)))) : var_0));
                                arr_70 [i_14] [4] [i_19] [i_13] [i_13] [i_13] [i_14] = ((((var_4 ? var_7 : 0))));
                                arr_71 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_14] = (max(14085, 43623));
                            }
                        }
                    }
                }
                var_27 *= (min(141, 1954031543));
                /* LoopNest 3 */
                for (int i_22 = 0; i_22 < 25;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 25;i_23 += 1)
                    {
                        for (int i_24 = 4; i_24 < 23;i_24 += 1)
                        {
                            {
                                var_28 = ((max(((max((-127 - 1), 9108))), var_3)));
                                var_29 = (max(var_29, var_8));
                                var_30 = (min(var_30, ((min((~-var_6), var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
