/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        var_17 = (max(((((arr_0 [i_0 + 4]) == var_4))), (min(23, -var_12))));
    }
    var_18 = var_2;
    #pragma endscop
}
