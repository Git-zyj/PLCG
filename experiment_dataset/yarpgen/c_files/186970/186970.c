/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!(((var_4 ? ((var_7 ? 6027661949971862919 : var_1)) : var_13)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = var_10;
        var_16 = var_9;
        var_17 = (!16711615577325586903);
        var_18 = ((!(((230 ? 2147483647 : var_4)))));
    }
    #pragma endscop
}
