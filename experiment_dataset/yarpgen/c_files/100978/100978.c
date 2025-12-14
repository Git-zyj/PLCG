/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((var_14 ? var_4 : var_13))) | var_6))) ? (max(-4162704586855668449, var_11)) : ((0 ? ((max(28, 1718740927))) : var_9))));
    var_19 = var_9;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_9;
        arr_3 [i_0] [i_0] = ((var_8 ? (min((min(4162704586855668448, var_15)), var_2)) : ((((arr_0 [i_0]) - (arr_1 [i_0 + 2]))))));
    }
    #pragma endscop
}
