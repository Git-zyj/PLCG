/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_0 [i_0 + 1] [i_0 - 2]) * (arr_0 [i_0 + 1] [i_0 - 2])))) ? ((-(arr_0 [i_0 + 1] [i_0 - 2]))) : 30722));
        var_12 = (~30722);
        var_13 = ((max(var_7, -1791631668)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = (((((arr_5 [i_1]) / (((arr_6 [i_0] [i_1] [i_2] [i_1]) ? -30722 : (arr_6 [5] [i_1] [9] [i_1])))))) ? (max(25002, 25002)) : -991705922);
                    arr_10 [i_0] [i_0] |= (~var_10);
                    var_14 = var_3;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_15 = (arr_11 [i_2 + 3]);
                            var_16 = (((((arr_16 [i_0] [i_0] [2] [10] [i_0]) < (arr_3 [i_0] [i_1] [10]))) ? (((((arr_1 [i_3 + 4]) > -30745)))) : (arr_7 [i_2 - 2] [i_2] [i_2 + 2] [10])));
                            arr_17 [i_0 + 2] [i_1] [i_2] [11] [i_1] [i_0 + 2] = -1;
                        }
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            var_17 = (var_11 ? 459928993 : var_7);
                            var_18 = ((-991705922 ? var_4 : var_9));
                            arr_20 [i_0] [i_1] [i_5] = ((arr_3 [i_0] [i_1] [i_0 + 2]) ? (arr_1 [i_0]) : (((arr_16 [i_5] [10] [i_2] [10] [i_0]) / (arr_4 [i_1] [i_3]))));
                        }
                        arr_21 [i_0] [i_0] |= 2114943493;

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_1] [i_3 + 3] [1] [i_3] = var_8;
                            arr_25 [2] [i_1] [i_2] [i_1] [i_6] = var_5;
                            var_19 = var_8;
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_29 [4] [i_1] [i_2] [i_1] [i_7] = var_11;
                            arr_30 [i_0] [12] [i_0] [0] [i_3] [i_1] = (arr_16 [3] [i_1] [i_1] [i_1] [i_1]);
                            var_20 = (-16763 ? (-991705922 ^ var_4) : -16504);
                            arr_31 [i_7] [i_1] [i_1] [i_0] = (var_0 ? ((((arr_19 [i_0] [i_1] [i_2] [i_1] [0]) && (arr_1 [i_1])))) : (((var_4 >= (arr_16 [5] [9] [i_2 + 1] [5] [5])))));
                            var_21 = ((arr_18 [i_0 + 2] [i_0] [i_2 - 2] [i_7] [i_7]) ? (arr_18 [i_0 - 2] [i_0 + 1] [i_2 + 1] [4] [i_2]) : (arr_18 [i_0 + 1] [i_0 + 1] [i_2 + 3] [i_3] [i_3]));
                        }
                        var_22 = ((arr_27 [i_0] [i_0] [i_0] [i_3 + 4] [i_2 - 2] [i_3]) ? (arr_22 [i_1] [i_1] [8] [i_3 + 4] [i_1]) : (arr_22 [10] [10] [2] [i_3 + 4] [i_2]));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_23 = (max(var_23, (((~(arr_26 [i_0] [12] [i_1] [i_2 + 1]))))));

                        for (int i_9 = 3; i_9 < 11;i_9 += 1)
                        {
                            var_24 = (arr_7 [7] [i_1] [i_2] [7]);
                            arr_38 [i_1] [5] [i_2] [i_2] = (arr_35 [i_0] [i_1] [i_0]);
                            arr_39 [7] [0] [i_2] [i_1] [i_9] [i_8] [i_8] = (4294967280 ? (arr_8 [i_0] [i_8] [i_1]) : (arr_16 [i_0] [i_0] [i_0 - 4] [i_8] [i_9]));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, var_11));
                            var_26 = ((arr_6 [i_1] [9] [i_2] [i_1]) + (arr_6 [i_1] [i_1] [13] [i_1]));
                            arr_42 [i_0] [i_1] [i_2] [i_1] [4] = arr_40 [i_2] [i_8] [i_2];
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            arr_45 [i_0] [2] [i_1] [i_1] [i_1] [i_8] [i_11] = (1150727947 ^ -30712);
                            arr_46 [i_1] [i_1] [i_1] [i_1] [7] = var_4;
                        }
                        var_27 = var_10;
                    }
                }
            }
        }
    }
    var_28 = var_3;
    #pragma endscop
}
