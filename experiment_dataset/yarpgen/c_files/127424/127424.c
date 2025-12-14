/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (var_12 * var_13)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = arr_2 [i_0] [i_0];
        var_18 = 1;
    }
    var_19 |= (-2147483647 - 1);
    var_20 = (min((((~-1537395532) != var_15)), 1));
    #pragma endscop
}
