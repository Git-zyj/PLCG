/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = 106;
        var_13 = (min(var_13, (arr_1 [i_0] [i_0])));
    }
    var_14 = var_10;
    #pragma endscop
}
