/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_4));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (min(((var_9 * (((((arr_3 [i_0]) <= var_10)))))), ((max(32746, 53)))));

        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            var_16 = ((arr_3 [i_0]) ? ((min((arr_3 [i_0]), (arr_3 [i_0])))) : ((max((arr_3 [i_0]), (arr_3 [i_0])))));
            arr_7 [i_0] [8] [i_0] = ((((((!(!var_7))))) + (max((arr_5 [i_1 + 1] [i_1] [9]), (arr_6 [i_1 - 3])))));
            arr_8 [0] [i_0] = (((((~(arr_0 [i_0] [i_0])))) ? ((var_6 ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1 - 3]))) : (((arr_0 [i_0] [i_1 - 2]) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1 - 4])))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_12 [i_0] [0] [i_2] &= ((((-(arr_1 [i_2]))) - (((min((min(var_14, (arr_0 [i_2] [i_2]))), var_13))))));
            arr_13 [i_0] = ((+((((((arr_6 [i_2]) ? (arr_9 [i_0]) : (arr_9 [i_0])))) / (((arr_11 [i_2]) ? var_4 : var_1))))));
        }
        arr_14 [i_0] = ((-(0 * 0)));
        var_17 = var_0;
    }
    for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                {
                    arr_21 [i_4] = (max((arr_19 [i_3 + 2]), (((arr_19 [i_3 + 2]) >= (arr_19 [i_3 + 2])))));
                    arr_22 [i_4] [i_4] [i_5 + 1] = ((!(((arr_17 [i_5 - 2]) >= var_9))));
                    arr_23 [3] [8] [i_4] = (arr_6 [i_4]);
                }
            }
        }
        arr_24 [i_3] [4] &= ((((min((arr_16 [i_3 + 2]), (arr_0 [12] [12])))) * (((!(arr_0 [0] [0]))))));
        var_18 += (min((arr_16 [i_3 + 3]), (arr_6 [i_3 + 2])));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    var_19 = (min((((var_7 || (arr_25 [i_3 + 1] [i_7 + 1] [i_3 + 1])))), (((arr_16 [i_3 + 2]) * (arr_6 [i_3 - 2])))));
                    var_20 = (min(var_20, (min(((((((arr_20 [i_3] [i_6] [2]) << (((arr_27 [3] [1] [i_7 + 1]) - 27563))))) ? (((var_2 << (var_4 - 681148332)))) : (((arr_1 [i_3]) | var_5)))), (max((arr_29 [i_3 - 3] [i_6 - 1]), (~var_3)))))));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_21 = (max(var_21, ((((((arr_27 [i_8] [i_6 + 1] [i_3 + 2]) ^ (arr_27 [i_7] [i_7] [i_3 + 2]))) & ((~(arr_27 [11] [i_7] [i_3 + 3]))))))));
                        arr_32 [i_3] [i_6] [i_6 - 1] [i_7] [i_8] [i_7] = (arr_20 [i_6 + 1] [i_7] [3]);
                        arr_33 [i_3 + 2] [i_7] [6] [i_8] = ((((max((((arr_31 [i_3] [2] [6] [i_8]) ? (arr_6 [7]) : (arr_30 [i_3] [i_6 - 2] [i_7] [3]))), var_2))) ? (max(var_11, ((var_8 ? (arr_5 [i_3] [i_3] [i_7]) : (arr_3 [i_7]))))) : (arr_26 [i_3 + 3] [i_7 + 1])));
                        arr_34 [i_7] = (((((((max(var_14, (arr_5 [i_3] [6] [i_3])))) ? (max((arr_0 [i_7] [1]), var_5)) : var_13))) ? (((arr_1 [i_3 + 2]) ? (arr_1 [i_3 + 3]) : (arr_1 [i_3 + 1]))) : -60));
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_22 -= var_13;
                        arr_39 [i_3 - 1] [7] [i_7] [i_9] [8] [i_7] = (max((((((var_3 && (arr_26 [i_3] [i_7]))) && (18446744073709551615 && 0)))), (arr_27 [i_3] [1] [i_3])));
                        var_23 -= ((((((arr_10 [i_3]) ? (arr_2 [i_6]) : var_2))) ? var_8 : ((1 ? (min(10, 18446744073709551614)) : 1))));
                        arr_40 [11] [i_6] [i_7] [7] = ((((!(arr_2 [i_7])))));
                    }
                    arr_41 [i_3] [i_7] = (arr_29 [i_6] [i_7]);
                }
            }
        }
    }
    for (int i_10 = 3; i_10 < 9;i_10 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 10;i_13 += 1)
                {
                    {
                        arr_52 [i_13] [i_12] [i_12] [i_10] [i_10] = (arr_0 [i_12] [i_12]);
                        arr_53 [i_10] [i_11] [i_12] [i_10] [i_10] [i_13 - 3] = (i_12 % 2 == zero) ? ((((((arr_3 [i_12]) ? (arr_3 [i_12]) : (arr_29 [i_11] [i_11]))) << (((arr_3 [i_12]) - 7818))))) : ((((((arr_3 [i_12]) ? (arr_3 [i_12]) : (arr_29 [i_11] [i_11]))) << (((((arr_3 [i_12]) - 7818)) - 38926)))));
                        arr_54 [i_12] [i_11] [i_11] = var_14;
                    }
                }
            }
        }
        var_24 = (max(var_24, ((((arr_38 [i_10] [i_10] [i_10] [i_10]) ? ((((((arr_28 [i_10] [i_10] [0]) / (arr_36 [10] [i_10] [i_10] [i_10] [i_10 + 1] [i_10])))) ? ((((arr_1 [i_10]) != (arr_20 [0] [4] [i_10 + 2])))) : (arr_44 [i_10 + 1]))) : ((-1 ? (arr_9 [4]) : ((max((arr_6 [i_10]), (arr_25 [i_10] [i_10] [i_10])))))))))));
        var_25 += (((((!(arr_25 [i_10 - 1] [i_10 - 3] [i_10 - 1])))) != (((arr_25 [i_10 + 2] [i_10 - 2] [i_10 - 1]) ? var_13 : (arr_25 [i_10 - 2] [i_10 - 3] [i_10 + 2])))));
    }
    var_26 = (min((((var_1 ? var_8 : ((var_1 ? var_11 : var_9))))), (((((var_3 ? var_0 : var_4))) ? (((var_3 ? var_13 : var_4))) : var_1))));
    var_27 = (var_12 | var_14);
    var_28 = (min((32747 + -6194719999439120312), (((var_6 / ((min(var_14, var_12))))))));
    #pragma endscop
}
