/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = (((((max(-31961, var_11) < var_10)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (4236516118 >= -var_4);
        arr_2 [1] = var_2;
    }
    #pragma endscop
}
