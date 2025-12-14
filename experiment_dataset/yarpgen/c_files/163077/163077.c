/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, ((((var_0 ? ((-22 ? var_1 : var_7)) : (~1555)))))));
        var_14 = (min(var_14, (arr_1 [i_0] [2])));
    }
    var_15 = (max(var_15, 10));
    #pragma endscop
}
