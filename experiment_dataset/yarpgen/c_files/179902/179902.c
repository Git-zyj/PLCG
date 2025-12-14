/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = ((-1 ? (~var_1) : (arr_1 [i_0])));
        var_18 = (max(var_18, (~var_0)));
    }
    var_19 = var_5;
    var_20 = ((var_9 ? 30542 : 234));
    #pragma endscop
}
