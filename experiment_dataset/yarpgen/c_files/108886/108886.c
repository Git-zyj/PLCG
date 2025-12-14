/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        var_12 = var_2;
    }
    var_13 = var_5;
    #pragma endscop
}
