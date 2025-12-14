/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 += (((((((!(arr_3 [i_1]))))) + var_10)));
                arr_5 [i_1] [i_1] [i_1] = (arr_2 [i_0] [i_0]);
                var_20 = (max(var_20, (arr_1 [i_0])));
                arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] = (((-(!var_1))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    arr_9 [i_1] [i_2] = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] = (var_2 & 6448151739314229814);
                                var_21 = ((3 != ((((arr_4 [i_2] [i_2] [i_1]) != (arr_13 [i_0] [i_2]))))));
                            }
                        }
                    }
                    var_22 = (arr_3 [i_0 + 2]);
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_23 = (min(var_23, (((5509270368249487873 - var_13) / -var_15))));
                        arr_21 [i_6] [i_5] [i_0] [i_0] [i_0] [i_0] = ((((-5608680697579083437 ? (arr_8 [i_6] [i_6]) : var_8)) >> (((((arr_13 [i_5] [i_0]) & var_6)) - 4010))));
                        arr_22 [i_6] [i_6] [i_1] [i_1] [3] [i_0] = (((arr_20 [i_0] [5] [i_0 - 2] [i_5 - 1] [i_5] [i_5]) ? (arr_20 [i_0] [i_0] [i_0 + 3] [i_5 - 1] [i_5] [i_5 + 1]) : (arr_20 [2] [i_0] [i_0 - 2] [i_5 - 1] [i_6] [i_6])));
                    }
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        arr_25 [i_1] [i_5] = 142;
                        arr_26 [i_0 + 1] [i_0 + 1] [i_5] = ((~(((!(arr_12 [14]))))));
                        arr_27 [i_0] [i_0 - 3] [i_5] [i_0] [i_7] [i_7] = (((!(arr_11 [8]))));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_31 [i_0] [i_0] [i_0] = (arr_12 [i_8]);

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_24 += var_15;
                            var_25 = (min(var_25, (arr_7 [i_9] [i_5])));
                            arr_35 [i_1] [i_1] [i_1] [i_5] [i_1] [i_1] [1] = (arr_20 [i_0] [5] [5] [i_5] [i_8] [5]);
                            var_26 = ((((((var_8 != (arr_24 [i_8] [i_8] [i_5] [i_8] [i_8]))))) != 3997610114));
                        }
                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            var_27 = (arr_17 [i_0 + 3] [i_0 + 1] [i_5 + 1] [i_0 + 1]);
                            arr_39 [i_0] [i_5] [i_0] [i_0] [i_10] [i_1] = 2;
                            var_28 = (!190);
                        }
                    }
                    arr_40 [i_0] [1] [1] = (arr_19 [i_0 + 2] [i_0 + 3] [i_5 - 1] [i_5 + 1]);
                    var_29 = ((!(((-7822 ? var_5 : -18527)))));
                    var_30 = 124;
                }
                for (int i_11 = 1; i_11 < 15;i_11 += 1) /* same iter space */
                {
                    arr_43 [i_0] [i_0] [i_0] = (min((min((arr_42 [i_0 + 2] [i_0 + 3] [i_0 + 3] [i_11 - 1]), (arr_42 [i_0 + 2] [i_11] [i_11] [i_11 - 1]))), (((989171509 * ((-(arr_0 [i_11]))))))));
                    var_31 = (max((arr_4 [i_11 + 1] [i_1] [i_0 - 1]), ((~(((!(arr_15 [i_0] [i_0] [0] [i_0] [i_0]))))))));
                    var_32 = (((arr_11 [4]) - (arr_7 [i_0 + 3] [i_11])));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 14;i_13 += 1)
                        {
                            {
                                arr_48 [i_13] [i_0] [i_11] [i_0] [i_13] = ((!((((~(arr_23 [i_13] [i_12] [i_11 - 1] [i_0] [i_0] [i_0]))) >= (arr_15 [i_0] [i_0 - 3] [i_13] [i_0] [11])))));
                                arr_49 [i_13] [i_0] [i_1] [i_11] [i_12] [14] = (arr_7 [i_0 + 2] [i_0 + 2]);
                            }
                        }
                    }
                    arr_50 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_11 - 1] = var_16;
                }
            }
        }
    }
    var_33 = var_6;
    var_34 &= (((var_16 + var_13) >= var_0));
    #pragma endscop
}
