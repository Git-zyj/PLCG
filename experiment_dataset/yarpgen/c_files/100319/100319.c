/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((min(var_0, var_10)))), var_12));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 += (--1);
            var_16 = (((((var_3 << (var_12 - 389605789)))) && ((((var_13 ? var_9 : var_13))))));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_0] = (max((((var_3 != (!var_9)))), var_0));
                arr_9 [i_0] [i_1] [i_2] = var_6;
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_17 = var_8;
                var_18 = var_7;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_19 = (!1);
                            var_20 = (max(var_20, ((((~(var_1 ^ var_3)))))));
                            var_21 = (min(var_21, var_4));
                        }
                    }
                }
                arr_17 [i_0] [i_3] [i_3] = (min(1, var_5));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_22 = var_1;

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_24 [i_7] [i_1] [i_0] = (((~16776742134546874552) | (((var_8 ? var_6 : var_4)))));
                    var_23 = var_12;
                }
                arr_25 [i_1] [i_1] = 7;
            }
            var_24 = 2666298826876301117;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_25 = var_7;
            var_26 = var_1;
            var_27 -= -var_11;
        }
        var_28 = var_8;

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        var_29 = (!-3913293643305274011);
                        var_30 = (min(var_30, ((min(((max((!var_13), 1048575))), var_3)))));
                    }
                }
            }
            var_31 *= (max((min(var_2, var_1)), (((var_8 ? (min(var_9, var_7)) : -var_5)))));
        }
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        arr_37 [i_12] = ((!((max((max(var_13, var_11)), ((min(var_7, var_4))))))));
        var_32 = (!0);
        var_33 *= (!(((min(0, 0)))));
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        var_34 = var_3;
        var_35 = ((max((-9223372036854775807 - 1), var_3)));
        var_36 = 0;
        arr_40 [i_13] = (min((max((~var_6), (min(-3548515323988401946, 9223372036854775807)))), ((6 << (18446744073709551615 - 18446744073709551557)))));
    }
    #pragma endscop
}
