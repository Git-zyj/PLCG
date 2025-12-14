/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = (min(var_18, var_0));
            arr_6 [i_1] = (arr_1 [i_0]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [i_0] [i_1] [i_1] [i_4] = (arr_7 [i_0] [i_4] [i_2]);
                            arr_16 [i_0] [i_0] [i_2] [i_1] [i_0] [i_3] = arr_13 [i_0] [i_0] [i_0] [i_3] [i_0];
                        }
                    }
                }
            }
            var_19 -= (((((((max(var_12, var_10))) + (var_8 | var_0)))) && ((((max(var_7, (arr_10 [i_0] [i_0] [0]))) & ((var_5 + (arr_9 [i_0] [i_1] [1] [0]))))))));
        }
        arr_17 [i_0] [i_0] = var_15;
        arr_18 [i_0] = (arr_14 [6] [6] [6] [i_0] [i_0] [8]);

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_20 = ((((min((arr_1 [i_5]), (var_5 | var_11)))) && (arr_5 [i_0] [i_5])));
            var_21 += (((arr_0 [i_0]) - var_4));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_22 ^= var_4;
                        var_23 = (min(var_23, var_4));

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_24 = (arr_11 [i_0] [i_0] [i_0] [i_8] [i_8]);
                            var_25 = (max((arr_30 [i_8] [i_7] [i_5] [i_7] [i_7] [i_8]), (max(((var_0 * (arr_31 [i_0] [i_0] [i_0] [i_7]))), (((var_5 ^ (arr_9 [i_0] [i_8] [i_5] [i_7]))))))));
                            var_26 = var_0;
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            arr_34 [i_0] [i_5] [i_5] [i_9] [i_9] = (arr_4 [i_0] [i_7] [i_9]);
                            arr_35 [i_0] [i_5] [i_5] [i_9] [i_9] = (((arr_20 [i_0] [i_9]) && (((arr_30 [i_9] [i_5] [i_9] [1] [i_0] [7]) > (arr_33 [i_0] [0] [i_6] [i_7] [i_9] [i_7] [i_0])))));
                        }
                        var_27 = min((arr_28 [i_7] [i_5] [i_5] [i_7]), (((((arr_13 [i_0] [i_5] [5] [i_0] [5]) + 2147483647)) << (((((arr_13 [i_0] [i_5] [i_0] [i_0] [i_7]) + 598295945)) - 18)))));
                    }
                }
            }
        }
        var_28 = var_9;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        arr_38 [17] [i_10] = ((((((arr_36 [i_10]) != var_13))) == var_4));
        var_29 = (15 >= 1395);
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            {
                var_30 *= (max((((arr_43 [6]) * (arr_43 [2]))), (max((arr_40 [10] [12]), var_16))));
                var_31 -= var_14;
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_32 = (i_11 % 2 == zero) ? ((max((((arr_49 [i_12] [i_12] [i_11] [i_14] [1] [i_15]) * (min((arr_45 [i_11] [i_11] [9] [i_11]), (arr_44 [i_11]))))), var_3))) : ((max((((arr_49 [i_12] [i_12] [i_11] [i_14] [1] [i_15]) / (min((arr_45 [i_11] [i_11] [9] [i_11]), (arr_44 [i_11]))))), var_3)));
                                var_33 = (min(var_7, var_15));
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = (max(var_34, var_15));
    #pragma endscop
}
