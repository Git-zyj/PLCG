/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 = (max(var_10, ((((var_8 ? var_1 : (((max(var_5, var_9))))))))));
        var_11 = (min(var_11, ((min(((~(max((-9223372036854775807 - 1), var_4)))), (((min(var_6, var_0)))))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_12 = var_6;
        var_13 = var_4;
        var_14 = (((var_5 - var_1) - ((48 ? 2544838286404446886 : 4141613731))));
    }
    var_15 = var_3;
    #pragma endscop
}
