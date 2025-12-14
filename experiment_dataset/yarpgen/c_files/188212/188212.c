/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (min(var_19, (((-(9223372036854775787 + var_10))))));
        var_20 = (min(var_20, (!2484717724)));
    }
    var_21 = (min(var_21, var_7));
    #pragma endscop
}
