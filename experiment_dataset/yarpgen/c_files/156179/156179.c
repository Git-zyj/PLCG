/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_16 = (min(var_16, ((((arr_0 [11] [i_0 - 3]) ? (arr_3 [i_0]) : ((((arr_1 [i_0 - 1] [i_0 + 1]) && var_9))))))));
        var_17 = (min(var_17, var_1));
        var_18 ^= (-2147483647 - 1);
    }
    var_19 = 6768966548087951433;
    #pragma endscop
}
