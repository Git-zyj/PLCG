/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((!var_6), ((var_1 ? (max(var_2, var_12)) : (var_0 <= var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (!var_14);
        var_17 &= (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 = (min(var_18, (arr_4 [i_1] [i_1])));
        var_19 = (min(var_19, (~41515)));
    }
    var_20 = min(var_5, 41524);
    #pragma endscop
}
