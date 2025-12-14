/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] = 32766;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_16 = ((!((((arr_7 [i_3] [i_1] [i_2]) ? (arr_7 [i_3] [i_1] [i_0]) : (arr_7 [i_0] [i_2] [i_0]))))));
                            arr_11 [15] [i_1] [i_3] = (max(1, (arr_2 [i_0])));
                            arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] = (arr_7 [i_1] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_19 [i_4] = ((~((((min(-1, (arr_18 [i_4] [i_4] [i_4] [i_4])))) ? (arr_1 [i_4 + 1]) : var_1))));
                    arr_20 [i_4] [i_5] [6] = ((~(arr_10 [i_4] [i_4 - 2])));

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 7;i_8 += 1) /* same iter space */
                        {
                            var_17 = var_15;
                            var_18 = (~1);
                            arr_27 [i_4] [i_5] [7] [i_4] = (((arr_21 [i_8] [i_5] [i_5] [i_7] [i_8 + 2] [i_4]) ? (max((max(-1962506192, (arr_15 [i_5]))), (arr_8 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 3]))) : (arr_23 [i_8 - 1] [i_8 + 3] [i_8 + 2] [i_4 + 1])));
                        }
                        for (int i_9 = 1; i_9 < 7;i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_4 - 1] [i_5] [i_4] [i_7] [i_5] [i_5] [i_4 - 2] = min((arr_17 [i_4] [i_4 + 1] [i_9] [i_9]), var_8);
                            arr_31 [i_4] [i_5] [i_4] [i_6] [i_9] [i_9] [i_7] = ((7 ? (min(((var_4 ? 26390 : var_0)), var_4)) : -1448895894));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_19 = (min((!4078580638), (min(var_6, (arr_3 [i_4] [i_6] [i_7])))));
                            arr_35 [i_4] = var_9;
                            arr_36 [i_4] [i_4] [i_7] [i_10] = (min(1, (min(-1448895910, (arr_15 [i_4 - 2])))));
                            var_20 = var_4;
                            var_21 = arr_24 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4];
                        }
                        var_22 = (min((arr_15 [i_4]), (arr_9 [2] [2] [i_6] [i_4] [i_6] [10])));
                        arr_37 [i_4] [i_6] [1] [i_4] = (((var_1 ? (((-(arr_7 [i_4] [i_5] [i_6]))) : 3862942305))));

                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 9;i_11 += 1) /* same iter space */
                        {
                            arr_40 [i_4] [i_4] [i_4] [i_4] [i_4] = ((((((arr_23 [i_4 - 1] [i_5] [i_6] [i_7]) ? var_15 : var_3))) ? (arr_4 [i_4 + 1] [i_11 - 1] [i_11 - 3]) : ((808153917185759034 ? var_1 : (arr_24 [i_4] [8] [i_5] [i_6] [i_4] [i_11])))));
                            var_23 -= (arr_5 [i_5]);
                            arr_41 [i_4] [8] [i_6] [7] [i_4] = (((((~(arr_16 [i_5] [i_6] [i_11])))) ? ((var_8 ? var_6 : (arr_13 [i_4] [i_4]))) : (arr_26 [i_4] [i_4] [i_4])));
                        }
                        for (int i_12 = 3; i_12 < 9;i_12 += 1) /* same iter space */
                        {
                            arr_44 [i_5] [i_4] [i_5] [i_5] [i_5] = (max((min(49635, (arr_23 [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 + 1]))), (arr_16 [i_4] [i_5] [3])));
                            var_24 = var_7;
                            var_25 = -var_4;
                            var_26 = (arr_13 [i_12] [i_5]);
                            var_27 -= (min((((!((min((arr_21 [i_12] [i_5] [i_6] [i_5] [i_5] [i_4]), var_7)))))), (min((arr_43 [i_4 + 1]), 3761026778))));
                        }
                    }
                    arr_45 [i_4] = (min((arr_38 [i_4] [i_4] [i_6] [i_5] [3] [i_5] [i_5]), (arr_28 [i_4 + 1])));

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_28 = var_15;
                        arr_48 [i_4 - 2] [i_4] [i_4] [8] = (arr_32 [5] [i_4] [5] [i_6] [i_13]);
                        var_29 ^= (arr_21 [i_4] [i_4] [i_4 - 2] [i_13] [i_6] [i_4]);
                        arr_49 [i_4] [i_5] [i_6] [i_13] = (arr_26 [i_4] [i_5] [8]);
                    }
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        var_30 = (max(var_30, (arr_39 [i_4] [i_4] [i_4] [i_5] [i_4 + 1])));
                        var_31 = -37;
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        arr_55 [i_4] [i_4] [i_4] [i_4] = (min((arr_4 [i_4] [i_4 - 2] [i_4 + 1]), (~510)));
                        var_32 -= (arr_23 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_15]);
                    }
                }
            }
        }
    }
    var_33 = var_6;
    var_34 = (min(var_34, var_8));
    #pragma endscop
}
