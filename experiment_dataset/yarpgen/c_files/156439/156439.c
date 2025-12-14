/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 -= (max((min((!101), ((8453517652326370480 >> (18446744073709551600 - 18446744073709551563))))), (((!(arr_1 [4]))))));
        var_16 = (min(var_16, 17800));
    }
    var_17 = (min((min(var_3, ((22349 ? var_13 : var_5)))), var_8));
    var_18 ^= ((17800 << (((-17800 || (((940592111887332423 << (var_5 - 16426509243196998322)))))))));
    var_19 = (max(var_19, var_14));
    var_20 += (((((var_12 | 18446744073709551598) ? var_8 : ((17506151961822219193 ? 18320360630628622348 : 18446744073709551614))))) ? -var_7 : (var_6 - 17506151961822219196));
    #pragma endscop
}
