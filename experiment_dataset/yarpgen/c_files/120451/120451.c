/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_10 = (max((((var_6 - var_7) - (arr_2 [i_0 - 1]))), ((var_5 ? var_5 : (arr_0 [i_0] [i_0 + 2])))));
        var_11 = (max(var_11, (((~(min((~15), (39305 ^ 81))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (((((60676 ? (arr_4 [i_0 + 2] [i_0] [i_0 + 2]) : var_0))) ? var_5 : (((arr_4 [i_0] [i_0] [i_0 + 1]) & var_3))));

            for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_11 [i_0] &= var_6;
                    arr_12 [i_0 + 1] [i_1] [i_2] = ((!(((-612 ? var_4 : 611)))));
                }
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    var_12 *= arr_3 [i_4 + 2] [i_4];
                    var_13 = ((!(arr_14 [i_0 + 2] [i_2] [i_2] [i_4 + 3] [i_0 + 2] [i_4])));
                }
                var_14 -= ((~(arr_7 [i_0 - 1])));

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_15 &= (((!var_5) + ((var_8 ? (arr_15 [i_5] [i_2] [i_0 + 1]) : (arr_16 [i_0] [i_0 + 2])))));
                    var_16 = arr_16 [i_0 - 1] [i_0 + 2];
                    var_17 = (((arr_15 [i_0 - 1] [i_1] [i_1]) ? (arr_5 [i_0 + 1]) : (arr_15 [i_0 + 1] [i_1] [i_2])));
                }
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
            {
                var_18 = (((arr_4 [i_0 + 2] [i_0 + 1] [i_0 - 1]) ? (arr_13 [i_6] [i_6]) : ((var_8 ? 65535 : (arr_17 [i_0])))));

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_19 = (((arr_16 [i_0 + 1] [i_0 + 2]) ? (arr_5 [i_0 - 1]) : var_3));
                    var_20 = var_8;
                    arr_22 [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((-14 ? (arr_7 [i_0 + 1]) : 168));
                    var_21 = (max(var_21, var_3));
                }
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    var_22 *= ((210 ? (arr_3 [i_0] [i_1]) : (arr_20 [i_0] [i_0 + 1] [i_8 + 2] [i_8 - 1])));
                    arr_25 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_8] = var_2;
                }
                arr_26 [i_0] [i_0] [i_0] = (((arr_10 [i_0 + 2]) | -14));
            }
        }

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_31 [i_9] = ((((((((~(arr_30 [i_0] [i_9])))) ? var_6 : ((min((arr_23 [i_0 + 2] [i_9] [i_0]), 168)))))) ? ((min(var_8, 0))) : ((((var_9 ^ (arr_5 [i_0 + 1])))))));
            var_23 = (arr_3 [i_9] [i_0 + 1]);
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_24 = ((+((((min((arr_10 [i_10]), 219))) ? ((min(var_2, (arr_32 [i_0] [i_10])))) : var_7))));

            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {

                /* vectorizable */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    var_25 = 14;
                    arr_38 [i_12] [i_11] [i_10] [i_0] &= arr_29 [i_0];
                }
                var_26 *= (max((min((arr_21 [i_0 + 1] [i_10] [i_11] [i_10] [i_11 - 1]), (((60803 && (arr_21 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0 + 2])))))), (((min(207, (arr_14 [i_11] [i_0 + 2] [i_10] [i_0 + 2] [i_10] [i_0 + 2])))))));
                arr_39 [i_0] [i_0] [i_11 + 1] = -var_7;
                arr_40 [i_0] = (max((var_5 & var_6), var_9));
                arr_41 [i_0] [i_0] [i_0 - 1] [i_0] = (min(var_7, (((((0 ? 50557 : 0))) ? var_1 : (arr_21 [i_0] [i_0] [i_10] [i_10] [i_11])))));
            }
            arr_42 [i_10] [i_0] = 30996;
        }
        for (int i_13 = 1; i_13 < 12;i_13 += 1)
        {
            var_27 ^= (((((var_1 ? var_7 : var_1))) ? (((arr_16 [i_0 - 1] [i_13 + 1]) / (arr_21 [i_0 - 1] [i_0 - 1] [i_13] [i_13] [i_13 - 1]))) : (arr_16 [i_0 + 1] [i_13 + 1])));
            arr_45 [i_0 + 2] &= (arr_17 [i_13]);
            arr_46 [i_0] &= ((var_8 | (((arr_15 [i_0] [i_13 + 1] [i_13 + 1]) ? (arr_15 [i_13] [i_13] [i_0 + 2]) : (arr_15 [i_0 + 1] [i_0 + 1] [i_13 + 1])))));
            arr_47 [i_0] [i_0] = ((var_0 || (arr_24 [0] [i_13 + 1] [0] [i_0 + 2] [0] [0])));
            arr_48 [i_13 - 1] [i_0] = ((+(((arr_8 [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 + 1]) - (arr_8 [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 + 1])))));
        }
        arr_49 [i_0 + 2] = (((((((min(var_0, (arr_35 [i_0] [i_0] [i_0] [i_0])))) ? var_4 : 0))) ? (min(((170 ? var_3 : (arr_44 [i_0] [i_0] [i_0]))), (arr_1 [i_0 - 1]))) : ((-(arr_44 [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
    }
    var_28 = var_7;
    var_29 = var_3;
    var_30 = (((!(((var_2 ? var_9 : var_7))))));
    #pragma endscop
}
