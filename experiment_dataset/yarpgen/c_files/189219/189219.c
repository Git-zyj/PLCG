/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_20 = ((min(var_6, (~7936))));
        arr_2 [i_0] [i_0] = -var_8;
    }
    var_21 &= var_2;
    var_22 = var_2;
    #pragma endscop
}
