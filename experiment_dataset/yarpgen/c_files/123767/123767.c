/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 4099896550;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_16 = ((((min((arr_0 [i_0]), (arr_1 [i_0])))) ? (((var_2 ? (arr_1 [i_0]) : (arr_1 [i_0])))) : ((((arr_1 [i_0]) ? 9942 : 1)))));
        var_17 = ((~(~1)));
        var_18 = (((((((((arr_0 [8]) ? (arr_0 [2]) : 76))) ? (!1) : 1))) ? ((min(var_12, (arr_0 [i_0])))) : (min(var_0, 3621528197837893546))));
    }
    var_19 = (min((((var_5 & ((min(var_9, var_7)))))), 65535));
    #pragma endscop
}
