/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (((((16128 + (-7683 | var_8)))) > (max(16128, (var_9 & var_4)))));
    var_11 = var_7;
    var_12 = (min(var_12, 44764050));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_13 ^= (((((~(((arr_1 [i_0] [i_0]) ? var_3 : var_6))))) ? -32 : ((~((var_8 ? (arr_0 [i_0]) : var_6))))));
        var_14 = (((arr_1 [i_0] [i_0]) ? ((((!((((arr_1 [i_0] [i_0]) - 0))))))) : (min(((var_6 ? var_1 : (arr_0 [i_0]))), 0))));
        var_15 = (max(var_15, var_8));
    }
    #pragma endscop
}
