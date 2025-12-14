/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (min((!var_1), (((2544678912 + 0) >= (3058826957 < 109)))));
        var_15 = var_1;
    }
    var_16 = ((3058826957 ? 30213 : (~43)));
    var_17 -= (-(((var_1 == 1236140339) - var_11)));
    var_18 -= (!2);
    var_19 = var_6;
    #pragma endscop
}
