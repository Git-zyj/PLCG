/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_10 = var_0;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_11 = (min(var_11, var_8));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_12 = (arr_7 [i_3] [i_2] [i_1]);
                            arr_14 [i_0] [i_1] [i_1] [i_3] [i_1] = 0;
                            arr_15 [i_0] [i_3] = (arr_8 [i_0] [3] [i_0] [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_13 = ((!(arr_0 [i_3])));
                            var_14 = ((~(((arr_16 [i_3] [i_2] [i_1]) * 21))));
                            var_15 = ((109 ? (arr_7 [5] [i_2] [i_3]) : var_6));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_2] = (-31 - 2134904591397269629);
                            var_16 = (arr_3 [i_6] [i_3] [i_2]);
                        }
                        var_17 -= var_5;
                    }
                }

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] [i_1] [10] [i_8] [i_9] = (((arr_9 [i_0] [i_1] [i_7] [i_8] [i_9] [i_9]) ? (arr_13 [i_9] [i_8] [i_7] [i_0]) : (arr_9 [i_0] [i_1] [i_7] [i_8] [i_1] [i_9])));
                                var_18 = ((-(arr_10 [i_9] [i_9] [i_8] [2] [i_1] [i_0])));
                                var_19 = (!2134904591397269606);
                            }
                        }
                    }
                    var_20 = -7946696469621267169;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_37 [i_0] [i_0] [i_0] = (max(2, 16311839482312281997));
                                arr_38 [i_7] [i_11] = (16311839482312281968 | ((-(min(var_0, 0)))));
                                arr_39 [i_0] [i_1] [12] [i_0] [i_11] [i_0] [i_0] = ((~(((((arr_19 [i_11] [i_10] [i_0]) ? -26 : (arr_25 [i_0] [i_0] [1] [i_0] [i_0]))) / var_4))));
                            }
                        }
                    }
                    arr_40 [i_0] [i_1] = (((-19 < 226) ? (arr_6 [i_0] [i_0] [i_7]) : (~var_3)));
                }
                var_21 = (!var_8);
                arr_41 [i_0] [i_0] = -15;
            }
        }
    }
    var_22 = 2134904591397269636;
    #pragma endscop
}
