/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((((arr_4 [i_4] [i_0]) + (max((max((arr_8 [i_0] [i_0] [i_2] [i_3 + 1] [i_4 - 1] [i_0]), (arr_13 [i_4] [i_3] [i_2] [i_1 + 4] [i_0]))), ((1414396318105052989 ? -1 : -348166232)))))))));
                                arr_15 [i_0] [i_2] [i_4 + 3] [i_3 + 1] [i_0] = (!152);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_18 = (arr_20 [i_1 + 1] [i_1 + 3] [i_6]);
                            var_19 = (min((arr_19 [i_6 + 1] [i_6] [i_6] [i_6 + 2]), (arr_19 [i_6] [i_6] [i_6] [i_6 + 2])));
                        }
                    }
                }
                var_20 = (((arr_13 [i_0] [i_1] [i_0] [i_0] [i_0]) / var_6));

                for (int i_7 = 2; i_7 < 7;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_31 [i_8] [i_1] [i_8] [i_9] = (min((arr_22 [i_7 + 3] [i_7 + 3] [i_7 - 1] [i_7]), (((~(-7180939001662987842 | 1414396318105052989))))));
                                var_21 = ((~((((arr_16 [i_1 + 4] [i_1 + 4] [i_1 + 2] [i_1]) <= (arr_14 [i_1 + 2] [i_1 + 4] [i_7 + 2] [i_7 + 3] [i_7 + 3] [i_7]))))));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_22 = ((!((max(4, 15)))));
                        arr_36 [i_0] [i_10] = (((((-(arr_1 [i_1 + 4])))) ? ((~(arr_18 [i_1 + 3] [i_7 + 2] [i_10]))) : (arr_5 [i_0] [i_1 - 1] [i_7 - 1] [i_10])));
                        arr_37 [i_10] = (min((((arr_26 [i_10]) / (max((arr_25 [i_10] [i_10] [i_10] [i_10] [i_1] [i_0]), var_0)))), ((max(var_1, (arr_6 [i_0] [i_10]))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 7;i_11 += 1) /* same iter space */
                    {
                        var_23 = (arr_2 [i_1 + 3] [i_7 + 2]);
                        var_24 = (((arr_35 [i_1 + 1] [i_7 + 3] [i_7] [i_7 - 2]) ? 18446744073709551615 : (arr_40 [i_1 + 1] [i_7 + 3] [i_11 - 1] [i_11] [i_11] [i_11])));
                        var_25 = (arr_17 [i_11 + 3] [i_11 + 3] [i_11 + 1] [i_11]);
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 7;i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_0] = (arr_24 [i_0]);
                        arr_45 [i_0] [i_7] = (12 - 0);
                        var_26 = (((arr_38 [i_0] [i_1 + 3] [i_7 - 1] [i_12] [i_12] [i_12 + 1]) / (arr_5 [i_0] [i_1 + 3] [i_7 - 1] [i_12 + 3])));
                    }
                    var_27 = (min((min(18446744073709551615, 20)), -2095883762));
                }
            }
        }
    }
    var_28 = (((1 % 51215) ? -348166222 : 4));
    #pragma endscop
}
