/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = arr_4 [i_0 + 1] [i_1 - 2];
                var_16 = (max(var_16, var_10));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] = (((((var_0 << (-118 + 138)))) ? var_7 : 109));
        arr_10 [i_2] |= 87;
        var_17 += (((arr_5 [i_2] [i_2]) ? (var_6 & -73) : var_4));
    }
    for (int i_3 = 1; i_3 < 7;i_3 += 1)
    {
        arr_13 [i_3] = ((-76 ? ((min(var_2, var_0))) : ((var_1 + (((arr_2 [i_3]) ? var_6 : var_3))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_17 [i_3] = var_2;
            var_18 -= (((arr_16 [4]) ? var_6 : var_8));
            var_19 = (((((var_5 ? var_13 : (arr_16 [i_3])))) ? -26 : var_9));
            var_20 = ((var_12 ? 127 : var_4));
            arr_18 [i_3] [i_3] = ((var_11 ? ((-(arr_6 [i_3] [i_4]))) : var_4));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_26 [i_3] [i_5] [i_3] [i_7] = ((((((((93 ? 87 : -119))) ? 72 : -127))) ? (((arr_2 [i_3 - 1]) ? (arr_2 [i_3 - 1]) : (arr_2 [i_3 - 1]))) : (!var_13)));
                        var_21 = (max(var_21, (((((min(-64, (arr_6 [i_3 + 4] [i_3 + 1])))) + (~12))))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_22 = ((var_3 ? -70 : ((-(arr_25 [i_3] [i_7] [i_8])))));
                            var_23 = (min(var_23, (((-20 ? 16 : 123)))));
                            arr_29 [i_3] [i_3] [i_3] [i_6] [i_7] [i_8] [i_8] = var_8;
                            var_24 ^= ((var_6 ? var_3 : var_4));
                        }
                        for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_3] [i_3] [i_3] [i_9] = -17;
                            var_25 = (((((arr_11 [i_3] [i_9 + 1]) * 71)) / (((arr_24 [i_5] [i_3]) ? var_13 : 12))));
                            var_26 -= ((63 ? (((arr_8 [i_5] [i_3 + 3]) ? -20 : var_1)) : ((max((arr_5 [i_3 - 1] [i_9]), var_8)))));
                            var_27 = (min(var_27, ((max(((122 ? ((85 ? -88 : 104)) : ((max(var_3, 122))))), ((min(var_8, (-8 || var_6)))))))));
                            var_28 += (min((((var_11 & var_2) ? -62 : var_13)), ((((min(var_1, var_14))) ? (((arr_5 [i_3] [i_6]) * 94)) : (arr_24 [i_6] [i_9])))));
                        }
                        for (int i_10 = 2; i_10 < 9;i_10 += 1) /* same iter space */
                        {
                            var_29 = (min(var_29, var_0));
                            var_30 *= var_11;
                            arr_36 [i_10] [i_3] [i_7] [i_3] [i_3] [i_3] [i_3] = ((var_12 ? 16 : ((((arr_34 [i_3] [i_3] [i_3] [i_10 + 2] [i_3]) || var_8)))));
                        }
                    }
                }
            }
            var_31 -= ((-((((((arr_4 [i_3] [i_3]) ? (arr_16 [4]) : var_9))) ? (!-1) : ((min(5, -127)))))));
            var_32 = (max(var_32, ((min((((122 + -65) ? var_1 : ((max(var_3, (arr_15 [0] [i_3] [0])))))), (((arr_28 [i_3] [i_3] [i_3] [i_5] [i_5] [i_3]) ? var_8 : (arr_34 [i_5] [i_5] [i_3 - 1] [i_5] [8]))))))));
            var_33 += var_12;
        }
    }
    #pragma endscop
}
