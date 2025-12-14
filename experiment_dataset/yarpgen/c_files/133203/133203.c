/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 57669;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_19 = var_0;
        arr_4 [i_0] [i_0 + 1] = var_13;
    }
    var_20 |= 23447;
    #pragma endscop
}
