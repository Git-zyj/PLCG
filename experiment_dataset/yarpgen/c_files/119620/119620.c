/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (max((((min(var_3, 1)))), var_10));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [2] [i_0] &= 1;
        var_14 |= (~var_1);
    }
    var_15 = (min(var_4, (min(var_3, var_7))));
    var_16 = (((((min(4018082133, 232)) ? ((var_6 ? var_11 : 4018082110)) : var_12))));
    var_17 = (min((var_5 % var_6), (max((var_11 || var_5), var_0))));
    #pragma endscop
}
