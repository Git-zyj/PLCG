/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (min((min((min(-1, var_10)), 46159)), var_8));
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (!1);
        var_17 = 4294967295;
    }
    var_18 = min(4294967295, 1);
    #pragma endscop
}
