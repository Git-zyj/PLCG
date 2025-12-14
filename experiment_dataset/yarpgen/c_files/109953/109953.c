/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = ((var_9 ? ((~(min(7528156642486844228, var_4)))) : 14474));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = ((~(min(var_1, var_12))));
        var_19 = var_15;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_20 = var_2;
        arr_5 [i_1] = (229 > 1858398063);
    }
    #pragma endscop
}
