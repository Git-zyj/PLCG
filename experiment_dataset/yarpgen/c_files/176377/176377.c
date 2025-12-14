/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(((var_7 != (max(var_8, 14)))))));
    var_15 = (max(0, ((~(~11)))));
    var_16 = ((~(min((min(var_2, -60)), ((var_5 ? var_10 : 5616416909466467454))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_17 = (((((arr_7 [i_1]) >= (arr_6 [i_2]))) ? (((((arr_9 [i_0 - 1] [i_1] [i_1] [1]) != (arr_1 [i_0]))))) : ((~(arr_0 [i_1])))));
                arr_10 [i_0] [i_1] [i_0] = (~var_4);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_18 = (((arr_3 [i_0 - 2] [i_1 + 1] [i_1 + 1]) / (arr_3 [i_0 + 1] [i_1 + 1] [i_1 + 1])));
                var_19 = 18446744073709551596;
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_20 = (arr_6 [i_0 + 1]);
                var_21 = ((((((arr_5 [i_1]) ? var_4 : (arr_9 [i_0 + 1] [i_1] [10] [6])))) ? (arr_0 [i_0]) : (((0 ^ (arr_9 [i_4] [i_1] [i_1] [3]))))));
                arr_16 [i_1] = var_13;
                var_22 = (arr_8 [i_0] [i_1] [i_4]);
                var_23 = ((((var_9 ? (arr_0 [i_0]) : 1)) != (((0 ? (arr_11 [5] [i_1] [i_1] [i_0]) : 120)))));
            }
            var_24 = (arr_12 [i_0] [i_0] [i_0] [i_0]);
            var_25 = -112;
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 7;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_26 = (((((var_11 ? 29920 : 9714839591970272998))) ? (arr_4 [i_6]) : (arr_21 [i_0 - 2])));
                            var_27 = ((-(arr_5 [i_6])));
                            arr_28 [i_0] [i_6] [i_6] [8] [i_8] = ((~(arr_23 [3] [i_6])));
                            arr_29 [i_0] [i_5] [i_6 + 4] [i_6 + 4] [i_6] [i_8] = ((((var_10 ? (arr_24 [i_0 - 1] [i_0 - 1] [i_6] [i_7 + 2] [3]) : (arr_7 [i_5]))) * (((arr_26 [i_8] [i_8] [i_7] [i_6] [i_5] [i_5] [i_0]) ? var_11 : (arr_1 [9])))));
                        }
                    }
                }
            }
            arr_30 [i_0] [i_0] = (((arr_17 [i_0 - 1]) ? (arr_19 [i_5 + 1] [5] [i_5 + 1]) : (arr_2 [i_0 + 1])));
            var_28 = (20 ? 3559771701277292537 : 418743395);
            var_29 = (((((9335 ? 55733 : (arr_5 [2])))) ? (arr_25 [i_0] [i_0] [4] [6]) : (!var_7)));
        }
        for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
        {
            arr_33 [i_9] [i_0] = (((arr_7 [i_0 + 1]) ? (!-2099721419) : (!8384512)));
            var_30 = ((((0 ? (arr_4 [0]) : 17972590393215571468)) >= 8384503));
            arr_34 [6] [i_9] = ((~(((arr_14 [i_0] [1] [i_9] [i_0]) ? var_8 : (arr_22 [i_0])))));
            var_31 = (arr_25 [i_0] [i_0] [i_9] [2]);
        }
        for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
        {
            arr_37 [i_10] [i_10] = (~9223372036317904896);
            arr_38 [i_10] = (((((((arr_18 [i_10 + 1] [i_10] [1]) ? (arr_18 [i_0] [0] [i_0 + 1]) : var_1)) + 2147483647)) >> ((((0 ? (arr_31 [i_0 - 1] [i_10]) : (arr_2 [i_0]))) - 94))));
            arr_39 [2] [i_10] [i_10] = (arr_26 [7] [i_0 - 2] [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1] [i_10]);
            arr_40 [i_10] = (arr_20 [10] [i_0 - 1] [i_10 + 1]);
        }
        arr_41 [i_0] = (((arr_13 [i_0 - 2] [2] [7] [i_0]) ^ (arr_13 [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 1])));
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_32 = (min(var_3, (min(var_4, ((min((arr_12 [i_11] [i_11] [i_11] [i_11]), (arr_2 [i_11]))))))));
        arr_44 [i_11] [i_11] = min((((!(arr_17 [i_11])))), (((((-(arr_35 [i_11] [i_11])))) ? (arr_26 [i_11] [i_11] [i_11] [6] [5] [i_11] [i_11]) : (max((arr_6 [i_11]), (arr_3 [i_11] [i_11] [i_11]))))));
    }
    #pragma endscop
}
