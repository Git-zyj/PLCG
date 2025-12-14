/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_4 ? var_16 : var_10) <= ((var_9 ? var_13 : var_0)))))));
    var_19 *= var_16;
    var_20 = ((((!(var_16 + -1113933071))) ? ((-var_5 + (min(var_8, var_12)))) : var_14));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_21 = (arr_0 [i_0]);
        var_22 = var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (((-(arr_0 [i_1]))))));
        var_24 -= (arr_3 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        arr_8 [7] = (arr_5 [i_2 - 2]);
        var_25 = (min(var_25, ((((arr_5 [i_2 + 1]) ? 0 : (var_0 | 290344826))))));
    }
    var_26 = ((-var_16 ? var_2 : 127));
    #pragma endscop
}
