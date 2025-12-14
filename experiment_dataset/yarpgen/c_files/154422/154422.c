/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= -0;
    var_13 = (-(var_2 || var_9));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = (max((max((0 - 125), (max(4294967295, 920137011395081696)))), (-127 - 1)));
            var_14 = 920137011395081696;
            arr_6 [i_0] [i_0] = (arr_0 [i_0]);
            arr_7 [i_1] = 0;
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_15 = -29935;

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_16 += ((var_1 ^ (((var_6 ? (arr_9 [i_2]) : var_5)))));
                        var_17 = -920137011395081696;

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_18 [i_0] [i_3] [i_4] [i_5] = (((arr_14 [i_3] [i_4 + 1] [i_4 + 1] [i_4]) ? (arr_16 [i_3] [i_4 + 4] [i_4] [i_4] [i_4]) : (arr_14 [i_2] [i_4 + 3] [i_4] [i_5])));
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] [i_5] = var_3;
                        }
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            var_18 = (!var_7);
                            var_19 = (min(var_19, var_6));
                        }
                    }
                    var_20 *= (max((!var_0), ((!((((arr_2 [i_3]) ? var_5 : (arr_13 [i_3] [i_2] [i_0] [i_0]))))))));
                }
            }
        }

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_21 = var_3;
                        arr_28 [i_0] [i_0] [i_7] [i_8] [i_9] [i_9] = var_0;

                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_8] [i_9] [i_10] = (min((9223372036854775807 / 9223372036854775782), (max(((11265328809595693630 / (arr_9 [i_7]))), (arr_21 [i_0] [i_7] [i_0] [i_0] [i_10] [i_8])))));
                            var_22 *= (min((((!(!9223372036854775808)))), ((((((arr_16 [i_10] [i_7] [i_8] [i_8] [i_10]) ? var_11 : var_7))) ? (arr_29 [i_10] [i_9] [i_9] [i_8] [i_7] [i_7] [i_0]) : ((min(9, 3601244109)))))));
                        }
                    }
                }
            }
            var_23 = (min(var_23, (((!((max(920137011395081696, (arr_14 [i_0] [i_7] [i_7] [i_7])))))))));
        }
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            var_24 &= (~(((-var_9 >= (arr_24 [i_11] [i_11] [i_11 + 3])))));
            var_25 = var_4;
        }
        arr_36 [i_0] = ((((max(7, var_1))) ? var_9 : (!var_2)));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 23;i_13 += 1)
            {
                {
                    var_26 = ((12572086362536369682 ? (arr_35 [i_13]) : -16140901064495857664));
                    var_27 = (min(var_27, -125));
                    var_28 = var_8;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 24;i_15 += 1)
                        {
                            {
                                arr_48 [i_0] [i_12] [i_0] [i_14] [i_13] [i_12] [i_13] = (((arr_16 [i_13] [i_14] [i_13] [i_12] [i_13]) ? var_5 : var_9));
                                arr_49 [i_13] = (max(var_0, 18014398505287680));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
