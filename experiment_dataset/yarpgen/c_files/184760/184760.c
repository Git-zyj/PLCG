/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_8, var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = var_3;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] |= var_6;
                                var_14 = var_6;
                                var_15 = ((var_8 << (var_5 + 1912106467758561881)));
                            }
                        }
                    }
                    arr_15 [i_2 + 1] = -var_9;
                }
            }
        }
        var_16 = var_0;
    }
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        var_17 = (max(var_17, (-9223372036854775807 - 1)));

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                arr_23 [i_5] &= 219;
                var_18 = -var_7;
            }
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {

                /* vectorizable */
                for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    var_19 = -0;
                    var_20 *= (~var_1);
                    var_21 = ((var_5 ? var_2 : var_1));
                }
                for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
                {
                    var_22 = min(var_6, -var_4);
                    var_23 ^= var_5;
                }
                var_24 = ((max(var_9, -var_9)));
                var_25 = (min(var_25, (((var_11 ? (~var_3) : (((~var_0) ? (min(var_3, var_11)) : var_10)))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        {
                            arr_38 [i_5] [i_6] [i_11] [i_11] [i_6] = (max(((var_4 ? var_6 : var_6)), (!1203332132)));
                            var_26 = (max((min(var_9, var_0)), var_6));
                            var_27 *= (!var_6);
                            var_28 = var_6;
                            arr_39 [i_11] [i_11] [i_11] [i_8] [i_6] [i_11] = (min(((((min(var_5, var_3))) ? var_1 : var_1)), (max(var_6, var_3))));
                        }
                    }
                }
                arr_40 [i_5] [i_5] [i_6] [i_8] = (min((((var_7 ? var_11 : var_0))), -var_5));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                var_29 = (min(var_29, var_3));
                var_30 &= -var_11;
                var_31 = var_4;
                var_32 = (max(var_32, var_2));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            var_33 -= var_9;
                            var_34 = (var_0 ? var_7 : var_0);
                        }
                    }
                }
            }
            var_35 = (min(var_35, ((min(var_11, (var_10 || var_0))))));
            arr_51 [5] [i_5 + 1] [8] = var_8;
        }
    }
    var_36 = var_1;
    var_37 = (!var_6);
    #pragma endscop
}
