/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = var_0;
    var_17 -= 23;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (~27108);
        var_19 = -25926;
        var_20 = var_3;
    }
    #pragma endscop
}
