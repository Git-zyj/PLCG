/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_6));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (max(var_15, (((1 ? (!4) : ((3570619234 ? 4294967295 : var_4)))))));
        var_16 *= (arr_0 [i_0]);
    }
    #pragma endscop
}
