/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] = -1;
            var_20 = (!15);
            arr_7 [i_1] = ((!(arr_3 [i_1] [i_1] [i_1])));
            arr_8 [i_0] |= ((!(((255 ? -15 : 16)))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [10] &= var_3;
            var_21 ^= var_0;
            arr_12 [21] [i_0] = (((((arr_10 [i_0] [i_0] [i_2]) + 2147483647)) << (((-42 + 63) - 21))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_22 = (max(var_22, (arr_0 [i_0] [i_0])));
            var_23 = var_18;

            for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
            {
                var_24 = (((-(arr_13 [i_3] [i_3]))));
                arr_17 [i_0] [i_3] [11] = (arr_15 [i_4 + 2] [i_3] [i_0]);
            }
            for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
            {
                var_25 = (((arr_14 [i_5 + 1]) < -10018));
                var_26 -= (((var_14 % var_5) ? 127 : (arr_3 [i_5] [i_5] [i_5 + 1])));

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_27 = var_4;
                    var_28 = ((59 ? var_12 : (((arr_15 [i_0] [i_0] [i_0]) * (arr_2 [i_0])))));
                }
                var_29 = (arr_3 [i_0] [i_0] [i_0]);
            }
            for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
            {
                var_30 = var_12;

                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    var_31 = var_10;
                    var_32 = (~var_16);
                    arr_27 [i_0] [i_7] [i_7] [i_7] = (arr_13 [i_8 - 1] [i_8 - 2]);
                    arr_28 [i_8] [i_7] [i_7] [i_0] = (((arr_19 [i_3] [i_7 - 1] [i_8]) ? var_11 : (arr_24 [i_0] [i_3] [i_0])));
                }
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    arr_32 [i_0] [i_7] [i_7] [i_9 + 3] = var_14;
                    var_33 = (min(var_33, (arr_13 [i_7 + 2] [i_9 + 1])));
                    var_34 = (((arr_26 [i_0] [i_7 + 1] [i_7] [i_9 + 1]) ? var_5 : -48));
                    arr_33 [i_9] [i_3] [i_3] [i_0] |= (arr_24 [i_7] [i_7 - 1] [i_7 - 1]);
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_35 = ((~((var_18 ^ (arr_30 [i_0] [i_3] [i_7])))));
                    var_36 = ((var_15 ? var_0 : 107));
                }
                arr_36 [i_7] = 96;
                arr_37 [i_7] [i_3] [i_7] = ((-21621 ? (arr_15 [21] [i_3] [i_7 + 1]) : var_2));
            }
            for (int i_11 = 1; i_11 < 20;i_11 += 1) /* same iter space */
            {
                arr_41 [10] [i_3] [i_3] [i_3] = var_12;
                arr_42 [i_0] [i_3] [i_3] = (arr_15 [5] [5] [i_11]);
                arr_43 [i_0] [i_3] [i_0] = var_7;
                var_37 -= var_12;
            }
        }
        arr_44 [i_0] [i_0] &= var_1;
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
    {
        var_38 = ((((-40 ? -var_2 : ((var_11 ? (arr_20 [i_12] [i_12] [i_12] [i_12] [7]) : (arr_21 [i_12] [i_12] [i_12] [i_12]))))) - var_17));
        arr_49 [i_12] = var_1;
        arr_50 [i_12] [i_12] = (((106 * ((-10018 ? var_0 : -6)))));
        var_39 = (min(var_15, (!var_2)));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
    {
        var_40 += ((((min((arr_4 [i_13]), (arr_4 [i_13])))) ? (min(((var_13 ? var_11 : 0)), (arr_9 [i_13] [i_13]))) : var_3));
        var_41 -= ((((0 / (arr_45 [16] [2]))) / var_17));
        var_42 = (max((max(((-1 ? -51 : 7)), -15)), ((var_4 ? ((var_2 ? 49 : var_10)) : -95))));
    }
    var_43 = (!var_4);
    var_44 = var_7;
    #pragma endscop
}
