/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_19 = ((+(max((191 | -1823258686), 72057594037927935))));
        var_20 = (max(var_20, 1823258683));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (max(var_2, (min(-1, (!var_1)))));
        var_21 = (min(var_21, (max(var_3, 1823258677))));
        arr_6 [i_1] = (arr_4 [i_1] [i_1]);
        var_22 = (((arr_3 [i_1] [i_1]) | (((-1823258684 ? 1823258686 : 15735535342600342178)))));
        var_23 = (max(var_23, (min((((arr_4 [i_1] [7]) ? (min(var_2, 8191)) : var_16)), -30))));
    }
    var_24 = ((~var_2) / (min(var_16, var_10)));
    var_25 = var_15;
    #pragma endscop
}
