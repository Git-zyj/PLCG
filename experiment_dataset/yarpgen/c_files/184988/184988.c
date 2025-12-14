/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= 1;
    var_21 |= var_12;
    var_22 = (max(var_22, (((var_6 ? -var_12 : var_7)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (max(1, ((~(arr_2 [i_0])))));

            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                var_23 &= (((((((var_17 * (arr_8 [i_0] [i_0] [i_1] [i_1])))) == (((arr_8 [i_0] [i_0] [i_0] [i_2]) ? var_14 : 1)))) ? (min((arr_8 [i_0] [8] [i_2 - 3] [i_2]), (min(var_13, var_7)))) : (arr_0 [i_2 - 1])));
                var_24 = (max(var_24, var_14));
                arr_9 [i_1] [i_1] [i_1] = ((var_15 + (min(var_6, ((var_16 ? 1 : var_18))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_16 [i_1] [i_1] [i_1] = (arr_3 [i_3]);
                            arr_17 [i_0] [i_1] [i_0] [i_2] [i_2 - 3] [i_1] [i_2] |= (((var_0 - var_2) ? (((arr_12 [i_3] [i_3] [i_3] [i_3] [i_3]) ? (min((arr_7 [i_2] [i_4] [9] [i_4]), (arr_14 [i_3] [1] [1] [i_1] [i_4]))) : (((var_17 * (arr_0 [i_4])))))) : var_2));
                            arr_18 [i_1] [i_2] [i_3] [i_2] [i_1] [i_1] = (i_1 % 2 == 0) ? ((max(var_0, ((((((min((arr_13 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0]), 1))) + 2147483647)) >> ((((~(arr_10 [i_1] [i_2] [i_1] [i_1]))) + 44095))))))) : ((max(var_0, ((((((min((arr_13 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0]), 1))) + 2147483647)) >> ((((((~(arr_10 [i_1] [i_2] [i_1] [i_1]))) + 44095)) + 17770)))))));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_25 = (arr_3 [i_0]);
                var_26 += (arr_8 [i_0] [i_1] [8] [1]);
            }
            var_27 -= (arr_14 [i_1] [i_1] [i_0] [i_0] [i_0]);
            arr_21 [i_0] [i_1] [i_1] = 549755811840;
        }
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            arr_24 [i_0] = (arr_20 [i_0] [i_6] [i_6] [i_6 + 1]);
            arr_25 [i_0] = ((!(((((arr_19 [i_0]) ? 1 : 1))))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_30 [i_0] [i_7] &= (((((((min(var_0, (arr_28 [1])))) ? var_13 : (arr_8 [i_0] [i_7] [i_7] [i_7])))) == (arr_11 [i_7] [4])));
            var_28 = (min(var_28, -7457089484695572441));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_34 [i_0] [i_8] [i_8] = ((arr_23 [i_0] [i_8]) ? var_13 : (((arr_19 [i_8]) ? (arr_3 [i_8]) : var_13)));
            arr_35 [i_0] [i_8] = (~var_7);
            arr_36 [i_8] [i_0] [i_0] = (((arr_32 [i_8] [i_8] [i_0]) || ((!(arr_13 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0])))));
        }
        var_29 += (arr_33 [i_0] [11] [i_0]);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_30 ^= -116;
        arr_40 [i_9] = (((arr_39 [i_9]) != var_13));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_31 = (min(var_31, 32767));
        arr_43 [i_10] [i_10] = var_0;
    }
    #pragma endscop
}
