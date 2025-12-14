/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_16 = var_6;
            arr_5 [i_0] = var_2;
            arr_6 [1] [1] = (((((var_9 ? 1494257400 : var_5))) ? (max(((166 ? -1494257400 : -1494257398)), (var_14 && 1244613389))) : var_3));
            var_17 = ((var_2 * (((arr_1 [i_0]) ? ((max((arr_0 [i_0]), 1))) : (arr_1 [1])))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_18 = var_1;
            var_19 = -448;
            arr_9 [i_0] [i_0] [i_2] = ((var_14 ? (arr_8 [i_0]) : -1494257400));
            var_20 = -1494257398;
            arr_10 [i_0] [i_0] [i_2] |= 1;
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [10] [i_0] [i_0] = (var_12 * var_8);
                            var_21 = (min(var_21, (var_3 * var_0)));
                        }
                    }
                }
            }
            arr_23 [i_0 + 1] = ((var_8 ? var_14 : (((arr_13 [i_3] [i_0] [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_2 [i_0])))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_22 = (min(var_22, (!var_9)));
            arr_27 [i_0] = ((27513 ? -27742 : 9754940590751905963));
        }

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_23 = ((((max(var_9, var_6))) ? ((max(114, var_7))) : ((-4270386129675472807 ? (arr_26 [i_0 - 1] [i_0 + 1]) : ((1 ? 8 : 1574684591))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_37 [5] [i_9] [9] [i_10] [i_8] [i_0] &= 1494257398;
                        var_24 = ((((((arr_13 [i_0] [i_8] [i_9]) ? (arr_14 [4]) : var_3))) ? var_1 : (max((((var_7 ? var_1 : 3041249717))), (max(var_10, var_7))))));
                        var_25 *= (~895101297);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        var_26 *= (max((((max(var_15, var_7)))), ((2696349615508612297 ? (-9223372036854775807 - 1) : 232))));
                        var_27 = (((arr_12 [i_0]) ? (~var_0) : (arr_32 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_11])));
                        var_28 = (max(var_28, var_13));
                    }
                }
            }
            var_29 = (min(var_29, (((arr_35 [i_0] [i_8] [i_8] [i_0] [2] [i_8]) ? (((((var_11 ? 3366670352055732540 : 1))) ? var_10 : (arr_20 [i_0] [i_0 + 1] [i_8] [i_8] [i_8] [10]))) : var_15))));
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        var_30 = var_14;
        var_31 = var_13;
    }
    var_32 = var_5;
    var_33 = var_8;
    var_34 = var_4;
    #pragma endscop
}
