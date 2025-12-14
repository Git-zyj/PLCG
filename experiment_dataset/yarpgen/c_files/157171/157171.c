/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((max((max(var_16, (max(var_5, var_7)))), var_4)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = var_10;
        var_19 = (min(var_19, (arr_1 [i_0])));
    }
    #pragma endscop
}
