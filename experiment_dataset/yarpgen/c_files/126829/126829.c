/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_5 ? var_8 : 32256));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_14 = -8911410466861127940;

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_15 [i_2] [i_2] = ((((arr_11 [i_0] [i_1] [i_1] [i_3]) << (var_4 - 8783345677043434190))));
                            arr_16 [i_2] [i_1] [i_1] [i_2] = (arr_3 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_15 = (((arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] [9]) >> (((arr_13 [i_0] [i_3] [i_2] [i_3] [i_0] [i_5]) - 299698682))));
                            var_16 = 33280;
                            var_17 = (max(var_17, (((268510849673963125 ? (arr_5 [i_0]) : (~33295))))));
                            arr_19 [i_2] = 1;
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_18 = (min((((arr_20 [i_0] [i_1] [i_2] [i_3] [i_2]) + ((((arr_8 [i_0] [i_2] [10]) == 33279))))), (arr_13 [9] [9] [i_2] [i_3] [9] [i_6])));
                            arr_23 [i_6] [i_2] [i_2] [i_2] [6] = (((arr_20 [i_2] [i_0] [i_2] [i_0] [i_2]) ? var_3 : (((18446744073709551615 == (arr_21 [i_2]))))));
                            arr_24 [i_0] [3] [i_2] [i_2] [i_6] = (max(((-25406 ? var_2 : 33280)), (min(-505505055, (~var_1)))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_28 [i_2] [i_1] [i_2] [i_2] = 2694619126;
                        var_19 = 32255;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_31 [i_2] [7] = ((((2296 ? (13735289793370390969 * var_3) : var_12)) + ((((!((((arr_18 [i_0] [i_2] [i_2] [i_8] [i_0] [i_8]) ? var_3 : 1)))))))));
                        var_20 = ((!(arr_13 [7] [7] [11] [i_2] [i_2] [i_8])));
                        var_21 = (((~((-(arr_18 [i_0] [i_2] [9] [4] [9] [1]))))));
                    }
                    arr_32 [i_0] [i_2] [i_0] = (((-(max(var_0, var_8)))));
                    var_22 ^= (min(8192, (((arr_25 [i_0] [i_0] [i_2] [i_2]) + (arr_1 [i_0] [i_0])))));

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_23 = (min((arr_11 [i_0] [10] [10] [i_9]), ((((!0) && var_1)))));
                        arr_35 [i_0] [i_1] [i_2] [i_9] = ((((((arr_5 [i_0]) * 1))) && ((((54849 ? 3519006520 : 1600348169))))));
                        arr_36 [i_2] [1] [i_2] = ((-(arr_30 [i_0] [i_2])));
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_40 [9] [i_2] [6] = (arr_17 [10] [i_1] [i_2] [i_2] [i_1] [i_2]);
                        arr_41 [i_2] [i_1] [i_2] [i_10] = (min(((((arr_22 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]) != (arr_37 [8] [1] [7])))), (((((-(arr_5 [i_0]))) < (arr_27 [1] [i_1] [1] [i_10]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
