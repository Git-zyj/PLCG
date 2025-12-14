/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((~((3690367774 ? 123 : 123))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_12 ^= ((-13788 ? (56 >= 56) : var_7));
        var_13 -= (arr_1 [i_0 - 2] [i_0]);
        var_14 = var_3;
        arr_3 [i_0] [i_0] = 57;
    }
    var_15 = (min(var_15, var_4));
    #pragma endscop
}
