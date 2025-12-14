/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = 1;
        var_22 = (max(var_22, ((max((arr_1 [6]), 0)))));
        var_23 = (min(var_23, ((min(474128171, (arr_2 [2] [2]))))));
    }
    #pragma endscop
}
