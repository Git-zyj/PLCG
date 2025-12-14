/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 = (min(4294967295, (((((var_3 >> (((arr_1 [i_0]) - 72)))) == var_11)))));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_17 = (max(var_17, (arr_2 [i_0 + 1] [i_0 + 1] [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_9 [i_0 + 1] [i_3] [i_2] [i_2] [i_3] [i_2] = ((max((arr_1 [i_1 + 1]), 1)));
                        var_18 = (max(14240574580283456102, (arr_7 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3])));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            arr_13 [i_0] = (((((288230101273804800 ? (arr_11 [i_0 + 1]) : (arr_8 [i_0] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (4206169493426095513 - 1) : 4294967295));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_19 = (arr_1 [i_0]);

                        for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_4 - 1] [i_5] [i_6] [16] [i_7] &= ((arr_4 [i_0 + 1] [i_4 + 1] [8] [i_5]) ? 4294967279 : (arr_4 [i_0 + 1] [i_4 - 1] [4] [2]));
                            var_20 = (arr_17 [i_0] [i_4] [i_5] [i_7]);
                            arr_22 [i_0] [i_0 + 1] [i_0] [i_6] [i_0] [i_0] = ((12582347034552766283 ? (arr_1 [21]) : var_11));
                        }
                        for (int i_8 = 2; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            var_21 = (arr_20 [i_8 + 1] [i_0] [14] [i_5] [i_0 + 1] [5] [i_0]);
                            var_22 = (max(var_22, ((((arr_11 [i_4 - 1]) ^ 4294967292)))));
                        }
                        for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_6] = (((arr_8 [5] [21] [i_4 - 1] [20] [i_4 - 1] [i_4]) < (arr_20 [i_0] [i_0] [11] [i_5] [i_5] [i_6] [i_6])));
                            arr_31 [i_0] [i_0] [i_6] [i_0] [i_0] = (arr_1 [i_0]);
                            arr_32 [i_0] [i_4] [i_4 - 1] [i_0] [i_6] [i_9] [i_6] = ((~(arr_19 [i_6] [i_0 + 1])));
                            arr_33 [i_6] = ((4294967280 | (arr_14 [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 1])));
                        }
                        for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
                        {
                            var_23 = 0;
                            var_24 = (arr_3 [i_0]);
                            var_25 = (~(arr_1 [i_0 + 1]));
                            var_26 = ((!(arr_27 [i_10] [i_6])));
                        }
                        arr_37 [i_6] = (((arr_11 [i_4 + 1]) & (arr_11 [i_4 + 1])));
                    }
                }
            }
        }
    }
    var_27 = var_2;
    var_28 = var_11;
    var_29 = var_7;
    #pragma endscop
}
