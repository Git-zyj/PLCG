/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((max(-18446744073709551615, (var_14 < var_4))) << ((((var_15 ? (arr_0 [i_0]) : var_2)) - 60))));
        arr_2 [8] = ((((max(0, -77))) ? (((1 / 20799) * ((max(var_2, var_4))))) : (((((max(var_14, 76))) < 1)))));
    }
    var_17 = (var_13 < ((-((var_13 ? 28600 : 65535)))));

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (max(var_4, (min(var_0, 15613588590974948794))));
        var_18 = (((1523523403 && -4372) || 1));
    }
    #pragma endscop
}
