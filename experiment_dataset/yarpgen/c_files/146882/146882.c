/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 -= (arr_0 [1]);
        var_18 = 3;
        var_19 = (min(var_19, (arr_1 [i_0])));
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_20 = (max(3, -4));
        var_21 = -3;
        var_22 = (max((((((var_7 ? (arr_1 [i_1]) : (arr_0 [i_1])))) ? (arr_1 [i_1]) : -119)), (var_8 ^ 8954881529924890688)));
    }
    var_23 = ((var_9 ? ((((65535 && 65535) && var_4))) : ((((var_4 ? var_14 : 32760))))));
    #pragma endscop
}
