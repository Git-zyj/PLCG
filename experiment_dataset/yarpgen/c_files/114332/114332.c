/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += min((((var_9 | var_13) ? (min(var_13, (-32767 - 1))) : (((max(45, -32765)))))), (((max(var_7, 452600092)))));
    var_17 = ((((((-32765 + 2147483647) << (((min(var_3, var_13)) - 24544))))) >= 1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 10396269954430076262;
        var_18 |= (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_2));
    }
    #pragma endscop
}
