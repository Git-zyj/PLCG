/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_17 -= ((-((10470880105965321915 ? 10470880105965321915 : var_7))));
        var_18 = var_16;
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_4 [i_1] = ((-((var_15 ? var_3 : 96))));
        arr_5 [11] [11] = ((-((5994940105443760134 ? var_14 : var_5))));
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        arr_8 [1] = ((var_5 ? var_0 : 1210098170));
        arr_9 [i_2] = -282543974;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = ((((max(var_3, 10470880105965321920))) ? var_7 : 0));
        var_19 |= (min(-7019594787651390771, 854481195009981695));
        var_20 = ((!(((1 ? var_10 : 5252639541424148948)))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_21 = -7019594787651390771;

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_22 = (min(var_22, (3437953806 && var_13)));
                            arr_28 [i_4] [i_4] [1] [i_5] [i_7] [i_4] [i_8] = (~76);
                            arr_29 [i_4] [i_5] [i_7] [i_5] = (((((5994940105443760134 ? 18446744073709551615 : 1))) ? 0 : 2713341985027001142));
                            arr_30 [i_4] [i_5] [i_5] = (!var_8);
                        }
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            var_23 = (min(var_23, (((var_16 ? var_12 : -9223372036854775784)))));
                            arr_33 [i_4] [i_5] [i_6] [7] [i_5] = ((var_14 ? -120 : var_3));
                            var_24 = (!-282543974);
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            arr_37 [5] [6] [i_7] [i_5] [4] = ((1 ? -5252639541424148977 : var_15));
                            var_25 = (min(var_25, -var_13));
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_26 = ((var_7 ? var_11 : ((var_2 ? 8260331323610304227 : var_5))));
                            var_27 *= (var_14 * 0);
                            arr_41 [i_5] [i_5] = var_2;
                        }
                    }
                }
            }
        }
        var_28 = (8796093022207 & 5020888750471446020);
    }
    #pragma endscop
}
