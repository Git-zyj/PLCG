/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 &= 5863;
        var_16 += 1;
    }
    var_17 = var_6;
    var_18 = (max(var_18, var_8));
    #pragma endscop
}
