/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = 1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (max(var_12, 1));
        var_13 = var_5;
    }
    #pragma endscop
}
