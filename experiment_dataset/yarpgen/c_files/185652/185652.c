/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = ((var_1 ? (((var_3 > (max(var_9, var_6))))) : ((((max(-30, var_3))) ? -var_5 : (var_6 != var_5)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_13 = ((var_5 ? var_0 : var_6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = var_1;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_10 [i_0] [i_2] [i_2] [8] [i_3] [i_3] = var_0;
                        var_14 = -var_2;
                    }
                    arr_11 [i_2] = (var_7 ? (((var_9 ? var_4 : var_4))) : var_1);
                    arr_12 [i_0] [i_0] [i_2] [i_0] = (((var_0 ? var_6 : var_7)));
                    var_15 = var_6;
                }
            }
        }
        var_16 |= (((((var_9 ? var_4 : var_8))) ? var_3 : var_6));
    }
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        var_17 = (var_3 ? ((var_3 ? (((var_0 ? var_6 : var_0))) : ((var_2 ? var_1 : var_6)))) : var_10);

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_23 [i_4] [i_7] [i_6 - 1] [3] = (((var_8 ? var_6 : (max(4294967294, (-9223372036854775807 - 1))))));
                        arr_24 [i_7] [i_6] [i_6] [7] [i_4] [i_4] = (max((max(var_0, ((var_5 ? var_3 : var_1)))), (var_0 / var_6)));
                        arr_25 [i_7] = (((((var_1 ? var_1 : var_1))) ? (((((var_8 ? var_2 : var_1))))) : ((var_2 ? var_4 : (max(var_1, var_3))))));
                        arr_26 [14] [i_5] [14] [14] = var_8;
                    }
                }
            }
            arr_27 [9] [9] = (min(((!(((var_8 ? var_5 : var_6))))), (var_1 && var_0)));
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {

            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                arr_33 [i_4] [2] [i_9] = var_7;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_18 = ((var_10 ? var_9 : var_6));
                            var_19 = (max(var_19, (~var_2)));
                            arr_40 [i_10] [i_10] [i_10] [i_10] [9] = ((var_0 != (!var_7)));
                        }
                    }
                }
                arr_41 [i_9 + 2] [i_8] [i_4] [i_4] = ((var_10 ? var_10 : (var_10 < var_8)));
                arr_42 [i_4] [12] [0] = (var_0 && var_10);
            }
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    var_20 = var_5;
                    var_21 = (((((var_7 ? var_7 : var_7))) ? ((var_9 ? var_3 : var_4)) : var_3));
                    arr_50 [i_12] [i_8] [i_12] [i_13] = (((((~var_5) + 2147483647)) >> (var_10 + 40)));
                }
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 16;i_15 += 1)
                    {
                        {
                            arr_57 [i_4] [i_8] [i_14] [6] [i_15] = var_2;
                            var_22 = ((var_9 ? var_1 : var_4));
                        }
                    }
                }
            }
            arr_58 [i_8] [i_4] [i_4] = var_8;
            var_23 = -1;
        }
    }
    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {
        arr_62 [i_16] = (max((!var_4), (((var_5 ? var_8 : var_1)))));
        var_24 &= ((((max(var_2, var_7))) ? (((var_8 ? var_3 : var_2))) : (min(var_5, var_1))));
    }
    var_25 = ((var_2 ? (max(((min(var_4, var_5))), var_9)) : var_3));

    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        var_26 = (min((((min(var_5, var_4)))), var_9));
        var_27 = (max(var_27, ((max((((!(var_8 & var_0)))), (min(((139 ? 9223372036854775807 : var_8)), 42964)))))));
        var_28 = ((((-9223372036854775807 - 1) ? -2031207654 : 3873)));
    }
    #pragma endscop
}
