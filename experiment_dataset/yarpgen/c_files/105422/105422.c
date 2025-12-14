/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_7;
    var_15 *= var_6;
    var_16 = ((-(min((1642694469928549168 && 121), var_9))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 -= var_9;
        var_18 &= (arr_0 [i_0]);
    }
    #pragma endscop
}
