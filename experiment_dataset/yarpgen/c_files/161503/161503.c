/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~17131);
    var_21 = (((2638488532 ? var_0 : ((max(-17131, -17131))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((!1181089385212305652) ? 1610132406 : var_3);
        arr_4 [i_0] = (~var_19);
        var_22 *= (~var_5);
        var_23 = 1181089385212305664;
    }
    #pragma endscop
}
