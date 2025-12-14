/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_0));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 = -4636594786388690160;
        var_16 -= 4294967295;
        var_17 &= ((-9223372036854775805 ? ((max(-47, -87))) : (-9223372036854775807 - 1)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((6096054786821904749 ? ((-87 ? 46 : 1)) : -3074344183814275225)))));
        var_19 = ((((min(var_13, -56))) ? 0 : 117));
    }
    #pragma endscop
}
