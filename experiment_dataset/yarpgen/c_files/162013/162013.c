/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_5;
        arr_3 [i_0] [i_0] = var_10;
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1 - 1] = (~(~var_10));
        var_16 = var_0;
        arr_7 [i_1] [i_1] = var_11;
        arr_8 [i_1 - 3] = var_3;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_17 = (min(var_17, (((~(var_1 & var_7))))));
                var_18 += var_2;
                arr_18 [i_2] [i_4] = var_5;
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_19 = (~var_1);
                var_20 = (max(var_20, var_2));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_26 [i_2] [i_3 - 1] = ((~(!var_5)));
                            var_21 &= var_13;
                            arr_27 [i_2] [10] = var_15;
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                arr_31 [i_2] [i_2] = (!var_1);
                var_22 *= var_1;
                var_23 = var_15;
                var_24 = (~var_0);
                arr_32 [i_2 + 1] [i_2] = (-var_3 > var_14);
            }
            var_25 = -var_4;
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
        {
            arr_35 [i_2] [i_2] = (!var_6);
            var_26 = var_11;
            var_27 = (~var_1);
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_28 = (max(var_28, (!var_13)));
                            var_29 = var_10;
                            arr_46 [i_2] [i_2] [i_11] [i_12] [i_11] = (var_0 / var_9);
                            var_30 -= var_14;
                            var_31 = (min(var_31, (!var_8)));
                        }
                    }
                }
            }
            var_32 = var_9;
            var_33 = var_6;
        }
        var_34 = var_12;
    }
    /* LoopNest 2 */
    for (int i_14 = 3; i_14 < 19;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            {
                var_35 = ((~(!var_13)));
                arr_53 [0] [4] [4] &= (!var_4);
            }
        }
    }
    #pragma endscop
}
