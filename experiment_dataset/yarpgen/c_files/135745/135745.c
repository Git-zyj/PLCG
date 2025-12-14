/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_13));
    var_15 = (((109 ? -65052815 : 8191)));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_16 = (~var_11);
        var_17 = (min(var_17, (((((((-288665378 ? 0 : -7275901421722898787))) ? (min(0, -1550338233)) : var_1))))));
        var_18 &= 255;
    }
    var_19 = ((-8192 ? -1 : 255));
    var_20 += var_5;
    #pragma endscop
}
