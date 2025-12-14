/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((var_1 ? var_6 : var_2)) / var_6))) ? (((~var_4) ? ((var_4 ? var_10 : var_9)) : ((var_9 ? var_1 : var_8)))) : ((var_7 ? (min(117, var_9)) : ((max(34586, 30947)))))));
    var_12 &= (min((((max(3043617358, 30947)) ^ (((var_0 ? var_1 : var_9))))), ((var_0 ? (~3323045002) : (((var_8 ? var_1 : var_0)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (((min(((0 ? -490313329 : 9906)), (arr_1 [i_0] [i_0]))) * 52));
        var_14 = ((~(((((!(arr_1 [i_0] [i_0]))) && var_6)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_15 = ((211507406 || (((8676 ? 1959338540 : 26110)))));
        var_16 = (max(var_16, (min((((!9473) * var_5)), (arr_3 [i_1])))));
        arr_5 [i_1] = var_0;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_17 = (((arr_1 [i_2] [i_2]) ? (arr_1 [i_2] [i_2]) : var_9));
        arr_8 [i_2] = ((-((19661 ? (arr_7 [i_2]) : (arr_0 [i_2] [i_2])))));
        arr_9 [i_2] = ((var_3 ? ((-(arr_6 [i_2] [i_2]))) : ((var_5 + (arr_7 [i_2])))));
    }
    var_18 *= var_7;
    var_19 |= ((!(((8676 ? 4095 : (7721 + 49))))));
    #pragma endscop
}
