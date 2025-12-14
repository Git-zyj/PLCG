/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((1 ? 61927 : 300260847));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] |= ((!((min((arr_6 [i_1 - 1]), var_4)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 = (min((arr_6 [i_0]), (arr_6 [i_0])));
                    var_20 = (min(-2147483637, 36563));
                    arr_11 [i_0] [2] [i_0] [1] = (min(((min(1, 1))), -var_10));
                    arr_12 [i_0] [i_2] = ((-1 ? 0 : 7700));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    var_21 = ((arr_14 [i_1 - 1] [i_3 + 1] [i_3]) && (arr_15 [i_1 - 1] [i_1 - 1] [i_1]));

                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        arr_19 [i_0] [i_4] [i_3] [i_4] = (arr_17 [i_3 - 1] [i_1] [i_1] [i_1 - 1]);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_23 [i_0] [i_4] = ((var_7 ? ((var_7 - (arr_9 [i_0] [i_0] [2] [i_0]))) : var_13));
                            var_22 = var_15;
                            arr_24 [0] [i_1 - 1] [i_3] [i_4] [i_4] = ((((((arr_21 [i_0] [i_1]) % (arr_6 [i_0])))) ? 0 : (arr_16 [i_0])));
                            var_23 = (max(var_23, ((((arr_10 [i_1 - 1] [i_3 + 1]) ? var_11 : (arr_10 [i_1 - 1] [i_3 - 1]))))));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_24 = (arr_3 [i_4 + 1] [i_6]);
                            var_25 |= (!var_11);
                            var_26 = (arr_16 [i_3]);
                        }
                        var_27 = (max(var_27, 2699998270));
                    }
                    var_28 = (arr_14 [i_0] [i_1] [i_0]);
                    var_29 *= ((var_10 <= (arr_26 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_30 = (min(var_30, (((!(arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                                arr_36 [i_0] [i_8] [i_7] [4] [i_0] |= (((arr_22 [i_0] [i_0]) & var_4));
                                arr_37 [i_0] [i_1] [i_1] [i_7] [i_9] [i_9] = (~255);
                                var_31 = (((arr_28 [i_1 - 1]) / 1));
                            }
                        }
                    }
                    arr_38 [9] [0] = (((arr_25 [1] [i_0]) + -2147483630));
                    arr_39 [i_0] [i_0] [6] = (arr_21 [i_0] [i_0]);
                    var_32 = -1594969025;

                    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_33 |= (((arr_42 [i_0] [i_1 - 1] [i_7 + 1] [i_10] [i_10] [1]) ? (var_6 | var_14) : var_9));
                        arr_43 [i_0] [5] [1] [i_0] [8] [i_0] = ((var_2 > (arr_26 [i_1 - 1] [i_1 - 1] [i_7 + 1])));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        var_34 = (max(var_34, (18446744073709551615 % 1)));
                        arr_46 [i_0] [i_1] [i_7] [i_11] [i_11] = (((arr_40 [i_1] [i_1 - 1] [i_7 + 1] [i_11]) - ((var_9 ? (arr_1 [i_0]) : var_12))));
                    }
                }
                arr_47 [i_0] = ((-((37 ? 13078 : (1 == -2479635496239287347)))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        {
                            var_35 = (((~(arr_30 [i_0] [i_0]))));
                            arr_52 [i_13] [8] [8] [i_13] [i_0] [8] = ((67 > (((arr_5 [i_13 - 1]) ? (arr_5 [i_13 - 2]) : var_12))));
                            arr_53 [i_0] = 1;
                        }
                    }
                }
            }
        }
    }
    var_36 -= (((var_1 ? ((291191590 ? var_8 : var_4) : (((min(-99, 1))))))));
    #pragma endscop
}
