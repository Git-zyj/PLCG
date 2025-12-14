/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_1] = (arr_4 [i_0] [i_1]);
            arr_7 [i_0] [i_1] = ((((((arr_2 [i_1] [i_1] [i_1]) ? (arr_0 [i_0]) : (arr_4 [i_1] [i_1])))) ? ((-(arr_5 [i_1] [i_1]))) : (((arr_1 [i_0]) ? (arr_2 [i_1] [i_0 - 1] [i_1 - 1]) : (arr_1 [i_0 - 1])))));
            arr_8 [i_1] = (((-(arr_5 [i_1] [i_1 - 1]))));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_16 = ((!(((-(arr_0 [i_0 + 1]))))));

            for (int i_3 = 4; i_3 < 13;i_3 += 1)
            {
                var_17 = (((-(arr_0 [i_0]))));
                var_18 = (max(var_18, (((-((~(arr_2 [1] [i_2] [i_3]))))))));
            }
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {

                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    var_19 = (max(var_19, (((~((-(arr_15 [i_0] [i_2 - 1] [i_4] [i_5 + 1]))))))));
                    arr_19 [i_0] [i_2] [i_4] [i_2] = (((arr_17 [i_2] [i_4 + 2] [i_2 - 1] [i_0]) ? (arr_17 [i_2] [i_4 - 1] [i_2 - 1] [i_5 - 1]) : (arr_17 [i_2] [i_4 + 2] [i_2 - 1] [i_2])));
                    arr_20 [i_0] [i_0] [i_2] [i_4 - 1] [i_4 - 1] = (arr_16 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]);
                }
                for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_20 -= (arr_18 [10] [i_2] [i_4] [i_4] [i_6 + 1]);
                    var_21 = ((!(arr_14 [i_0] [i_2] [i_2 - 1])));
                    var_22 = ((!(arr_17 [i_2] [i_4 + 1] [i_2 - 1] [i_6 + 2])));
                    var_23 &= (((~(arr_10 [i_0] [i_2] [i_4]))));
                    var_24 = (max(var_24, (((-(arr_17 [2] [2] [i_0] [2]))))));
                }
                for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        arr_32 [i_0] [i_0] [i_2] [i_4] [i_7] [i_0] [i_8 + 4] = ((~(arr_9 [i_2 - 1] [i_2] [i_7])));
                        var_25 = (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2 - 1]);
                        arr_33 [i_0] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_8] = ((~(arr_31 [i_7] [i_7] [i_2] [i_7] [i_7])));
                        arr_34 [i_2] [i_2] [i_4] [i_7 + 2] [i_8] = (((-(arr_12 [i_4]))));
                    }
                    for (int i_9 = 4; i_9 < 12;i_9 += 1)
                    {
                        var_26 = (((arr_10 [i_9 - 4] [i_4 + 2] [i_0 + 1]) ? (((!(arr_26 [i_0] [i_2] [i_4 - 1] [i_7] [i_9])))) : (((arr_29 [i_2] [i_7] [i_9]) ? (arr_31 [i_0] [i_2] [i_2] [i_7 + 2] [i_9]) : (arr_10 [i_0 + 1] [i_4 + 1] [i_7])))));
                        var_27 = (arr_31 [i_0] [i_0] [i_2] [i_2] [i_0]);
                    }
                    for (int i_10 = 4; i_10 < 13;i_10 += 1)
                    {
                        var_28 = (((arr_21 [i_2]) ? (arr_21 [i_2]) : (arr_21 [i_2])));
                        arr_41 [i_0] [i_2] [i_2 - 1] [i_2] [i_2] [i_7 + 1] [i_10 - 3] = ((-(((arr_40 [i_10] [i_2] [i_4] [i_2] [i_0]) ? (arr_38 [i_0] [i_2] [i_2] [i_2] [i_4] [i_7] [i_2]) : (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    for (int i_11 = 3; i_11 < 14;i_11 += 1)
                    {
                        var_29 = ((-(arr_29 [i_4 + 2] [i_7 + 2] [i_11 - 1])));
                        var_30 = (max(var_30, (arr_5 [2] [i_2])));
                    }
                    arr_45 [i_0] [i_2] [i_4] [i_2 - 1] [i_2] [i_2 - 1] = (arr_36 [i_0] [i_0] [i_4] [i_2]);
                    var_31 = (arr_17 [i_2] [i_2] [i_4] [i_2]);
                    var_32 = (((arr_37 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_2] [i_0 + 1]) ? (arr_28 [i_7 - 1] [i_2] [i_7] [i_2] [i_0]) : (((-(arr_16 [i_0] [i_0] [i_0] [i_0]))))));
                }
                var_33 &= ((~(arr_15 [i_0] [i_4] [i_2 - 1] [i_0 + 1])));
                var_34 = (min(var_34, (((-((-(arr_43 [1] [i_0]))))))));
            }
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                arr_49 [i_2] [i_2] [i_2 - 1] [i_12 + 2] = (((arr_5 [i_2] [i_12 + 2]) ? (arr_2 [i_2] [i_2 - 1] [i_0 - 1]) : (((arr_46 [i_2] [i_12] [i_12]) ? (arr_37 [i_0] [i_0] [i_0 - 1] [i_0] [i_2] [i_0]) : (arr_25 [i_2] [i_2] [i_2] [i_12] [i_12])))));
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 13;i_14 += 1)
                    {
                        {
                            arr_57 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_14] = ((((!(arr_56 [i_2] [i_2 - 1])))));
                            var_35 ^= (arr_0 [i_14]);
                            arr_58 [i_0] [i_0] [i_0] [i_2] = ((~(arr_25 [i_2] [i_13 - 1] [i_13] [i_13 - 1] [i_14 + 1])));
                            var_36 = ((arr_26 [i_12 + 1] [i_13 - 1] [i_12 + 2] [i_12 + 2] [i_12]) ? (arr_26 [i_12 + 1] [i_13 - 1] [i_13] [i_12 - 1] [i_14 - 1]) : (arr_26 [i_12 + 1] [i_13 - 1] [i_12] [i_13] [i_14]));
                        }
                    }
                }
                arr_59 [i_2] [i_2] = (arr_53 [i_2] [i_0] [i_2 - 1] [i_12]);
            }
        }
        for (int i_15 = 1; i_15 < 1;i_15 += 1) /* same iter space */
        {
            arr_64 [i_0 - 1] [8] [i_0] &= ((-(arr_27 [i_0 - 1] [i_15 - 1] [i_0] [i_0 + 1])));
            arr_65 [i_0] [i_15] [i_0] = (arr_31 [i_0] [i_0] [i_15] [i_15] [i_15]);
        }
        var_37 = (arr_23 [i_0] [6] [6] [i_0 - 1] [i_0 - 1]);
    }
    var_38 = ((~(~var_12)));
    var_39 = (min(var_39, var_4));
    #pragma endscop
}
