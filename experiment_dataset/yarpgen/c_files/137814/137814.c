/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 52923;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (min(var_19, 1));
        var_20 += ((((((13450 ? 12522936099608312242 : 0))) ? 4094 : 18908)));
    }
    #pragma endscop
}
