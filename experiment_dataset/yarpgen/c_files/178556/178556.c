/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 = var_3;
        arr_2 [7] [13] = ((((max((max(var_2, 561712306899294214)), (min(-1479, var_9))))) ? (min(3797523477, -5555230134093645011)) : ((min((max(1435982605, -8371)), (min(32766, 3943610527)))))));
    }
    var_20 = ((((max(var_10, (min(var_8, 3584))))) & -8953923404611802435));
    #pragma endscop
}
