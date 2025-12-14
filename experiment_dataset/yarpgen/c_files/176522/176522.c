/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_1));
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = ((~(var_1 & var_5)));
        var_14 = ((((max(var_10, var_3))) && (((var_6 ? var_1 : var_4)))));
        var_15 = (max(var_15, ((max((max(var_0, ((var_2 ? var_1 : var_6)))), (((((var_7 ? var_10 : var_5)) >= var_6))))))));
    }
    #pragma endscop
}
