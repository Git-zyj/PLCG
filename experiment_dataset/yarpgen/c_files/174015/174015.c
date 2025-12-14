/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = var_9;
    var_17 *= var_6;
    var_18 = (min(-120, (((var_3 != (855605307 + 1729555555))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = ((var_1 ? ((((!(((151 ? 145 : var_13))))))) : (((max((arr_1 [1]), var_13)) & ((3341837434 ? -91 : var_7))))));
        var_20 = ((((arr_1 [i_0]) || var_10)));
    }
    #pragma endscop
}
