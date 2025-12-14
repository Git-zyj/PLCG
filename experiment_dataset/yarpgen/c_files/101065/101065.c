/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_4 ^ var_8) ^ var_8));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_11 = (((((var_7 ? 2081702052 : 84))) ^ (arr_0 [i_0 - 1])));
        var_12 |= (!var_0);
        var_13 = (arr_0 [i_0 + 1]);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_14 = (((((min(172, 84)))) ^ -4244732446178290134));
        var_15 = var_2;
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((((arr_2 [i_2]) ? (((((var_3 ? var_9 : var_9))) ? (var_3 ^ 9223372036854775807) : var_5)) : var_1)))));
        var_17 &= (((!var_5) ? (max((((arr_0 [i_2]) ^ (arr_4 [10]))), ((max((arr_4 [8]), 8781))))) : var_0));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
    {
        var_18 *= (arr_6 [i_3 - 1]);
        var_19 -= (((arr_1 [i_3 + 1]) ? ((var_8 ? var_3 : (arr_10 [i_3]))) : (arr_3 [i_3 - 1] [i_3 + 2])));
    }
    var_20 = var_1;
    #pragma endscop
}
