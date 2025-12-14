/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_8));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = 152;
        var_17 = ((var_4 ? 477375599 : (!126)));
    }
    var_18 = (((~77) ? ((((var_3 || (((28 ? var_7 : 204))))))) : 35184372023296));

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] = 1;
        var_19 |= ((1 ? ((((((arr_5 [i_1]) - 1))) ? (!1) : 209)) : ((~(~41782)))));
    }
    var_20 = (((((-1084637635 ? -1 : 1))) ? 75 : var_14));
    #pragma endscop
}
