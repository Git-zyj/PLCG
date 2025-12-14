/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 >> (((((var_0 ^ var_6) & var_10)) - 2798))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 += (((var_9 & 5) | var_3));
        arr_2 [i_0] [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_13 = var_5;

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_14 -= var_4;
            var_15 = var_8;
            var_16 += var_9;
            arr_9 [1] = ((var_5 / ((var_7 - (var_1 < var_7)))));
            arr_10 [i_1] [i_1] = ((var_7 / (var_1 - 55928)));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_13 [i_1] [i_1] [i_3] = (((((var_5 | var_4) / (var_0 | var_1))) | var_1));
            var_17 = var_3;
            arr_14 [i_1] [i_1] [i_3] = ((var_6 - (((0 / var_1) * var_1))));
        }
        arr_15 [i_1] = ((((var_0 | (255 - -1))) & var_5));
        var_18 = var_5;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_23 [i_6] [i_6] = (var_7 ^ var_1);
                arr_24 [i_6] = var_7;
            }
            var_19 = var_2;
        }
        arr_25 [i_4] [i_4] = (((var_5 / var_4) <= var_5));

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_29 [i_4] [i_7] = var_4;
            var_20 = (min(var_20, ((((var_4 <= var_3) - (var_5 & var_7))))));
            var_21 += (18446744073709551594 | -112);
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            arr_33 [i_8] = (((2582083310546964753 - 11549534805442688268) > (var_0 & var_1)));
            var_22 = var_5;
            var_23 = (max(var_23, ((((var_0 + var_8) | (var_6 + var_5))))));

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_37 [i_8] [i_8] [i_4] = var_9;

                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    arr_40 [i_4] [i_8] = (var_2 / var_6);
                    var_24 = var_8;
                    arr_41 [i_8] [i_8] [9] [1] = var_5;
                    var_25 = (max(var_25, var_4));
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    arr_44 [i_8] [i_9] = var_5;
                    var_26 = var_5;
                }
                arr_45 [i_8] [i_8] [i_8] = (((var_8 < var_8) & var_2));
                var_27 = (((var_4 && var_10) * (var_3 - var_7)));
                arr_46 [i_8] [i_8] [i_8] [7] = var_6;
            }
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            arr_51 [i_4] [i_12] = var_8;
            var_28 = var_4;
        }
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        arr_54 [i_13] = ((var_0 / ((var_1 << (((var_1 ^ var_6) - 14809))))));
        var_29 = (max(var_29, (var_1 <= var_3)));

        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            var_30 = var_4;
            arr_57 [i_14] = (25 + 48);
            arr_58 [i_13] = var_6;
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
            {
                var_31 = var_1;
                var_32 = ((var_1 + var_0) / (var_5 - var_1));
            }
            for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
            {
                var_33 = var_8;
                arr_69 [1] [i_13] [i_15] [i_17] = var_0;
            }
            for (int i_18 = 0; i_18 < 13;i_18 += 1) /* same iter space */
            {
                var_34 = (min(var_34, (((var_2 | (var_7 && var_7))))));
                var_35 -= (var_9 > var_0);
            }
            arr_72 [i_13] [i_13] [i_13] = var_3;
        }
        var_36 = var_6;
    }

    for (int i_19 = 0; i_19 < 24;i_19 += 1)
    {
        var_37 = (((-1073577095 & var_2) / ((((var_2 / var_0) <= (var_9 & var_9))))));
        var_38 |= ((((var_6 ^ (((var_5 + 2147483647) << (var_10 - 36845))))) ^ var_0));
    }
    var_39 += var_0;
    var_40 = var_6;
    #pragma endscop
}
