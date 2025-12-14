/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (-(((15 == (arr_0 [i_0])))));
        arr_3 [i_0] = max((((!((min(17454128172880611172, 1)))))), (((arr_1 [i_0]) ? (arr_0 [i_0]) : var_1)));
        arr_4 [2] [5] = 7305809739143857357;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((-(((max(1705865185, var_9)) & var_4))));
        arr_9 [i_1] = 4032759509;
        arr_10 [23] = (arr_7 [i_1]);

        /* vectorizable */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            arr_13 [i_1] [i_2] [i_2] = var_4;

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_16 [i_1] [i_2] [13] = (arr_6 [i_3]);
                arr_17 [i_2] = 262207787;

                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    arr_20 [i_1] [22] [22] [i_4] = (((arr_19 [i_1] [i_4] [i_3] [i_2 + 3] [i_4] [i_1]) ? var_1 : (arr_19 [i_1] [i_4] [i_1] [i_2 + 1] [16] [16])));
                    arr_21 [1] [i_2 + 1] [i_3] [i_2] [i_2 + 3] = ((-((1973423526 ? (arr_12 [i_2] [14] [i_4]) : -6484080517859294513))));
                    arr_22 [i_2] [i_3] [2] [i_2] = (arr_5 [12] [2]);
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_25 [i_3] &= (-2147483647 - 1);
                    arr_26 [i_2 + 1] [i_2] [i_3] = var_2;
                }
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_29 [20] [2] [8] = arr_5 [i_1] [i_6];
                arr_30 [i_2] = (arr_14 [i_1] [i_2 + 3] [i_6]);

                for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                {
                    arr_35 [i_7] [i_2] [i_2] [i_1] = var_2;
                    arr_36 [i_2] [23] [15] [i_7] = -var_13;
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    arr_40 [i_1] [i_2] [i_1] [i_1] = (arr_37 [i_1] [i_2 + 1] [i_2] [i_6] [i_8]);
                    arr_41 [1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2] = (arr_33 [9] [i_2 + 1] [i_6] [i_6] [i_8] [i_2 + 1]);
                    arr_42 [i_2] [i_6] [1] [9] [i_8] [10] = ((var_3 ? (arr_39 [i_2] [i_2 + 3]) : (arr_39 [i_2] [i_2 + 1])));
                }
                arr_43 [9] [i_2 + 2] [i_2] [i_2] = (((arr_32 [i_2 + 3] [i_2 + 1] [i_2] [i_2 + 3]) ? (arr_32 [i_2 - 1] [20] [i_2] [i_2 + 2]) : (arr_32 [i_2 + 3] [23] [i_2] [i_2 + 2])));
            }
            arr_44 [i_2] [i_2] = (262207787 ? (arr_38 [i_1] [2] [i_2 + 3] [19] [19]) : (arr_34 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2]));
            arr_45 [i_2] [i_1] [i_2] = -var_1;
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_49 [i_9] = var_4;
        arr_50 [i_9] = (arr_1 [i_9]);
        arr_51 [7] = ((arr_38 [i_9] [i_9] [i_9] [i_9] [i_9]) ? var_7 : (arr_31 [i_9] [i_9] [i_9] [i_9] [22] [i_9]));
    }
    var_14 = (max((max((min(var_1, 4032759508)), ((max(4032759508, var_12))))), 1653394289));
    var_15 = var_6;
    var_16 = ((((((!(var_1 + var_11))))) & var_3));
    #pragma endscop
}
