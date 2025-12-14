/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((min(((1 << (968465012 - 968465011))), 13620093568907702424)) & ((-17635 ? -118 : (arr_1 [i_0])))));
        arr_3 [i_0] = arr_0 [i_0];
        var_11 = (max(var_11, var_0));
        var_12 *= (arr_1 [i_0]);
        var_13 = -1;
    }
    var_14 += var_7;
    var_15 = ((var_1 ? (((1 ^ 0) ? (((min(var_2, -32)))) : var_1)) : (((((((var_8 + 2147483647) << (802022404 - 802022404)))) ? var_5 : 0)))));
    var_16 = ((((!(-32767 - 1))) ? (((89 ? var_7 : var_6))) : 339638377065652074));
    #pragma endscop
}
