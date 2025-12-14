/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_1;
    var_21 = (max(var_21, var_15));
    var_22 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_23 = ((854810509 | var_13) % 171626720);
        arr_3 [i_0] = (~854810509);
    }
    #pragma endscop
}
