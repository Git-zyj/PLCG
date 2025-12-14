/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((((arr_6 [i_0] [i_0] [i_0]) ^ (arr_6 [20] [i_1] [i_0])))) ? ((-(arr_6 [i_0] [i_0] [i_1]))) : (((arr_6 [i_0] [i_0] [i_0]) ? var_7 : (arr_6 [i_0] [i_0] [6])))));
                var_11 += (min((var_9 / 33), ((861003939 + ((39169 ? (arr_1 [i_0] [15]) : 39174))))));
                var_12 = var_3;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 = (arr_0 [20] [i_1]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_14 = 861003937;
                            var_15 = (min(var_15, (arr_13 [i_1] [i_2] [5] [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_16 = ((-17505 ? (arr_11 [i_2] [i_2] [i_2] [i_2] [7]) : 861003957));
                            var_17 *= (((4974499483713560100 ? (arr_13 [i_0] [i_0] [0] [i_0]) : -9708)));
                            var_18 = ((arr_16 [0] [i_3] [i_2] [i_1] [i_0]) ? var_4 : (arr_16 [i_0] [i_3] [1] [1] [6]));
                        }
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            var_19 = (((arr_2 [i_6 - 2] [i_6 + 1]) ? ((var_7 ? (arr_9 [i_2]) : var_0)) : (arr_5 [i_6 + 1] [i_3] [15])));
                            arr_21 [17] [i_1] [i_1] [i_1] [i_6] = ((-611 ? var_4 : var_0));
                        }
                        arr_22 [i_0] [i_1] [8] [i_1] = (arr_19 [i_1] [18] [18] [i_0] [i_1]);
                        var_20 = -6138123080033294875;
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_21 = (min(((861003937 ? var_3 : (arr_6 [i_0] [18] [i_0]))), var_7));
                        arr_26 [17] [i_7] [6] [11] [i_7] [i_7] = (((((65533 || (arr_8 [i_0] [i_1] [i_2] [i_2])))) << (861003941 - 861003912)));
                        var_22 = arr_1 [i_0] [9];

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_29 [i_0] [i_0] [18] [i_0] [i_8] = ((39161 | 30) ? (var_9 % var_4) : (((arr_18 [20] [13] [i_2] [i_7] [i_1] [i_1] [i_1]) * (arr_10 [i_8] [2] [i_1] [i_0]))));
                            var_23 = (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) <= var_10));
                            arr_30 [i_0] [i_8] [i_7] [i_2] [i_1] [i_0] [i_0] = (max(var_9, (((~(var_1 && 861003939))))));
                        }
                    }
                }
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    var_24 &= 7;

                    for (int i_10 = 3; i_10 < 21;i_10 += 1)
                    {
                        var_25 = ((((((-1368608955 / (arr_15 [i_9 + 1] [9] [7] [11] [i_10 + 1]))) + 2147483647)) << (-var_2 - 2470499983461266746)));
                        var_26 = (~(arr_5 [14] [14] [14]));

                        for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, 1697033841));
                            var_28 = (max(var_28, var_7));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                        {
                            var_29 = (((arr_12 [i_0]) - (((arr_12 [i_0]) + var_1))));
                            var_30 = (~var_7);
                            var_31 = (var_1 / var_0);
                            var_32 = (min(var_32, (max((((((arr_36 [1] [i_1] [14] [18] [8]) ? -1043060685503582460 : var_6)) / ((max(4061608491, var_8))))), (arr_36 [i_0] [i_1] [i_9] [i_1] [i_12])))));
                        }
                        var_33 -= (min(((1 / (((arr_18 [i_0] [i_1] [i_1] [i_10] [i_1] [i_1] [i_1]) ? var_3 : (arr_32 [i_1]))))), ((((((22654 ? var_8 : var_10))) ? (((arr_23 [i_0] [i_1] [i_9] [i_0] [i_9 - 2] [i_9 - 2]) | (arr_19 [0] [4] [1] [0] [i_1]))) : var_7)))));
                    }
                }
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    var_34 = ((((min(((-(arr_37 [i_13] [i_13]))), (-11 / var_2)))) ? (((max(var_10, var_1)))) : -var_8));
                    arr_43 [i_0] [i_0] [i_0] [i_0] = ((-861003938 ? 861003939 : 16777215));
                }
                var_35 = var_4;
            }
        }
    }
    var_36 = (min(var_36, var_6));
    #pragma endscop
}
