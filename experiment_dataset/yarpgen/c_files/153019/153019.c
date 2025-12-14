/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = min(30565, (max(2410, var_11)));
        var_17 &= (max((((((arr_1 [6]) ? var_13 : (arr_1 [12]))) ^ -8180878953217878945)), ((~(!var_1)))));
        arr_3 [i_0 + 2] [i_0] = ((arr_1 [i_0]) - (((40 < (min(-25377, -6488378247779595141))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_18 = ((-(((!(arr_7 [i_1 + 4] [6]))))));
            var_19 = (min(var_19, (arr_5 [i_1])));
            var_20 ^= (((arr_0 [12]) > (arr_8 [i_1 + 4] [i_1 - 1])));
            var_21 = (min(var_21, (arr_7 [i_2] [i_1 + 1])));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                var_22 = (max(var_22, ((((-var_6 + 2147483647) << (((arr_8 [8] [i_3]) - 106)))))));
                var_23 = (max(var_23, 57));
                var_24 = (((~-17) < 25351));
                arr_13 [i_1] [0] [i_3] [i_4 + 2] = ((-(var_6 & var_8)));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_25 = (arr_16 [i_1 + 2] [i_5] [i_1 + 2]);
                arr_17 [i_5] [i_1] [i_3] [i_5] = (((arr_16 [i_1 + 3] [i_5] [i_1 + 2]) ? (arr_16 [i_1 + 4] [i_5] [i_1 + 3]) : (arr_16 [i_1 + 4] [i_5] [i_1 + 1])));

                for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    arr_20 [i_5] [i_3] = 3670016;
                    arr_21 [i_5] [i_5] [i_3] [i_5] = (((arr_14 [i_3] [i_6 + 1] [i_5] [i_6 + 2]) < (arr_9 [i_6 + 2])));
                    arr_22 [i_5] [0] [i_3] [i_1] [i_1] [i_5] = (arr_11 [i_3] [i_6 + 2] [i_6 + 3]);
                }
                for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
                {
                    var_26 ^= (((arr_9 [i_1]) > (((var_0 ? var_12 : -55)))));
                    var_27 = ((arr_11 [i_1 + 1] [i_1 + 4] [i_1 + 4]) ^ (arr_11 [i_1 - 1] [i_1 + 4] [5]));
                    var_28 = ((var_9 | (arr_12 [i_1 + 2])));
                }
                var_29 += (arr_8 [i_1 - 1] [i_3]);
            }
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                arr_29 [i_8] [1] = ((~(arr_0 [i_8])));
                var_30 |= var_0;
                arr_30 [4] [i_3] [i_1] = (arr_6 [i_1 + 2] [i_1 + 1]);
                var_31 = ((((arr_24 [i_1]) ? var_15 : 11523966122488613832)));
                var_32 += arr_24 [i_3];
            }
            var_33 += (((arr_1 [2]) / (arr_5 [i_3])));

            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                var_34 = (arr_8 [i_3] [i_9]);
                var_35 = ((var_8 / (arr_11 [i_9 - 1] [i_3] [i_1 + 4])));
                arr_34 [i_1] = (arr_14 [2] [i_3] [0] [i_3]);
                arr_35 [i_1 + 4] [i_1] [i_1] [i_1] = 35773;
            }
            arr_36 [i_3] [i_1] [i_1] = (arr_1 [6]);
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
        {
            var_36 = var_7;

            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    arr_43 [i_12] = (((2978 ^ var_6) && (arr_12 [i_1 + 4])));
                    var_37 = (arr_9 [i_1 + 1]);

                    for (int i_13 = 4; i_13 < 11;i_13 += 1)
                    {
                        var_38 = (((~(arr_4 [i_1 + 2]))));
                        var_39 = (arr_27 [i_13 - 3] [i_1 + 4] [i_1 + 3] [i_1]);
                    }
                    for (int i_14 = 2; i_14 < 10;i_14 += 1)
                    {
                        arr_48 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] = (arr_41 [i_1 + 4] [i_1] [i_1]);
                        var_40 = (((arr_15 [i_1 - 1] [i_1 + 1] [i_14 + 1] [i_14 + 2]) < (arr_4 [i_14 + 1])));
                        var_41 = (min(var_41, (((((((arr_10 [2] [6] [i_1 - 1]) ^ (arr_19 [i_12])))) / (~var_10))))));
                        arr_49 [i_1 - 1] [i_10] [i_1 - 1] [i_14] = (arr_11 [2] [i_10] [i_10]);
                        var_42 &= (arr_14 [i_1 + 3] [i_1 + 3] [i_12] [i_14 - 1]);
                    }
                }
                for (int i_15 = 1; i_15 < 12;i_15 += 1)
                {
                    arr_52 [i_15] = (((arr_47 [i_10] [i_1 + 4] [i_15] [i_15 - 1]) || (arr_6 [i_1 + 3] [i_1 + 1])));
                    var_43 -= ((arr_23 [i_1] [i_11]) ? ((25366 ? 15845914888994896888 : (arr_31 [i_11] [i_1] [i_1]))) : (~49));
                }
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    arr_56 [i_1] = (arr_11 [i_1] [i_10] [i_16]);
                    arr_57 [i_1] [9] [i_11] [i_1] [i_11] [10] = (arr_42 [i_1 + 1] [i_11] [i_11] [i_11]);
                }
                var_44 = -49;

                for (int i_17 = 1; i_17 < 12;i_17 += 1)
                {
                    arr_60 [5] = (((arr_5 [i_1]) / var_12));
                    var_45 ^= ((~(arr_53 [i_17 - 1] [9] [i_1 + 2] [i_1])));
                    var_46 = (((arr_11 [i_1 + 3] [i_17 - 1] [i_17 - 1]) | (arr_11 [i_1 + 1] [i_17 + 1] [3])));
                    arr_61 [i_1] [i_10] [i_11] [i_17] = (((arr_24 [i_10]) && (arr_24 [i_17 - 1])));
                }
                for (int i_18 = 3; i_18 < 11;i_18 += 1)
                {
                    arr_65 [i_1] [10] [i_1] = ((-(arr_40 [5] [i_1 - 1] [i_1 - 1] [i_18 - 2])));
                    arr_66 [i_1] [i_10] [i_11] [i_11] [i_18] = ((((~(arr_63 [i_1] [i_10] [i_1] [12] [i_18 - 2]))) < (arr_9 [i_1 - 1])));

                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        var_47 -= ((var_13 * (arr_32 [i_1 + 4] [i_18] [i_18 - 1] [i_18 - 1])));
                        var_48 = var_4;
                    }
                    arr_71 [i_1] [i_10] [i_11] [0] = (((arr_15 [i_1] [i_1 + 4] [i_18 - 1] [i_18]) != (arr_14 [i_18 + 1] [i_18] [0] [i_18 - 1])));
                }
            }
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                arr_75 [i_1 + 2] [i_1 + 2] [10] [i_10] = (arr_1 [i_20]);
                arr_76 [i_1] [i_1] [i_1] &= (arr_41 [i_1] [i_1 + 2] [i_1 - 1]);
                var_49 = (max(var_49, ((~(arr_15 [i_1 - 1] [5] [3] [i_1 + 3])))));
            }
        }
        arr_77 [i_1] = -1877661759;
        var_50 = (((arr_37 [i_1]) ? (((arr_41 [i_1 + 2] [i_1] [i_1]) | var_9)) : (arr_68 [i_1] [5] [i_1] [i_1] [i_1])));
    }
    #pragma endscop
}
