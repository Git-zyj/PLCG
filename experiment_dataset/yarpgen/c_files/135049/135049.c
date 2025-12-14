/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_11 != var_0) >> ((25426 ? 20 : var_7)))) | (25446 == 25426));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = (min(var_13, ((((((((var_0 ? 26351 : -7586773478977542091) + 9223372036854775807)) << (((arr_0 [i_0]) - 14949)))))))));
        var_14 += (--25447);
        var_15 -= var_7;
    }
    #pragma endscop
}
