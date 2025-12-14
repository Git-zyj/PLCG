/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_16 - (((127 << 0) >> (((~1) + 9))))));
    var_19 = ((var_8 ? var_1 : (max((min(var_5, var_17)), (((119 ? var_6 : var_0)))))));
    var_20 = (((((((var_11 ? 0 : 53996)) - ((max(1, var_13)))))) ? 21 : var_1));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (var_11 * -75);
        var_22 = (948658582 ^ 1513);
    }
    #pragma endscop
}
