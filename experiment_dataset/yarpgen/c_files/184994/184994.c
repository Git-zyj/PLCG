/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(((max(var_6, 0))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        var_17 = (arr_0 [i_0]);
    }
    var_18 = var_8;
    var_19 = (((((var_6 ? 16354832449291513636 : var_12))) ? 164 : (~var_9)));
    #pragma endscop
}
