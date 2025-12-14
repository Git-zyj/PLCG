/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = (!var_5);
    var_17 = ((min(var_2, (~193))) != var_13);
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 = 1;
        arr_2 [i_0 + 1] = ((((((-(max(var_8, (arr_1 [i_0]))))) + 9223372036854775807)) >> (var_8 - 16783)));
    }
    #pragma endscop
}
