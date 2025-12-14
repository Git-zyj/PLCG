/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 3] = 8599737070762839939;
        var_11 = -140291999;

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = ((!((((((arr_5 [i_1] [i_1] [i_1 + 1]) / var_6)) - var_9)))));
            arr_7 [i_1] [i_1] = (((((((arr_2 [i_0] [12]) / (arr_1 [i_0]))) != ((var_7 ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_1 - 2]))))) ? ((((((arr_0 [i_1] [7]) ? var_8 : var_10))))) : (arr_4 [i_1 - 2] [i_0 - 1] [i_1 + 3])));
        }
        var_12 = (min(var_12, ((min((((((((arr_5 [i_0] [i_0] [i_0]) ? var_3 : var_2))) % var_1))), (max((arr_1 [i_0 + 3]), ((var_6 ? (arr_4 [i_0] [i_0] [i_0 + 4]) : (arr_5 [i_0] [i_0] [i_0]))))))))));
        var_13 = (min(var_13, var_6));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_14 -= (max((((-(arr_8 [i_2])))), (((arr_0 [i_2] [i_2]) / ((var_8 * (arr_0 [i_2] [i_2])))))));
        arr_11 [i_2] = ((~(min((arr_1 [i_2]), ((var_5 ? var_0 : (arr_9 [i_2])))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_15 |= var_4;
            var_16 = ((arr_9 [i_3]) << (((arr_9 [i_3]) - 35)));
            var_17 = var_4;

            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                arr_17 [7] [i_2] [1] [i_2] = var_4;
                arr_18 [i_2] [10] [i_2] [9] = (arr_15 [i_4 - 1]);
            }
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_18 = (var_8 > -140291993);
                var_19 = (-(arr_15 [i_2]));
            }
            for (int i_7 = 2; i_7 < 7;i_7 += 1) /* same iter space */
            {
                arr_26 [i_2] [i_5] [i_5] [i_2] = var_7;
                arr_27 [i_2] [i_5] [3] [i_7] = (((-9180684514986142789 - 65521) - (((((((arr_12 [i_7] [i_5]) ? var_6 : var_1))) ? (arr_0 [i_7 - 2] [i_5]) : (~var_3))))));
                arr_28 [i_2] [i_5] [i_5] [i_7] |= ((((18446744073709551615 ? 18446744073709551589 : 854429540))));
                var_20 += ((!(~var_9)));
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 7;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    arr_34 [i_2] [i_2] = (((arr_21 [i_2] [i_2]) ? (arr_31 [i_2]) : (arr_29 [i_8] [i_8 + 4] [i_8 + 4] [i_9 + 1])));
                    arr_35 [i_2] [i_5] [i_8] [i_2] = ((!(arr_30 [i_8 + 3] [i_8] [i_8 - 1] [i_9 - 1])));
                    var_21 += (arr_32 [i_5] [i_9 + 2] [i_9 + 1] [i_9]);
                    arr_36 [i_2] [i_2] [i_2] [i_2] = ((var_4 ? (arr_30 [i_9] [i_9 + 2] [i_9 - 1] [i_8 - 2]) : (arr_25 [i_9 + 2] [i_9 - 1] [i_8 - 2])));
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_22 = ((arr_40 [i_8 + 4] [i_8 - 2] [i_8 + 3]) || (!74));
                    var_23 = ((var_5 ^ ((-(arr_21 [i_2] [i_10])))));
                    var_24 -= (~var_2);
                    arr_41 [i_2] [i_10] [i_10] [i_10] [i_2] [i_2] = (20917 ? 18446744073709551615 : 6885522764965226788);
                    var_25 = (min(var_25, (arr_14 [i_2] [i_5])));
                }
                var_26 = (max(var_26, (arr_37 [i_2] [i_5] [i_2] [i_8] [i_8 - 1])));
                arr_42 [i_2] [i_5] [i_2] [i_8] = var_7;
                arr_43 [i_2] [i_2] [i_2] [i_8 + 1] = ((~(arr_31 [i_2])));
                arr_44 [i_2] [i_2] [i_2] = var_9;
            }
            var_27 = max(((((arr_13 [i_2]) ? (arr_1 [i_2]) : 780628196))), ((((((arr_33 [i_5] [i_2] [i_2]) ^ (arr_2 [i_5] [i_2])))) ? (var_0 | var_6) : ((((var_1 <= (arr_33 [i_2] [i_5] [i_5]))))))));
            arr_45 [i_2] [i_2] = (!11561221308744324828);
            arr_46 [i_2] [i_2] [i_2] = min(var_9, ((+((((arr_15 [i_5]) <= var_10))))));
        }
    }
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        arr_49 [i_11] [i_11] = (min(((!(arr_4 [i_11] [i_11] [i_11]))), ((!(((arr_0 [1] [i_11]) || (arr_1 [i_11])))))));
        arr_50 [i_11] = ((((arr_0 [i_11] [i_11]) ? -var_3 : var_1)));
    }
    var_28 = ((-(((!var_2) ? var_9 : var_10))));
    var_29 = var_8;
    #pragma endscop
}
