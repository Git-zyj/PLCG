/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, -25873));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 = (arr_0 [i_0 + 2] [i_0 + 1]);
        var_14 ^= 3544839123;
        arr_2 [i_0 - 2] = (((arr_0 [9] [i_0]) < (~-11331)));
    }
    #pragma endscop
}
