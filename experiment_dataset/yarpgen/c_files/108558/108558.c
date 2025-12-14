/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (~var_11)));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_14 = (max(var_14, var_1));
        var_15 = (max(var_15, (arr_0 [i_0])));
        var_16 = (max(var_16, (((+((+((0 ? (arr_0 [i_0]) : 4294967295)))))))));
    }
    var_17 = var_12;
    #pragma endscop
}
