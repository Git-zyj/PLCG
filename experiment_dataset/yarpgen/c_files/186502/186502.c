/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_17 = (max(var_17, 0));
        var_18 = 18446744073709551600;
    }
    var_19 = var_10;
    var_20 = (-32767 - 1);
    var_21 = (-var_13 + (max(var_11, -var_6)));
    #pragma endscop
}
