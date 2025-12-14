/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_11 = ((arr_0 [i_0 + 1] [i_0]) >> (var_9 - 12151));
        var_12 = -1794286971;
        var_13 = (max(var_13, var_6));
    }
    var_14 += ((((max(var_2, 9205357638345293824))) ? (!var_1) : (((var_8 ^ var_2) | var_9))));
    var_15 *= var_0;
    #pragma endscop
}
