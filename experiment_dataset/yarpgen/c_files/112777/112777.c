/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_20 |= ((var_9 / (arr_1 [i_0 - 1] [0])));
        var_21 += ((max(((45 ? 6082748731499696746 : 678522817)), (arr_1 [i_0] [i_0]))));
    }
    var_22 += (~var_8);
    var_23 = (min(var_23, (min(5816, var_5))));
    var_24 = var_6;
    #pragma endscop
}
