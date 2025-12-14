/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 6774877926698236564;
    var_20 = ((32768 ? ((338069203710944881 ? (((16630474318082977762 ? 49103 : 7578))) : var_5)) : 18108674869998606754));
    var_21 = (((25 ? (((5053002427622504249 ? var_7 : var_16))) : (max(9826801808280451859, -99)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_22 = ((~((4294967282 & ((1868493797329542600 ? var_3 : 765811426636783184))))));
        var_23 = var_14;
    }
    #pragma endscop
}
