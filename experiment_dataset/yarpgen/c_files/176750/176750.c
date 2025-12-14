/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_16 |= (max((((arr_1 [i_0]) ? var_1 : (arr_1 [i_0]))), (((arr_1 [i_0]) & (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [2] = max(((((0 ? (arr_3 [i_0] [i_0]) : var_9)) != var_10)), (((arr_4 [i_0] [i_0] [i_1] [i_2]) != (arr_0 [i_1]))));
                    var_17 = ((((((332547560 % var_2) & (((var_4 ? var_3 : (arr_5 [i_2] [i_1] [i_0]))))))) ? (!-9223372036854775801) : ((var_4 ? (((1 < (arr_3 [1] [i_1])))) : (arr_2 [i_0] [9] [i_0])))));
                    arr_9 [1] [1] = (arr_3 [i_1] [i_1]);
                    var_18 = (max((((((max(var_4, (arr_2 [i_0] [i_1] [i_2])))) > (arr_7 [i_1] [i_0])))), ((var_13 & (!50)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_19 = ((var_13 & (arr_0 [i_3])));
        var_20 += ((((268435455 < (arr_13 [i_3]))) ? var_10 : (arr_5 [i_3] [i_3] [i_3])));
        var_21 = var_0;
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_22 -= (arr_12 [i_4]);
        var_23 = (max(var_23, ((((var_14 && -var_4) ? var_13 : var_15)))));
        var_24 = (((((arr_5 [i_4] [i_4] [i_4]) ? var_6 : (var_6 % var_5)))) <= ((((min(var_7, var_4))) ? (((-(arr_15 [i_4])))) : (var_10 * var_4))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_25 = (max(var_25, var_7));
        var_26 = (arr_12 [i_5]);
        arr_18 [i_5] = -25332;
        var_27 = (((arr_14 [i_5] [5]) ? (var_3 / var_12) : ((var_10 ? var_3 : var_6))));
        var_28 = ((-(((arr_7 [i_5] [i_5]) ? (arr_7 [3] [i_5]) : var_9))));
    }
    var_29 = ((var_10 / ((min(var_0, 1)))));
    #pragma endscop
}
