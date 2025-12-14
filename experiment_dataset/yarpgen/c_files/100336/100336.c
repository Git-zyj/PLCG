/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 64;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= -1;
        var_21 = 183;

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_22 = arr_1 [9];
            arr_5 [10] [i_1] = var_3;
            var_23 = (min(var_23, -714879620));
            var_24 = (((((((265642408 ^ (arr_4 [i_1] [i_0])))) ? (arr_0 [i_0]) : var_11)) << (((((((var_5 ? var_13 : var_0))) ? var_18 : var_15)) - 8077546346566637810))));
        }
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_8 [13] = ((~(((((var_13 ? (arr_6 [i_2] [i_2]) : var_11))) ? ((min(265642408, (arr_6 [i_2] [i_2])))) : -var_6))));
        arr_9 [3] = ((((max(((-1213568208 ? (arr_7 [0] [i_2]) : var_3)), 78))) ? (((arr_7 [17] [i_2]) ? 10171486239672949629 : var_7)) : (((var_17 ? ((((arr_6 [2] [i_2]) == var_18))) : (arr_6 [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_25 = var_5;
        var_26 = (min(var_26, (((var_1 ? (arr_6 [i_3] [i_3]) : (arr_7 [i_3] [i_3]))))));
        var_27 -= (((arr_12 [16]) && var_3));

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_28 = (var_8 * (arr_12 [i_3]));
            var_29 = -1221101883;
        }
    }
    var_30 = ((((((~19) ? (max(-37, var_2)) : var_6))) * var_1));
    #pragma endscop
}
