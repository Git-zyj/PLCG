/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = var_5;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((((15360 && (arr_2 [i_0 + 1] [i_0 + 1]))) ? (arr_2 [4] [i_0 - 2]) : ((min((arr_2 [i_0] [i_0 - 2]), (arr_2 [6] [i_0 + 2]))))));
        arr_4 [i_0] [i_0] = (~-1024);
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_8 [6] = (min((var_5 | var_6), (((max(var_3, (arr_7 [i_1] [i_1])))))));
        arr_9 [i_1] = 1048568;
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [i_3] [i_2] [i_3] = ((var_8 ? var_6 : var_5));

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_23 [i_2] [i_3] = var_10;
                            arr_24 [i_5] [i_5] [i_4] [i_5] [i_6] = 3335810491;
                            arr_25 [i_6] [i_3] [i_4] [i_3] [i_2] = max((min(var_9, (arr_0 [i_3]))), var_9);
                            arr_26 [i_2] [8] [i_2] [i_2] [i_3] [i_2] [i_2] = (arr_17 [i_2] [i_2] [i_3]);
                            arr_27 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] = 9634;
                        }
                        arr_28 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] = var_3;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 3; i_7 < 7;i_7 += 1) /* same iter space */
        {
            arr_32 [i_7 - 1] [i_7 - 1] [i_7 - 3] = (4293918727 & var_6);

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            arr_42 [i_9] [i_10] [i_7] [i_9] [i_10] [i_7] = (((arr_36 [i_2] [i_7 + 4] [i_7 - 1]) < var_10));
                            arr_43 [i_10] [i_9] [i_8] [i_7] [i_9] [i_2] = (!-5);
                        }
                    }
                }
                arr_44 [3] = ((var_4 ? var_5 : var_0));
            }
        }
        for (int i_11 = 3; i_11 < 7;i_11 += 1) /* same iter space */
        {
            arr_47 [8] [i_2] [i_2] = (max((((arr_17 [i_2] [i_2] [0]) ? 7212746197151139589 : (arr_17 [i_11] [6] [2]))), ((((var_4 ? var_5 : -17))))));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_55 [i_12] [i_12] [i_11] [i_2] = var_4;
                        arr_56 [i_13] [i_13] [i_13] [i_13] [i_12] [i_2] = (((arr_38 [i_11 + 4] [8] [i_13 - 1] [i_13 - 1]) <= var_2));
                    }
                }
            }
            arr_57 [i_2] [i_11] = (((arr_52 [i_2] [i_11] [i_11] [i_11] [i_11] [i_11]) ? var_1 : ((((var_10 ? 3794283870 : var_10))))));
        }
        for (int i_14 = 3; i_14 < 7;i_14 += 1) /* same iter space */
        {
            arr_61 [i_2] [i_2] [i_2] = (~var_4);
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 9;i_17 += 1)
                    {
                        {
                            arr_69 [i_17] = ((-var_5 | (arr_48 [i_14 - 3] [i_14 - 3] [i_17 - 2] [i_17])));
                            arr_70 [i_14] [i_14 + 2] [i_14] [i_14] [i_14] [i_14] = -var_7;
                        }
                    }
                }
            }
        }
        arr_71 [i_2] = var_7;
        arr_72 [i_2] [i_2] = 959156817;
    }
    for (int i_18 = 0; i_18 < 13;i_18 += 1)
    {

        /* vectorizable */
        for (int i_19 = 1; i_19 < 9;i_19 += 1)
        {
            arr_79 [i_19] = var_8;
            arr_80 [i_18] [i_18] = var_2;
            arr_81 [i_19] [i_19] = ((!(arr_77 [i_19] [i_19 + 3] [10])));
        }
        /* LoopNest 3 */
        for (int i_20 = 1; i_20 < 11;i_20 += 1)
        {
            for (int i_21 = 2; i_21 < 12;i_21 += 1)
            {
                for (int i_22 = 3; i_22 < 11;i_22 += 1)
                {
                    {
                        arr_90 [i_20] = 2145649079;
                        arr_91 [8] [i_18] [i_20] [i_21] [5] = (arr_75 [i_20] [i_20 - 1]);
                        arr_92 [i_18] [i_20] [i_20 + 2] [i_20 + 2] [i_21] [11] = (((max(var_2, var_6)) > (arr_74 [i_18])));
                    }
                }
            }
        }
    }
    var_13 = 1073741824;
    #pragma endscop
}
