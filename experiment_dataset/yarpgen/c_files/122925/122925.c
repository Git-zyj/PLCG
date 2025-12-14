/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (max(var_12, (((((max((((var_0 ? 1 : 1))), 15711585518534405679))) ? ((1 ? 1 : 134)) : ((max(var_2, 1))))))));
        var_13 = 1;
    }
    var_14 += (var_3 - var_11);
    #pragma endscop
}
