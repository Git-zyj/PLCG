/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((((1 ? 1 : 1))) ? (min((!-234314133), (max(4294967292, -2610879699140871347)))) : ((+((9223372036854775783 << (((-4282557087572450187 + 4282557087572450236) - 49)))))))))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_17 = var_4;
        arr_3 [i_0 - 2] [3] = -1120637677;
        var_18 = max(((41634 & ((var_10 << (((arr_1 [i_0 - 3]) + 94)))))), (((-4282557087572450187 ? var_13 : var_14))));
    }
    var_19 = ((var_4 ? (var_5 != 39923) : (((1 / var_12) ? var_4 : 95))));
    #pragma endscop
}
