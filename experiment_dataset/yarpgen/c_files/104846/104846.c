/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((((((arr_0 [i_0]) ? -795080 : -73))) ? (((-2147483647 - 1) ^ var_7)) : -2147483647));
        var_18 = (!63);
        arr_3 [i_0] = 320698916;
        arr_4 [i_0] &= (49 == 18385817584230450586);
    }
    var_19 = (var_5 % var_15);
    var_20 = var_1;
    #pragma endscop
}
