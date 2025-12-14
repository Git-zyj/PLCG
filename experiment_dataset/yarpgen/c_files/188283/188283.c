/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (max(var_10, var_7));

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (~(4416 == var_8));
        var_15 = 1765663205;
    }
    #pragma endscop
}
