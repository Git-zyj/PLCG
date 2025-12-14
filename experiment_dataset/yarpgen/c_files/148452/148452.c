/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= 1466873344;
    var_14 = (3876426117255890599 ? ((-((var_4 ? var_3 : -1145446583)))) : var_3);

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_15 = var_3;
        var_16 += (arr_0 [i_0 + 1]);
    }
    #pragma endscop
}
