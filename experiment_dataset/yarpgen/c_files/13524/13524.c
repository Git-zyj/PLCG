/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 = (min(var_12, ((((((var_2 ? (0 < var_4) : ((var_11 ? var_8 : 13440))))) ? ((var_5 ? (arr_2 [4]) : var_4)) : 11697468198569176915)))));
        var_13 = (min(var_13, (((13440 ? (max(2147483636, var_1)) : (((arr_1 [i_0 + 1]) ? -18461 : 0)))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_14 -= 13440;
        arr_5 [i_1 - 2] [i_1 - 1] = 209;
    }
    var_15 = (max((max(((min(var_6, 248))), var_4)), var_7));
    #pragma endscop
}
