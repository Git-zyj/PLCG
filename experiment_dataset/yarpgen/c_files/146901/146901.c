/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (max(var_18, ((((min(3028251472, var_1)) >= (~var_15))))));
        var_19 ^= var_6;
        var_20 = (min(var_20, (((~(1266715823 | 3028251472))))));
    }
    var_21 = (max(var_21, var_16));
    #pragma endscop
}
