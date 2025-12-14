/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_8 [i_1 + 1] = var_6;
                    arr_9 [i_0] [i_0] [i_2] = var_0;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0 - 2] = 0;
                        arr_14 [i_0] [i_0] = var_8;
                        var_11 ^= (max((((((-993306577780440854 ? -4245 : (arr_5 [i_0 + 1]))) - var_7))), ((((var_0 ? var_5 : var_3)) - (arr_2 [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_18 [i_0] [i_0] = var_6;
                        arr_19 [19] = (arr_5 [i_0]);
                        arr_20 [i_0] [i_0] = 4240;
                        arr_21 [i_0] [18] [i_1] [i_0] [i_4] = min(var_8, (((var_1 ? (arr_7 [i_1 + 1] [i_1 + 1] [i_1]) : (arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])))));
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_24 [i_0] [i_1] [i_5] = (arr_1 [i_1]);
                    var_12 = (((arr_17 [i_0 + 2] [i_0 + 2] [i_1]) ? (arr_17 [i_0 + 2] [i_5] [i_5]) : var_9));
                    var_13 = (var_0 && var_5);
                    arr_25 [i_0] [i_1] [i_5] = (arr_22 [i_0] [i_1 + 4] [i_0] [i_1 + 4]);
                }

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 2] = (((91 - (arr_26 [14]))) <= (arr_12 [i_0 - 2] [i_0 - 1] [i_1 + 4] [i_7]));
                        var_14 = var_8;
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_35 [i_8] [i_1] [i_0] = (-4236 / -92);
                        var_15 = var_4;
                        arr_36 [i_0] [13] [13] [3] = (~-3233865880601546687);
                        arr_37 [i_0] [i_1] [i_1 - 1] [i_6] [i_6] [i_8] = ((((var_4 ? (var_6 / 14867650228122679440) : -17080)) * 70));
                        var_16 = 2560121460;
                    }
                    for (int i_9 = 4; i_9 < 24;i_9 += 1)
                    {
                        arr_41 [i_0] [i_1 + 3] [i_9] [i_9] [19] = ((((((arr_27 [5] [i_1 - 2]) ? (arr_27 [i_0 - 1] [i_1 + 1]) : (arr_17 [i_9 - 4] [i_1 + 1] [i_1])))) ? ((((arr_17 [2] [i_1] [i_0 + 2]) > (arr_27 [i_9] [i_1 - 1])))) : var_6));
                        var_17 = (min(var_17, (arr_26 [i_0])));
                    }
                    arr_42 [i_0] [i_1] [i_6] = ((var_10 ? (arr_33 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2]) : (arr_16 [i_1 + 4] [i_1 - 2] [i_0 + 1] [i_0] [i_0 - 2] [i_0 + 1])));
                    arr_43 [i_0 - 1] [i_0] [i_1 - 2] [12] = (arr_16 [22] [i_1] [i_6] [i_6] [i_6] [i_6]);
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {

                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        arr_48 [i_11] = var_4;
                        var_18 = (min(var_18, (75 | 11319057048697872129)));
                        var_19 = var_0;

                        for (int i_12 = 2; i_12 < 21;i_12 += 1)
                        {
                            arr_53 [i_11] = (-92 == 24);
                            arr_54 [i_0 + 2] [i_1] [i_10] [i_10] [i_11] [i_11 + 3] [i_12] = (arr_5 [i_10]);
                            arr_55 [i_11] [i_11] = (arr_30 [i_12 + 2] [i_0 - 1] [i_11 - 1] [i_1 - 1]);
                        }
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        var_20 = (((arr_30 [i_1 + 3] [i_1] [i_1] [i_1]) ? var_7 : var_1));
                        var_21 = (min(var_21, (arr_11 [i_0 + 1] [i_1] [19] [i_1 + 3])));
                    }
                    arr_58 [i_0 - 1] [i_1 + 3] [i_10] [i_10] = (((arr_29 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1 + 2]) > var_10));
                }
                for (int i_14 = 1; i_14 < 24;i_14 += 1)
                {
                    var_22 *= 0;
                    arr_61 [i_0] [i_1] [i_1] [i_14] = var_0;
                }
            }
        }
    }
    var_23 = (var_2 % var_2);
    #pragma endscop
}
