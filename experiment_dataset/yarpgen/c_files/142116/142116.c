/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_3;
    var_20 = var_0;
    var_21 = var_16;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = var_17;
        var_22 &= (max((((1684145476 ? -27648 : -27648))), (max(((max(var_15, var_1))), ((var_9 ? var_4 : var_2))))));
    }
    #pragma endscop
}
