/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 |= arr_2 [i_0];
        var_18 = (((arr_0 [i_0]) == (arr_1 [i_0])));
        var_19 = (max(var_19, ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
    }
    var_20 = ((14307297094432736951 ? var_4 : 1));
    var_21 = (max(16664, (max(((max(var_16, 28775))), -var_13))));
    var_22 += -8796093021184;
    #pragma endscop
}
