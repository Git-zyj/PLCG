/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_7);
    var_17 = (~-var_2);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((-(((!(arr_0 [i_0]))))));
        var_19 = (arr_0 [i_0]);
        var_20 = (((!var_11) != (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_21 = ((-(((!(arr_4 [2]))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_22 = var_13;
                    var_23 &= ((~(((arr_4 [i_2 - 1]) / (arr_4 [i_2 - 1])))));
                    arr_10 [i_2 - 1] [i_1] = var_7;

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_7 [i_1]);
                        arr_14 [i_2] [i_3] [i_4] = -var_9;
                        var_24 -= ((+(((arr_11 [i_1] [i_2 - 1]) + var_11))));
                        var_25 = (((((var_8 == (arr_6 [i_1] [i_2 - 1] [i_3])))) ^ (((~(arr_7 [i_1]))))));
                        arr_15 [i_1] [i_1] [0] [i_1] [0] [0] = ((+((((arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]) < (arr_7 [i_2 - 1]))))));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_26 = ((!(arr_5 [i_1] [i_5] [i_3])));
                        var_27 = ((+((-((((arr_16 [i_3] [i_2] [i_2 - 1] [8]) <= var_3)))))));
                        arr_19 [i_5] [i_1] [i_2 - 1] [i_1] = ((((((-(arr_12 [i_1] [i_2] [i_3] [i_5] [i_5] [i_5])) < (arr_11 [i_2 - 1] [i_2 - 1]))))));
                        arr_20 [i_1] [i_2] = (-((var_7 + (((!(arr_7 [i_5])))))));
                    }
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            var_28 = (min(var_28, -var_2));
                            arr_26 [i_1] [i_1] [i_3] [1] [i_7 - 1] = ((~(arr_11 [8] [i_3])));
                            var_29 = ((!(arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                        }
                        arr_27 [i_1] [i_1] [i_2 - 1] [i_3] [i_6] = var_3;
                        arr_28 [i_1] = (!-var_12);
                    }
                    arr_29 [i_1] [i_1] [7] = var_15;
                }
            }
        }
        arr_30 [i_1] [2] = (!var_12);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    arr_39 [i_1] [i_9] [i_9] [i_1] = ((!(((arr_18 [i_1] [i_8] [i_8] [i_8] [i_9]) == (var_3 / var_11)))));
                    var_30 = ((-(((!(arr_17 [i_8] [i_1] [i_9]))))));
                    arr_40 [i_8] = ((-(((!(arr_6 [i_8] [i_9] [i_8]))))));

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        arr_43 [i_10] [i_9] [i_8] [8] = var_1;
                        var_31 = ((!((!(arr_6 [i_1] [i_8] [i_10])))));
                        arr_44 [i_1] [i_8] [i_9] [i_10] = ((~((-(arr_42 [i_9])))));
                        arr_45 [i_1] [i_1] [i_1] [i_1] = (arr_2 [i_8] [i_9]);
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        arr_48 [i_11] = (arr_16 [i_1] [i_8] [1] [i_11]);
                        var_32 = ((!((((-(arr_6 [i_1] [i_9] [i_11])))))));
                        arr_49 [i_1] [8] = (arr_38 [i_9] [i_1] [i_9]);
                        arr_50 [i_9] [i_11] = (arr_17 [i_1] [1] [i_9]);
                    }
                }
            }
        }
        arr_51 [i_1] = (~var_8);
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_33 = ((~(((var_0 * (arr_35 [i_12] [i_12] [1]))))));
        var_34 = ((~(((!(((var_2 - (arr_1 [i_12])))))))));
        arr_54 [i_12] = (arr_5 [i_12] [i_12] [i_12]);
    }

    for (int i_13 = 1; i_13 < 15;i_13 += 1)
    {
        var_35 ^= ((!(((~((var_5 | (arr_56 [i_13]))))))));
        arr_57 [i_13 - 1] = (arr_55 [i_13] [i_13]);
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        var_36 = ((-(arr_59 [i_14] [i_14])));
        var_37 = ((!(arr_60 [i_14])));
        arr_61 [i_14] [18] = ((-(((var_3 < (arr_59 [0] [i_14]))))));
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 20;i_15 += 1)
    {
        arr_64 [i_15 - 1] = ((~((-(arr_63 [i_15 + 1] [i_15 - 1])))));
        arr_65 [i_15] [i_15] = (((arr_62 [8] [i_15 + 1]) % (arr_62 [i_15 - 1] [i_15 - 1])));
        arr_66 [i_15] = -var_5;
    }
    #pragma endscop
}
