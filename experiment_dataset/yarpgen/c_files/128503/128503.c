/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 ? var_3 : ((max(var_4, ((max(75, var_7))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = 56;
        var_15 = (min((((1 ? 2147483646 : var_10))), var_9));
    }
    #pragma endscop
}
