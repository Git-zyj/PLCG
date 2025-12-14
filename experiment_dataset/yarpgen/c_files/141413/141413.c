/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_20 = ((~(arr_0 [i_0 - 1] [i_0])));
        arr_2 [i_0] = 7249452222159814014;
        var_21 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = -var_16;
        arr_7 [i_1] [i_1] = (arr_4 [i_1]);
        arr_8 [i_1] = (arr_0 [12] [12]);
        var_22 = (((arr_0 [i_1] [20]) ? ((~(arr_0 [18] [18]))) : ((268435440 ? (arr_0 [i_1] [1]) : (arr_0 [i_1] [0])))));
    }
    var_23 = (((((((min(10006816542506833604, 8439927531202718012))) ? var_15 : 220))) ? var_15 : var_0));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                arr_13 [i_3] [i_3] [4] = var_16;

                /* vectorizable */
                for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    var_24 = 268435440;
                    arr_16 [i_4] [i_2] [i_2] [i_4] = ((arr_15 [i_4 - 2] [i_4]) ? (arr_12 [i_4 + 1]) : (arr_4 [i_2]));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_25 = (((arr_20 [i_5] [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]) ? (arr_20 [9] [10] [i_5 - 2] [i_5] [i_5 - 1] [i_5 - 2]) : 131071));
                                arr_24 [i_7] [i_6] [i_5 + 1] [i_5] [i_5] [8] [i_2] = 4026531855;
                                arr_25 [i_2] [8] [i_2] [i_3] [i_5] [i_6] [i_6] &= ((var_10 ? ((-(arr_23 [11] [i_3] [i_5] [i_6] [10] [7]))) : 95));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_32 [i_2] [i_8] [i_5] [i_2 - 2] [i_2 - 2] [i_2] |= 268435440;
                                arr_33 [i_8] [i_3] [i_3] [i_3] [i_3] [1] [i_3] = 224;
                                var_26 = (max(var_26, ((((arr_30 [4] [i_2] [i_3] [i_2] [i_2 + 2]) ? (arr_30 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 1]) : (arr_30 [i_8] [i_9] [i_2 + 3] [i_9] [i_2 + 3]))))));
                            }
                        }
                    }
                }
                for (int i_10 = 2; i_10 < 13;i_10 += 1) /* same iter space */
                {
                    var_27 = ((!(((~(arr_35 [i_10 - 1] [i_3] [i_10 - 2]))))));
                    var_28 = ((~(max((((!(arr_9 [i_2])))), ((var_13 ? 65535 : var_6))))));
                }
            }
        }
    }
    var_29 += var_13;
    #pragma endscop
}
