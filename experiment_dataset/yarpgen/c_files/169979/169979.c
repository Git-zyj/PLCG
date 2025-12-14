/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] |= ((var_4 ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 - 2])));
        var_19 *= (arr_0 [0] [i_0 - 3]);

        for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_20 *= (!-var_9);
                var_21 = ((var_12 ? var_5 : (~19893)));

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_22 &= ((~((var_6 ? 35687 : var_9))));
                    var_23 = (max(var_23, (((((((arr_1 [i_2] [1]) ? (arr_2 [8]) : var_8))) ? (arr_8 [i_2] [i_2] [i_2]) : 1139639513)))));
                    var_24 = ((((-(arr_1 [i_0 - 3] [i_0 - 3]))) % ((((arr_6 [i_0]) && 238)))));
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_18 [i_1] = (~9);
                        var_25 = ((-(arr_16 [i_0] [2] [i_5] [i_5] [i_4 - 1] [i_0 - 2])));
                        var_26 = ((var_3 && (((45643 ? 0 : var_3)))));
                    }
                }
            }
            arr_19 [6] [i_0 + 2] [6] |= (-21974 - 2705573563);
            arr_20 [i_1] = -var_4;
        }
        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_27 = -1812134297;
            arr_23 [i_6] = 870202955;
        }
        for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_28 ^= ((-(((arr_4 [i_0]) ? var_1 : (arr_12 [3] [3] [i_0] [i_0])))));
            arr_26 [4] [i_7 + 3] [4] &= (((arr_22 [i_7] [4] [i_0]) % ((10364277482064992059 ? var_8 : (arr_24 [i_0])))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_34 [i_0] [i_7] [i_7] [i_9] = -var_2;
                            var_29 = var_18;
                        }
                    }
                }
            }
            var_30 = ((var_3 ? (((arr_5 [i_7] [i_7]) ? -1139639513 : (arr_9 [i_0] [i_7] [i_7 + 1] [i_7] [i_0]))) : (arr_25 [i_0 + 2] [i_7 - 1] [i_7])));
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            arr_37 [i_11] = 116;
            arr_38 [i_11] [i_11] [i_11] = ((-114642197 ? (64839 || 132) : 19893));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_31 = ((-((var_15 ? 18322989112585281178 : 13))));
                    var_32 = ((247 ? -22 : (arr_7 [i_13] [i_0 + 2])));
                    var_33 &= -9086;
                    var_34 = 41;
                }
            }
        }
    }
    var_35 = var_10;
    var_36 = (min(var_36, (((var_2 * (((-453945098 / -1139639510) * (177 / var_5))))))));
    #pragma endscop
}
