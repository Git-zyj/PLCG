/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_1;
    var_12 = ((+((max((var_10 || 4294967277), 19880)))));
    var_13 = (min(-var_8, var_5));
    var_14 = -var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (((((var_8 & (arr_1 [i_0])))) ? 1 : ((var_10 ? var_3 : var_2))));
        var_16 = (min(var_16, ((((arr_1 [i_0]) / 44268)))));
    }
    #pragma endscop
}
