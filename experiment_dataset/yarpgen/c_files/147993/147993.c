/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((((min(((var_13 ? var_14 : 25967)), ((1 ? -23760 : 0))))) ? var_10 : 1));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_17 = ((17880 ? ((-((1 ? 0 : -1352125780)))) : 1));
        var_18 = (max(var_18, 24155));
    }
    #pragma endscop
}
