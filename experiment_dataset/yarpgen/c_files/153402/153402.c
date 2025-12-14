/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 ? -2911744704 : (1383222592 + 188)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_13 = (var_8 && 2911744704);
        var_14 = (((arr_0 [i_0]) != (arr_0 [i_0])));
    }
    var_15 = var_0;
    #pragma endscop
}
