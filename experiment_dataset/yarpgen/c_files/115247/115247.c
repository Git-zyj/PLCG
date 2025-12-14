/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_1 ? var_7 : (((((var_9 ? var_8 : var_7))) ? ((var_8 ? var_7 : var_8)) : (((var_2 ? 4194303 : var_9)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 &= ((((598219915 && (!4194278))) ? ((6311 ? 2147483646 : (0 + 4194303))) : var_6));
        var_12 = (var_3 + (254 || 503316480));
    }
    #pragma endscop
}
