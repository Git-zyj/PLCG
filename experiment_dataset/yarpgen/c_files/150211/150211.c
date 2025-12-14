/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_11 = 199;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_12 = (max(var_12, (((~(arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1]))))));
                            var_13 = 140;
                        }
                        var_14 = var_2;
                        var_15 = (min(var_15, -var_4));
                        var_16 = 84;
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_17 = var_6;
            var_18 = ((14 != (arr_11 [i_0 + 3] [i_0 - 1] [i_0 + 1] [i_0] [i_0])));
        }
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            var_19 -= 18;
            var_20 = arr_4 [i_6 - 1] [i_0] [i_0];
        }
        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            var_21 = (arr_5 [i_7 - 3] [i_7 + 2] [i_7 - 2]);
            var_22 = (((arr_17 [i_0] [i_0] [i_0]) >= 29));

            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_23 = (max(var_23, (((84 ^ (arr_0 [i_0] [i_0 - 1]))))));
                            var_24 = (min(var_24, (~249)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_25 = 249;
                            var_26 = ((171 ? (var_8 / var_6) : var_7));
                            var_27 = var_3;
                            var_28 = (255 * 246);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            arr_39 [i_13] = (!98);
                            arr_40 [11] [i_13] [11] = arr_13 [i_13] [i_13] [i_0];
                            arr_41 [i_0 - 1] [i_7 - 4] [i_13] [i_13] [i_0 + 3] [8] = (~31);
                            arr_42 [i_0] [i_13] [i_8] [i_13] [i_13] [i_14] [i_14] = (~194);
                            var_29 *= (((arr_25 [i_7 - 1]) + 39));
                        }
                    }
                }
                arr_43 [i_7] = ((var_2 ? (arr_36 [i_7 - 3] [5] [i_7 - 3] [i_7] [i_7 - 4] [i_7]) : (arr_12 [i_8] [i_7 + 2] [i_7 - 4])));
            }
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                var_30 ^= (arr_34 [i_15] [12] [i_7] [i_7 - 4] [i_0] [i_0 + 2]);
                var_31 = (max(var_31, -var_7));
            }
        }
        var_32 = (arr_22 [i_0 + 3] [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0]);
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 18;i_16 += 1)
    {
        var_33 = (((81 < 236) ? ((9 ? (arr_47 [15]) : 125)) : (arr_49 [i_16])));
        var_34 = 118;
        var_35 = (min(var_35, 246));
        var_36 = (min(var_36, var_8));
    }
    var_37 = 206;
    #pragma endscop
}
