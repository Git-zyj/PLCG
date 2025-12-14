/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_19 ^= ((!((((var_10 == 17) / ((0 ? 12 : -1614409263)))))));
        arr_2 [i_0] [i_0] = var_17;
        arr_3 [16] = ((+(((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_8 [2] |= (arr_1 [i_1 + 1]);
        var_20 ^= (((arr_4 [2]) + (((arr_7 [i_1]) ? var_11 : (arr_0 [i_1 + 1])))));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_11 [i_2] = (~-1);
        var_21 *= ((!((!(((var_13 ? var_15 : var_13)))))));
        var_22 = (arr_10 [i_2 - 1] [i_2 + 1]);
    }
    var_23 = ((var_2 ? (max(var_0, (~1964))) : ((max((var_2 && var_3), (!0))))));
    var_24 = ((-1032064150 ? var_16 : 2147483647));
    var_25 = (~-1);
    #pragma endscop
}
