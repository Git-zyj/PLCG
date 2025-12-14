/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_13 = (((((1422075710 ? (0 <= 16757271528878745249) : ((1 ? 0 : -2066918607))))) ? (min((((arr_0 [i_0] [i_0]) ? (arr_2 [10]) : (arr_1 [i_0]))), 2147483647)) : -2066918606));
        var_14 = (((!60) ? (arr_0 [i_0] [i_0]) : (((!(arr_1 [i_0]))))));
        var_15 = (max((((35184372088831 || (arr_1 [i_0 - 2])))), ((((222 ? 2097151 : 32757)) << 3))));
    }
    var_16 = var_9;
    #pragma endscop
}
