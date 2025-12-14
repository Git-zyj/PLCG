/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((max(var_6, -1512935826)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (max(var_12, (~4835754938229274869)));
        var_13 = (arr_1 [i_0]);
    }
    #pragma endscop
}
