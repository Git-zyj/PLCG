/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((2362183389 ? 8930859674482866223 : (max((((var_12 ? 22276 : 22279))), 63))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_18 = (max(var_18, 339910609));
        var_19 |= -var_13;
    }
    #pragma endscop
}
