/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 11014154142314352526;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] |= 216;
        arr_3 [i_0] &= ((((((arr_1 [i_0]) ? 32096 : (arr_0 [i_0] [i_0])))) ? 7109 : var_9));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = (arr_6 [i_1 - 2] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_19 = ((((arr_8 [i_2] [i_3 + 1] [i_3] [i_3]) && (arr_10 [i_2] [i_2] [i_2] [i_2]))) ? var_15 : var_16);
                                arr_15 [i_0] [i_1 + 2] [i_2] [i_0] [i_2] [i_2] = 52241;
                                var_20 = ((((((arr_8 [i_2] [7] [i_2] [i_4]) | var_17))) ? var_0 : (arr_11 [i_0] [i_0] [i_0] [i_2] [i_0])));
                                arr_16 [i_2] = ((((((((arr_1 [i_0]) ^ var_17))) ? (1832965694419151587 >= 40) : (((arr_1 [i_4 - 2]) ? (arr_11 [i_1] [i_1] [i_1] [i_2] [i_4 - 2]) : (arr_13 [i_0] [8] [i_2] [i_3] [i_4] [i_1] [i_2]))))) != (arr_10 [i_0] [i_2] [i_3] [i_3])));
                            }
                        }
                    }
                    var_21 = (arr_10 [i_0] [i_2] [i_0] [i_2]);
                }
            }
        }
        var_22 = ((1 ? ((min(6161326894271731591, 7237676751589287498))) : (min((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), -var_17))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_19 [i_5] = (-6161326894271731603 / 1994922674);

        for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_25 [i_7] [i_6] [i_6] [i_5] = (((arr_18 [i_5 - 1]) ? (arr_18 [i_5 - 1]) : (arr_18 [i_5 + 1])));
                arr_26 [i_5] [i_5 + 1] [i_7] [i_7] = (((arr_23 [i_6 - 2]) ? (((var_11 || (arr_18 [i_5])))) : 11));
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                arr_29 [i_5] [i_6] [i_6] = ((-(arr_20 [i_6 + 2] [i_6] [i_6 - 2])));
                var_23 = ((((((arr_22 [i_5 - 1] [i_6] [i_8]) ? (arr_20 [i_5] [i_6] [i_8]) : var_16))) ? (arr_17 [i_6 + 1] [i_5 - 1]) : var_6));
                var_24 = (((arr_24 [i_6] [i_5 - 1]) ? (arr_24 [i_6] [i_5 - 1]) : (arr_24 [i_6] [i_5 - 1])));
                var_25 = (arr_20 [i_5] [i_6 - 1] [i_8]);
                arr_30 [i_6 - 1] [i_6 + 1] = var_17;
            }
            arr_31 [i_5] [i_6] [i_6] = ((arr_17 [i_5 - 1] [i_6 - 2]) ? (((arr_28 [i_5]) ? (arr_27 [i_5]) : (arr_24 [i_6] [i_6]))) : (arr_28 [i_6 + 1]));
        }
        for (int i_9 = 2; i_9 < 13;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                var_26 ^= (((arr_22 [i_5] [i_9 + 1] [i_9]) * (arr_32 [i_5] [i_5 - 1] [i_10])));
                arr_38 [i_5 - 1] [i_9 - 1] = ((-(((arr_35 [i_5] [14] [i_9] [14]) ? 54 : var_1))));
            }
            for (int i_11 = 3; i_11 < 13;i_11 += 1)
            {
                arr_41 [i_9] [i_11] = (arr_36 [i_11 - 2] [i_11 + 1] [i_11 - 2] [i_11 - 2]);
                arr_42 [i_5 - 1] [i_9] = (arr_27 [i_5]);
            }
            arr_43 [i_5 + 1] [i_5] [i_9 - 2] = (((((1349439455 ? var_15 : (arr_33 [i_5] [i_9])))) > (arr_27 [i_5 - 1])));
            arr_44 [i_5] [i_5] [i_9] |= (((arr_22 [i_5 + 1] [i_5 + 1] [i_9]) ? (((var_1 - (arr_34 [1] [i_9 + 2])))) : (arr_36 [i_5 - 1] [i_9] [i_5 - 1] [i_5])));
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 14;i_14 += 1)
                {
                    {
                        arr_53 [i_5 - 1] [i_14] [i_13] [i_14] [i_5] [i_13] = ((1994922674 ? (arr_47 [i_12 - 1] [i_14 - 1]) : (arr_47 [i_14 + 1] [i_14 + 1])));
                        arr_54 [i_5] = (arr_24 [12] [i_13 + 1]);
                        arr_55 [i_5] [i_12] [i_13] [i_14] = ((var_17 <= (!var_15)));
                    }
                }
            }
        }
        var_27 = (max(var_27, 6161326894271731576));
    }
    #pragma endscop
}
