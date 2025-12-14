/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_15 = 128;
        var_16 = 139;
    }
    var_17 |= 143;
    var_18 = (max(var_18, 140));
    #pragma endscop
}
