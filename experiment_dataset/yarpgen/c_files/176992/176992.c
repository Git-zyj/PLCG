/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = var_12;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_1] = var_18;
                    var_22 = arr_2 [i_2];
                    arr_10 [i_1] [i_0] [i_1] [i_1] = (arr_1 [0] [19]);
                    arr_11 [i_1] [i_1] [18] [i_1] = ((-var_8 ? (((var_15 >= (arr_0 [i_0] [i_0])))) : (arr_6 [i_0] [i_0])));
                }
            }
        }

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                arr_16 [i_3] [i_4] = (-(1891132507 < 9223372036854775807));
                arr_17 [i_0] [i_0] [i_3] [i_4] = (~24127);
                var_23 = (max(var_23, var_13));
                var_24 = (arr_14 [i_0] [i_0] [i_3] [i_4]);
            }
            /* vectorizable */
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                arr_21 [i_5] [i_5] [11] [i_5] = (((var_13 - (arr_19 [i_5] [i_5] [i_5] [i_5]))));
                arr_22 [i_0] [i_5] [i_5] = arr_19 [i_0] [i_0] [i_5] [i_0];
                arr_23 [i_0] [i_5] [i_5 - 3] = var_19;
                arr_24 [i_0] [i_0] [i_0] [i_5] = var_12;
            }
            arr_25 [i_0] [i_3] = var_14;
        }
    }
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        var_25 = (!var_10);
        var_26 = (9223372036854775807 ^ 374);
        arr_28 [i_6] [i_6] = ((((var_15 ? (arr_5 [i_6] [14] [i_6 + 1]) : var_3))));
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        arr_31 [i_7] = var_17;
        arr_32 [i_7] = ((var_18 - (arr_4 [i_7] [i_7])));
        arr_33 [i_7] = ((arr_6 [i_7 + 1] [i_7 + 1]) ? (((min((arr_6 [i_7 + 1] [i_7 + 1]), (arr_1 [i_7 + 1] [i_7 + 1]))))) : var_3);
        var_27 = ((!((min(var_15, (arr_4 [i_7] [i_7]))))));
    }
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {
                {
                    var_28 = ((((((arr_13 [i_8 - 1] [i_9] [i_10 + 2]) ? (1208703096 < 1) : (((arr_6 [i_9] [i_9]) - var_19))))) ^ (arr_29 [i_9])));
                    var_29 = (min(var_29, (((((((var_13 > (arr_4 [i_8 + 1] [3]))))) + (88 < 9223372036854775807))))));
                }
            }
        }
        var_30 = ((var_11 >= (((((arr_30 [i_8 - 1] [i_8 - 1]) < ((var_18 ? var_19 : var_13))))))));
    }
    var_31 = (-1891132498 > var_2);
    var_32 = (((max(5475237889685132419, -175)) ^ ((((var_8 <= ((var_3 ? var_5 : var_14))))))));
    #pragma endscop
}
