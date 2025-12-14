/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -32761;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_12 = var_2;
        var_13 = min(var_2, (max((var_4 & var_2), ((min(var_3, var_9))))));
    }
    var_14 = (min((max((min(32761, var_7)), var_6)), (max(2, (!var_2)))));
    #pragma endscop
}
