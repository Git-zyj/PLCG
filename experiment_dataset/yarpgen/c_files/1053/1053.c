/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((~(!var_6)));
        var_11 += ((var_8 ? 1 : var_4));
    }
    var_12 = var_0;
    #pragma endscop
}
