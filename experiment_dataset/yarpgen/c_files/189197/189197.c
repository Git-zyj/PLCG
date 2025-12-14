/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 -= var_6;
        arr_2 [i_0] = var_1;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_14 += ((var_8 ? var_3 : var_5));
        var_15 = var_9;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_16 = (min(var_16, (((var_11 ? (((((var_0 ? var_11 : var_11))) ? var_7 : ((var_7 ? var_8 : var_5)))) : (((var_8 ? var_10 : var_2))))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_17 = var_1;
            var_18 = var_7;
            var_19 = ((var_8 ? var_11 : var_5));
            arr_12 [i_2] = var_2;
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_20 = var_2;
            var_21 = var_11;
            var_22 = (max(var_22, ((((((var_9 ? var_2 : var_4))) ? ((var_1 ? var_10 : var_10)) : ((var_5 ? var_11 : var_2)))))));
        }
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    {
                        var_23 = ((((var_1 ? var_5 : var_7))) ? ((var_5 ? var_6 : var_10)) : ((var_9 ? var_0 : var_0)));
                        var_24 -= (((((var_6 ? var_4 : var_9))) ? ((var_10 ? var_4 : var_2)) : ((0 ? -3 : 153))));
                        var_25 += ((var_4 ? var_9 : var_2));
                        arr_22 [5] [5] [9] = var_4;
                        arr_23 [i_7 - 3] [i_6] [i_2] [i_2] [i_2] = var_0;
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_26 += var_5;
            var_27 += var_2;
        }
        var_28 = var_5;
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_29 = var_2;

        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_30 = ((var_6 ? var_2 : ((var_10 ? var_2 : var_2))));
            arr_32 [i_10] [i_9] = var_6;
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            {
                var_31 = (max(var_31, (((var_8 ? ((var_8 ? var_4 : var_10)) : var_11)))));
                var_32 = var_11;
                arr_37 [i_12] [i_11] [i_11] = var_11;
                arr_38 [i_12] [13] [i_12] = var_8;
            }
        }
    }
    var_33 *= var_8;
    #pragma endscop
}
