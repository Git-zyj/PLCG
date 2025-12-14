/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_20 = ((-(arr_0 [i_0 + 2])));
        var_21 = (max(var_21, (((((max((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))), ((max(0, (arr_0 [i_0]))))))) ? ((((min((arr_0 [i_0]), var_17))) ? (max((arr_0 [i_0 + 2]), (arr_1 [i_0]))) : -1)) : -5871200405703815466)))));
        var_22 += (arr_1 [i_0]);
    }
    var_23 |= var_6;
    #pragma endscop
}
