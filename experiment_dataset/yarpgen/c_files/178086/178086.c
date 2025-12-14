/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_10 << (((((min(var_2, (61197 | 6303472268197162472))) + 109)) - 20))));
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = 61181;
        var_15 = ((3 ? ((6303472268197162472 ? 1023 : 3208793224313506768)) : 17));
    }
    #pragma endscop
}
