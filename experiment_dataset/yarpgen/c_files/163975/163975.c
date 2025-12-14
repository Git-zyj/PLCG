/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [11] = (!0);
        arr_3 [i_0] [i_0] = ((~(var_11 <= var_7)));
        var_17 = 32767;
    }
    var_18 = var_16;
    var_19 = (!4656);
    var_20 = ((~((~((65535 ? 32767 : var_13))))));
    #pragma endscop
}
