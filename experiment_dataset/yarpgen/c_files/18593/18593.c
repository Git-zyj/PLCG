/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0 + 3]) ? 565769255 : (arr_2 [i_0 + 2] [i_0])));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0 - 1] [i_0] = ((((var_4 + 9223372036854775807) << (((arr_5 [i_1]) - 7791260612158876646)))));
            var_13 = (var_8 ? (arr_0 [i_0]) : (arr_2 [i_1 - 1] [i_1]));

            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                var_14 = (min(var_14, (arr_2 [i_0 + 3] [i_1 - 1])));
                var_15 = var_6;
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {
                arr_11 [i_0] [i_0] = var_4;
                arr_12 [i_0] [i_1 - 1] [i_0] = var_1;
                var_16 += (arr_7 [i_0] [10] [i_3]);
                var_17 = (min(var_17, (((((var_6 ? -2057038402840655118 : var_1)) <= (arr_3 [i_3]))))));
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                arr_16 [i_1 - 1] [i_0] = ((((2642406358542450693 ? (arr_14 [i_0] [i_0] [i_0]) : (arr_14 [i_0] [i_1] [i_0]))) * (!var_1)));

                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    var_18 = (((((3357 & (arr_19 [i_0] [12])))) - (arr_10 [i_0] [i_0] [i_4] [i_5 + 1])));
                    var_19 = (((((arr_1 [i_4] [i_1]) | (arr_2 [i_0] [12]))) * (((var_6 + (arr_7 [i_5] [i_0] [i_0]))))));
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    var_20 = var_4;
                    arr_23 [i_0] [i_0] [i_0] = (~-125);
                    arr_24 [i_6] [i_0] [i_1] [i_1] [i_0] [13] = (((arr_20 [i_0 + 2] [6] [6] [i_0] [i_1 - 1]) / var_10));
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                {
                    var_21 = (arr_9 [i_7]);
                    arr_27 [i_0] [i_1] [i_0] = 190;

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_22 |= (((-125 / (arr_28 [i_0 + 2] [i_1 - 1] [i_1] [i_0 + 2] [i_7] [i_0 + 2] [i_8]))));
                        var_23 = (arr_2 [i_0] [i_0]);
                        var_24 &= ((((((arr_4 [i_1 - 1] [i_7] [i_8]) ? (arr_26 [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0] [i_0]) : 110))) ? -111 : (arr_29 [i_8] [7] [i_1] [i_1])));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_25 = (max(var_25, ((((arr_0 [i_0]) / (arr_22 [i_1] [i_1 - 1]))))));
                        arr_32 [i_0] [i_1] [i_4] [i_7] [i_9] = (!-2057038402840655125);
                    }
                    var_26 = 46686;
                }
                var_27 += (((arr_15 [i_1 - 1] [i_0 + 2] [4] [4]) / (arr_15 [i_1 - 1] [i_0 - 1] [i_0 - 1] [i_4])));
                arr_33 [i_0] [i_1 - 1] [i_4] [i_0] = (!2861576001);
            }
            arr_34 [i_0] = (((!(arr_7 [i_1 - 1] [i_0] [i_0 + 3]))) ? ((((!(arr_1 [i_0] [14]))))) : (arr_20 [i_0] [i_0] [i_1 - 1] [i_0] [i_1]));
        }
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            arr_37 [i_0] [i_0] [i_10 + 1] = (((var_3 + 2147483647) << (((var_10 + 80) - 31))));
            var_28 = (min(var_28, (((-29075 ? 127 : 50206)))));
            arr_38 [i_0] = ((((((((arr_7 [i_0 - 1] [i_0] [i_10]) + 2147483647)) << (((arr_28 [i_0] [i_0] [i_0] [i_10] [i_10] [i_10] [i_10]) - 898516423))))) && (arr_35 [i_10 + 1] [i_0 + 3])));
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_29 = (max(var_29, (((52859 ? 0 : 4294967295)))));
            arr_41 [i_0] = (arr_13 [i_0 + 1] [i_0 + 1]);

            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_30 = (arr_7 [i_12] [i_0] [i_0]);
                var_31 = ((1 + (3357 >= 16384)));
                arr_45 [i_0] = (arr_2 [i_0] [i_11]);
            }
        }
    }
    var_32 = var_9;
    var_33 = var_1;
    var_34 ^= var_11;
    #pragma endscop
}
