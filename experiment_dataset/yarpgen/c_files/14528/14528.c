/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (!-6);
    var_12 = (max(var_12, (~-1994417567)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (max((arr_2 [4] [i_0 + 1]), (arr_2 [10] [i_1])))));
                var_14 = (min(var_14, ((((!((max((arr_4 [i_0 - 1] [i_0 - 1] [i_1]), (arr_1 [i_0]))))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_15 = ((-(arr_3 [i_0 + 1] [i_0 - 1] [i_2])));
                    arr_9 [i_0] [i_0] [i_1] [i_1] = ((15701767914924966772 << (arr_1 [i_2])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_16 += (arr_2 [12] [8]);

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_15 [i_4] [i_0] [i_3] [i_1] [i_0] [i_0] = (((arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_4]) ? -1667026362 : (arr_10 [i_0 - 1])));
                        var_17 &= ((~(arr_11 [i_4] [i_0 + 1])));
                        var_18 = (-471378587 - -703812975);
                        arr_16 [i_0 - 1] [i_0] [i_0 - 1] [i_0] = (31191 || -12603);
                    }
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        var_19 = ((var_9 / (arr_19 [i_1] [i_5 - 2] [i_5 - 2] [i_1] [i_5 - 2] [i_0])));
                        var_20 = (arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                    }
                    for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, ((((((~(arr_2 [2] [2])))) ? (arr_20 [i_0 - 1] [i_0 + 1] [i_6] [i_6]) : (arr_1 [i_0 + 1]))))));

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_26 [i_0] [9] [i_1] [i_0] = (arr_22 [i_0] [i_0 - 1] [i_0]);
                            arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6] [i_6] = (arr_13 [i_0] [i_6] [i_0] [i_0] [i_0]);
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_0] = ((~(arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_6 - 1])));
                            var_22 = (arr_7 [i_6 - 1]);
                            var_23 = (((arr_6 [i_1]) | (arr_0 [10])));
                        }
                    }
                    for (int i_9 = 3; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        arr_33 [10] [i_0] [i_0] [i_0] = (arr_29 [i_0 + 1] [0] [i_0 + 1] [0] [i_0] [i_0 + 1] [i_0]);
                        arr_34 [i_0 - 1] [i_0 - 1] [0] [i_3] [i_3] [i_0 - 1] &= (arr_24 [i_0 + 1] [i_0 + 1] [i_3] [2] [i_9 + 1]);

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_37 [i_0 - 1] [i_0] = ((528482304 ? (-2147483647 - 1) : 0));
                            arr_38 [i_10] [i_9] [i_0] [i_0] [i_1] [i_0] [i_0] = arr_14 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_9 - 2] [i_0] [i_9 - 1];
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_3] [i_9 - 3] [i_0] = (arr_24 [i_10] [i_0] [i_1] [i_0] [i_0 + 1]);
                            arr_40 [i_1] [i_10] [i_10] [i_0] [i_10] = (1 + var_2);
                            var_24 = (((127 <= 14326712483944290286) << (-39724920 - 4255242364)));
                        }
                        for (int i_11 = 4; i_11 < 11;i_11 += 1)
                        {
                            arr_43 [i_11 + 1] [i_11 - 3] [i_0] [i_3] [i_0] [i_1] [i_0] = ((((1 ? (arr_42 [i_0 - 1] [3] [i_3] [i_9] [i_11 + 2]) : 4104146598829927091)) * (arr_13 [i_9] [i_9] [i_9] [i_9] [i_0])));
                            var_25 ^= ((~(arr_32 [i_0 + 1] [i_3])));
                        }
                    }
                    var_26 = (!(arr_32 [i_0] [i_0 - 1]));
                }
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {

                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 12;i_13 += 1) /* same iter space */
                    {
                        var_27 = (arr_31 [i_13 + 1] [i_13 + 1] [i_0 - 1] [i_1] [i_1] [i_13]);
                        arr_48 [i_13] [i_13] [i_0] [i_0] [i_0] [i_0] = (-16384 && 3);
                        arr_49 [i_1] [i_1] [i_0] [i_1] [i_1] = ((-(arr_18 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_13 - 2] [i_13 + 1] [i_13 + 1])));
                        var_28 &= ((~(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0])));
                        var_29 = (arr_23 [i_1] [10] [i_1] [1] [i_13] [i_0] [i_0 + 1]);
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 12;i_14 += 1) /* same iter space */
                    {
                        var_30 = ((arr_25 [i_0 - 1] [i_0] [i_1] [i_1] [i_0] [i_14 - 1]) ? var_0 : (arr_1 [i_0 + 1]));
                        var_31 = (((arr_31 [i_1] [i_1] [i_14 + 1] [i_14 + 1] [i_1] [i_14 - 2]) + (arr_1 [i_14])));
                    }
                    arr_53 [i_12] [i_0 - 1] [i_0] [i_1] = max(var_4, (((~((min((arr_41 [i_0] [i_0] [i_0 + 1] [i_0] [i_12] [i_0] [i_0]), 1)))))));
                }
                /* vectorizable */
                for (int i_15 = 2; i_15 < 11;i_15 += 1)
                {
                    var_32 = 9223372036854775807;
                    var_33 -= ((-(((arr_51 [i_15] [0] [0] [0] [i_0]) ? (arr_52 [i_15] [i_15 + 1] [i_1] [i_0]) : (arr_28 [i_0] [i_0 + 1] [8] [i_0] [i_15] [i_15 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
