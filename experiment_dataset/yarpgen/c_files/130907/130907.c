/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0 - 2] = (-(1871133567 / 2423833710));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, var_0));
                    var_21 = (arr_8 [i_0] [i_0 + 3] [i_0]);
                }
            }
        }

        for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
        {
            arr_12 [i_0] = (arr_9 [4] [i_3] [i_3]);
            arr_13 [i_0] [i_3] = (arr_9 [i_0] [i_0 + 2] [6]);

            for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
            {
                arr_18 [i_4] = ((!((max(2449469787, 1446150607)))));
                var_22 = (arr_1 [i_0 + 3]);
            }
            for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
            {
                arr_21 [i_5] [i_3 + 2] [i_5] = (min((min((2423833728 * var_17), (arr_5 [i_0] [i_5]))), (arr_14 [i_0] [i_5])));
                arr_22 [i_5] = (arr_3 [i_0 - 4]);
                var_23 = ((var_10 / ((-28 ? ((((arr_1 [i_5 + 2]) ? (arr_16 [i_0 - 1] [i_5] [i_5 - 3]) : (arr_16 [6] [i_5] [i_5 + 2])))) : (arr_3 [i_0 - 1])))));
            }
            arr_23 [i_0] = (max(((~(((arr_5 [i_0 - 1] [i_3 - 3]) ? 13 : var_16)))), (((!(arr_15 [i_0] [i_0 - 1] [i_0]))))));
        }
        for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
        {
            var_24 = (arr_9 [i_0] [i_6 - 2] [i_6 + 3]);
            arr_27 [7] [i_0 + 2] [i_6] = (max((min((((arr_15 [i_0] [i_6] [i_6]) ? 254 : var_10)), (arr_5 [i_0 - 3] [i_6 + 4]))), (arr_24 [i_0 + 1] [i_6])));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_31 [i_7] = ((-var_19 ? (arr_11 [i_7] [i_7] [i_7]) : var_3));
        arr_32 [i_7] = (((arr_10 [i_7] [i_7] [i_7]) ? var_17 : (arr_29 [i_7] [i_7])));
    }
    var_25 += -var_12;

    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        arr_36 [i_8] [i_8] = (min(((max((arr_34 [i_8]), -var_1))), ((((1260406315 / (arr_35 [i_8] [i_8]))) / -1871133562))));
        arr_37 [i_8] [i_8] = (arr_33 [i_8]);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_26 = (max(var_26, ((((((var_15 ? (arr_34 [i_9]) : (arr_33 [i_9])))) ? (arr_35 [i_9] [i_9]) : (1789 / -586949689))))));
        var_27 -= (arr_38 [i_9]);
        arr_40 [i_9] = ((-(((arr_34 [i_9]) ? 17179852800 : 109))));
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        arr_43 [i_10] = (arr_24 [i_10] [i_10]);

        /* vectorizable */
        for (int i_11 = 2; i_11 < 12;i_11 += 1)
        {
            arr_46 [i_10] = (arr_33 [i_11 + 1]);
            arr_47 [i_10] = (((arr_3 [i_11 - 1]) ? (arr_16 [i_10] [i_11] [i_11 - 2]) : (((-(arr_15 [i_10] [i_10] [i_11]))))));
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        arr_50 [i_12] [10] = ((29 ? var_11 : ((((arr_33 [i_12]) > (arr_26 [i_12]))))));

        for (int i_13 = 3; i_13 < 10;i_13 += 1)
        {
            var_28 = (arr_52 [i_13] [i_13 - 1] [i_13 - 1]);

            for (int i_14 = 1; i_14 < 10;i_14 += 1)
            {
                arr_55 [i_12] [i_12] [i_12] [i_13] = ((-(((arr_9 [i_14 + 1] [i_13 - 1] [7]) ? (arr_34 [i_14]) : (arr_9 [i_12] [i_12] [i_14 - 1])))));
                arr_56 [i_13] [i_13] [i_13] = (((arr_25 [i_13 - 3] [i_13 - 2] [i_13 - 1]) && (arr_25 [i_13 - 2] [i_13 - 3] [i_13 - 2])));
            }
            for (int i_15 = 2; i_15 < 10;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 4; i_16 < 9;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 10;i_17 += 1)
                    {
                        {
                            var_29 = (max(var_29, (((((arr_64 [i_12] [i_13 - 3] [i_17]) / 37743))))));
                            arr_66 [i_12] [i_12] [i_13] [i_17 + 1] = (((arr_25 [i_15 - 1] [i_15] [i_15 - 2]) / (arr_25 [12] [12] [i_15 - 2])));
                            var_30 = ((-var_12 - (arr_62 [i_17 + 1] [i_17 - 2] [i_17 - 1])));
                        }
                    }
                }
                arr_67 [i_13] = ((var_4 ? (arr_5 [i_15 + 1] [i_13 - 3]) : (arr_5 [i_15 + 1] [i_13 - 3])));
            }

            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                arr_70 [i_18] [i_13] [i_13] [i_12] = (((~(arr_30 [i_12]))));
                arr_71 [i_13] [i_13] [i_18] = 586949689;
            }
        }
    }
    #pragma endscop
}
