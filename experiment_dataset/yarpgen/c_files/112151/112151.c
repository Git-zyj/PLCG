/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((12513592747634230715 ? -10 : -10));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [5] = (-2147483647 - 1);
        var_18 = (165 ? ((1289895122 ? -2028012555 : 4)) : 1);
    }
    var_19 = ((var_5 ? var_12 : var_8));
    var_20 = (min(var_20, (((var_4 ? ((var_7 ? ((169 ? 1291148339 : 9)) : ((165 ? 0 : 226)))) : var_5)))));
    #pragma endscop
}
