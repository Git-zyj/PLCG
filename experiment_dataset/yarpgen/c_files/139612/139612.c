/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_17 = -var_3;
        var_18 = (max(var_18, (0 * -var_11)));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = (1 >= var_11);
        var_19 |= (!-var_7);
        var_20 = 677514368;
    }
    #pragma endscop
}
