/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [1] = (((var_10 ? 0 : 0)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_13 += (~var_1);
                                var_14 = 1;
                            }
                        }
                    }

                    for (int i_5 = 4; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_1] [i_2] [0] = var_7;
                        var_15 = var_9;
                        arr_19 [i_0] [i_1] [i_1] [i_5] = 1;
                    }
                    for (int i_6 = 4; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        var_16 = -124;
                        var_17 = ((-(arr_16 [i_6] [i_6 - 1] [i_6] [i_6 - 4])));
                        var_18 = ((arr_11 [i_0] [i_1] [i_2] [i_6]) ? (var_1 / var_3) : (((1 ? var_8 : (arr_10 [i_2] [1])))));
                        var_19 = (max(var_19, 124));

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] = ((-(-7619038929954616431 % 3)));
                            arr_26 [i_0] [i_1] [i_1] [i_6 - 1] [i_1] [i_7] = ((((1 ? (arr_9 [i_0] [i_2] [i_6] [i_7]) : var_10)) + var_11));
                            arr_27 [i_1] [i_2] [i_6 - 4] = (((arr_16 [i_0] [i_1] [i_2] [i_1]) ? (arr_1 [i_0] [i_0]) : ((var_1 ? var_4 : 3866660614))));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_2] [4] [i_8] = (~(arr_6 [i_1] [i_6 + 1] [i_8]));
                            arr_31 [i_0] [i_1] [i_2] [i_1] [9] = (arr_21 [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_8] [6]);
                            var_20 = 9070611744609937743;
                            var_21 = ((var_11 ? (arr_21 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6 - 2]) : (arr_12 [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 2])));
                            var_22 = var_10;
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_34 [i_2] = (((!var_0) ? 109 : var_11));
                            var_23 = (((arr_22 [i_6 - 2] [i_6 - 4] [i_6 - 4] [i_9] [i_9]) ? ((-7973 ? (arr_14 [i_0] [i_1] [i_2] [i_0]) : (arr_23 [i_1]))) : (((-19 + 2147483647) << (((((arr_32 [i_0] [i_1] [i_2] [i_6] [7]) + 52)) - 4))))));
                            arr_35 [i_1] [i_2] [i_6] = (((~-759060183) | (arr_12 [i_0] [i_1] [i_0] [i_1] [i_9])));
                        }
                    }
                    for (int i_10 = 4; i_10 < 9;i_10 += 1) /* same iter space */
                    {
                        var_24 = 1;
                        var_25 -= ((arr_3 [i_1]) / (((arr_28 [i_0]) + (arr_33 [i_0] [i_0] [i_0] [i_2] [i_0]))));
                    }
                    arr_38 [i_0] [i_1] [i_1] = ((-(((arr_15 [i_0] [i_1] [i_0]) ? (arr_32 [i_0] [1] [i_1] [2] [i_2]) : 0))));
                    arr_39 [i_0] [i_1] [i_0] = -var_9;
                }
                /* vectorizable */
                for (int i_11 = 4; i_11 < 9;i_11 += 1)
                {
                    var_26 = -109;
                    var_27 = (min(var_27, ((((arr_36 [i_0] [i_0] [i_0] [i_0] [i_11 - 2] [i_11 + 1]) * (arr_36 [i_0] [i_1] [i_1] [i_11] [i_11] [i_11]))))));
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 9;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_28 = (((arr_22 [i_0] [i_0] [i_12 - 3] [i_13] [i_13]) | var_2));
                                var_29 = (max(var_29, (((43148 ? -101 : -2039521551)))));
                                var_30 = (arr_6 [i_0] [i_11] [1]);
                                arr_48 [i_0] [i_1] [i_13] [i_11] [6] [6] = var_1;
                                arr_49 [i_13] = 428306672;
                            }
                        }
                    }
                    var_31 = ((((!(arr_14 [i_0] [i_1] [i_11] [i_11 - 2])))));
                }
                /* vectorizable */
                for (int i_14 = 4; i_14 < 8;i_14 += 1)
                {
                    arr_52 [i_0] [i_0] [i_14] = var_5;
                    arr_53 [i_1] = ((1 | -109) ? (arr_36 [i_14] [i_14 + 2] [i_14] [i_14 - 2] [i_14 + 2] [i_14]) : var_3);
                    arr_54 [i_0] [i_1] [3] = (((!var_11) ? (!var_1) : -4));
                }
                var_32 = (max(var_32, -69));
                arr_55 [i_0] [i_1] = (min(((-65 > ((var_3 * (arr_24 [i_0]))))), (arr_4 [i_0])));
            }
        }
    }
    var_33 = (((!var_7) << (((((1 <= var_0) ? var_4 : (var_2 - var_12))) - 26765927))));
    var_34 = (((((1 ? 3866660610 : 11022))) + (max((73 * 43147), (~var_1)))));
    var_35 = ((((((((var_0 ? -17 : 53474))) ? var_10 : (101 & 1)))) ? (((((var_3 ? var_12 : 68))) ? (((0 ? var_10 : var_8))) : ((var_4 ? var_9 : 65297)))) : ((((var_9 ? var_0 : var_8))))));
    #pragma endscop
}
