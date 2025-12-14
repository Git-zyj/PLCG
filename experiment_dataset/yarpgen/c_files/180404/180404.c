/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = ((-17 ? 5 : 0));
        arr_5 [i_0] = ((0 ? 18 : -23));
        var_17 = ((-13 ? 0 : 0));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 ^= (((arr_3 [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : (arr_3 [i_1] [i_1])));

        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_19 = 4294967276;
            var_20 = (((arr_9 [i_1] [i_2 - 1]) * (arr_6 [i_2 - 1] [i_2 - 1])));
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_21 = (i_3 % 2 == 0) ? (((arr_14 [i_3]) << (((arr_14 [i_3]) - 654228340)))) : (((arr_14 [i_3]) << (((((arr_14 [i_3]) - 654228340)) - 106447976))));
                var_22 *= -15;
            }
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {

                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_23 |= (((arr_19 [i_1] [i_3 - 1] [i_5 + 2] [i_1]) ? 0 : (arr_1 [i_1] [i_3 - 1])));
                        var_24 *= (((0 != 243) ? -17 : var_6));
                        var_25 += (~-10);
                        arr_26 [i_3] [i_3] [i_5] [i_6] [i_7] [i_7] = ((((1 | (arr_8 [i_1] [i_3] [i_1]))) | (var_10 | var_3)));
                    }
                    for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        var_26 = (max(var_26, 1));
                        var_27 = (((arr_24 [i_3] [i_8 + 1]) ? (arr_17 [i_1] [i_3] [i_3] [i_1]) : (arr_2 [i_1])));
                    }
                    for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        var_28 = ((-20 - (((arr_22 [i_1] [i_3] [i_5] [i_6] [i_6] [i_6]) ? (arr_1 [i_1] [i_3 - 1]) : (arr_0 [i_1] [i_3])))));
                        var_29 = (((arr_15 [i_9 - 1] [i_3] [i_5] [i_5 + 1]) != (arr_15 [i_9 + 1] [i_3] [i_9] [i_5 + 1])));
                    }
                    arr_33 [i_1] [i_3] [i_5 + 1] [i_6 - 1] [i_6 - 1] = ((-(((14 >= (arr_18 [i_1] [i_1] [i_3] [i_5] [i_5] [i_6 - 1]))))));
                    var_30 ^= (!0);

                    for (int i_10 = 1; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_31 = (max(var_31, ((((arr_18 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10] [i_10 - 1] [i_10 + 1]) % 1)))));
                        var_32 = (max(var_32, ((((((1 ? 0 : 0))) || ((!(arr_9 [10] [i_3]))))))));
                        arr_38 [i_1] [i_3 - 1] [i_5 + 1] [i_6] [i_3] [i_10] = ((((((arr_20 [i_3]) / var_1))) * ((var_9 ? (arr_1 [i_3 - 1] [i_10]) : (arr_14 [i_3])))));
                        var_33 = ((-1 < 1) ? ((var_0 * (arr_17 [i_10] [i_3] [i_3] [i_1]))) : (arr_8 [i_1] [i_5 + 2] [i_5 + 2]));
                    }
                    for (int i_11 = 1; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        var_34 = ((((((arr_40 [i_1] [i_3] [i_3] [i_6 - 1] [13] [i_11]) ? 1 : var_6))) ? (((arr_21 [i_3] [i_3] [i_5] [i_6 - 1]) + var_6)) : ((((arr_15 [i_11] [i_3] [i_3] [i_1]) ? var_11 : (arr_36 [i_1] [i_3] [i_3] [i_5 + 2] [i_6 + 1] [i_11]))))));
                        var_35 = 0;
                    }
                    for (int i_12 = 1; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        var_36 = (min(var_36, (16 / var_14)));
                        var_37 ^= (arr_8 [8] [2] [2]);
                        var_38 *= (((arr_23 [i_1] [i_3] [i_5] [i_3 - 1]) | (arr_41 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_5 + 2] [i_6 - 1])));
                        var_39 = (((((arr_19 [i_1] [i_5] [i_6] [i_12]) | (arr_13 [5]))) & ((((arr_43 [3] [i_3] [i_6] [i_3]) ? -1 : (arr_20 [i_3]))))));
                    }
                    arr_45 [i_1] [i_3] [i_1] [i_5] [i_6 + 1] = 18446744073709551598;
                }
                var_40 = ((0 ? ((var_15 ? var_10 : 0)) : var_7));
                var_41 = (((((((arr_43 [i_1] [i_3 - 1] [i_3 - 1] [i_3]) == (arr_42 [i_5] [i_3] [i_3 - 1] [7] [i_1]))))) / (((arr_13 [i_1]) ? var_0 : 0))));
                arr_46 [i_3] [i_3] [i_1] [i_3] = 4;
                arr_47 [i_1] [i_5] [i_5 + 3] [i_3] = (((~var_1) & var_1));
            }
            var_42 = var_12;
            var_43 = (max(var_43, ((((((18446744073709551598 ? 16 : -3))) ? 1 : (arr_2 [i_3 - 1]))))));
            arr_48 [i_3] [i_3] = (-(((arr_31 [i_3] [i_3]) ? 0 : 0)));
        }
        var_44 += (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    var_45 = (max((!var_12), ((0 ? var_10 : var_14))));
    #pragma endscop
}
