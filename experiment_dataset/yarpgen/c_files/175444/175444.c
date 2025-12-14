/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_14 = min((arr_1 [i_0] [i_0 - 2]), (min(var_5, (arr_0 [i_0 + 2]))));
        var_15 |= var_4;
    }
    #pragma endscop
}
