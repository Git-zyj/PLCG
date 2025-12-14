/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [1] = (~((((var_4 | var_5) == var_3))));
        var_16 = (min(var_16, ((max((((min(var_14, var_12)))), (((((19424 ? var_14 : var_2))) ? 479278152354983404 : (var_8 == -1496509914))))))));
    }
    #pragma endscop
}
