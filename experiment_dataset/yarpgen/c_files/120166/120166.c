/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((max((min(var_3, var_2)), var_2)), ((var_13 / (var_3 && var_15)))));
    var_19 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (min((min((3 - 33), ((min(var_17, var_2))))), (min((min(18446744073709551612, -15796)), (arr_4 [14] [i_1])))));
                    arr_6 [i_1] [i_1] [i_2 + 2] = (((min(((var_12 ? var_3 : var_13)), (var_15 / var_3)))) != (min(var_7, (((var_14 == (arr_0 [11])))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_13 [i_3] [i_3 + 1] [i_3 + 1] = ((((((arr_4 [i_3 + 1] [i_4]) ? var_8 : var_8))) ? (var_17 | var_5) : (((var_16 & (arr_11 [i_3] [i_3 + 1] [i_4]))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_21 = (((arr_1 [i_3] [i_4]) ? (((arr_7 [i_3 + 1] [i_4]) ? (arr_3 [i_6] [i_5] [i_3 + 1]) : (arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1]))) : (((var_15 ? var_15 : (arr_20 [i_6] [i_4] [5] [i_6]))))));
                        var_22 = (arr_10 [16] [i_4] [i_3 + 1]);
                    }
                }
            }
            var_23 = (arr_11 [i_4] [i_4] [i_3]);
            var_24 -= var_8;
        }
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            arr_24 [i_7] = (((((var_9 ? (arr_10 [6] [i_7 - 1] [i_7 - 1]) : var_3))) < var_17));
            arr_25 [19] [i_7] [6] = (arr_21 [i_7 + 2]);
        }
        var_25 = (((var_9 <= var_0) * var_6));
        arr_26 [i_3 + 1] = var_15;
        arr_27 [i_3] = ((arr_9 [i_3] [i_3 + 1]) ? var_10 : (arr_10 [i_3 + 1] [i_3 + 1] [3]));
        var_26 = (((((var_0 ? var_14 : var_2))) ? (((arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (arr_3 [i_3 + 1] [i_3 + 1] [i_3 + 1]) : var_12)) : (((((arr_23 [i_3 + 1] [19]) <= var_1))))));
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_27 |= (arr_23 [i_10 + 1] [11]);
                        var_28 = (min(var_28, (arr_4 [i_10 - 3] [i_9 + 2])));
                        arr_38 [i_11] [i_9] [0] [i_11] [i_11] = (max((min(var_8, (min((arr_35 [8] [i_9] [i_8]), var_8)))), var_2));
                    }
                }
            }
            var_29 = (min((min((arr_37 [16] [16]), (((arr_5 [i_9 + 2]) ? (arr_16 [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (arr_28 [i_8 + 1]))))), (((((max((arr_1 [i_8] [2]), var_11))) || (arr_29 [i_8 + 1]))))));
            arr_39 [i_8] [i_9] = (max(((max(var_16, (min((arr_37 [i_8 + 1] [i_9 + 4]), (arr_8 [i_9 + 1])))))), (min(((min(var_10, 190))), 536868864))));
        }
        arr_40 [1] [i_8 + 1] = (min((arr_32 [i_8 + 1] [10]), (arr_18 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1])));
    }
    #pragma endscop
}
