/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((!var_11) ? (((1 ? var_9 : var_11))) : var_4)) + -var_6));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (!-var_0);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] = var_13;
            arr_7 [i_0] [9] = (arr_1 [i_0 + 1] [i_0 - 1]);
        }
        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_0] [i_0] = (min((arr_8 [7]), ((((arr_5 [i_0 - 1] [7] [i_2 - 3]) <= ((min(0, 40188))))))));

            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    arr_16 [i_0] [i_2] [i_2] = min(((((max(var_1, (arr_4 [i_0] [i_2])))) == (arr_12 [i_2 - 1] [i_3 - 1] [i_4]))), ((40190 == (arr_4 [i_0 - 1] [i_0 + 1]))));
                    arr_17 [0] [i_0] [i_2] [i_0] [i_3] [i_4] = 114;
                    arr_18 [i_0] [i_2 + 2] [i_0] = ((((((-(arr_2 [i_2 - 3]))) != 501930832)) || (((((((~(arr_0 [i_0]))) + 2147483647)) >> (((max(8032711147186367110, var_14)) - 8032711147186367079)))))));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_21 [i_0] = (arr_0 [i_0 + 1]);
                        arr_22 [i_0 - 1] [i_0] [i_3] [i_0] [i_5] [i_2] [i_0] = (min(((((242 && var_7) < var_2))), (arr_15 [i_0 + 1] [i_0])));
                        arr_23 [i_0 + 1] [i_2] [i_3 + 3] [i_0] [i_5] [i_2 - 2] = arr_4 [5] [5];
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    var_18 = (((var_10 ? var_2 : var_11)));
                    arr_26 [i_0] [1] [1] [i_6] [9] = 1;
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    var_19 += (((((-2 - 11) + 2147483647)) >> ((18446744073709551609 ? 2 : (arr_19 [i_7] [i_3 + 1] [i_2] [7])))));
                    var_20 = (((arr_12 [i_0 + 1] [8] [i_3]) ? ((-(max((arr_28 [i_7] [i_3] [i_2] [i_0]), var_10)))) : 95));
                }
                arr_29 [i_0 + 1] [i_0 + 1] [8] |= 38841088207708514;
                arr_30 [i_0] = (arr_28 [i_3] [i_2] [i_2] [13]);
            }
        }
        for (int i_8 = 4; i_8 < 14;i_8 += 1)
        {
            var_21 += (arr_24 [i_8] [i_8] [i_8] [i_0 + 1] [i_0 + 1]);
            arr_33 [i_0] = -40188;
        }
        var_22 = (((arr_12 [i_0] [i_0 - 1] [i_0 + 1]) || ((max((((241 ? (arr_14 [i_0] [i_0] [i_0] [8] [2] [i_0 + 1]) : var_3))), 18446744073709551604)))));
        arr_34 [i_0] = var_0;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_39 [i_9] [i_9] = arr_35 [i_9];
        arr_40 [i_9] = arr_27 [i_9] [i_9] [i_9] [i_9];
        arr_41 [i_9] &= (!-var_16);
    }
    var_23 = var_3;
    #pragma endscop
}
