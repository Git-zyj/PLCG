/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = min(var_0, (max((!var_1), var_0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = var_5;
        var_19 = var_7;
    }
    var_20 = ((((min(var_15, var_2))) && ((!(~var_10)))));
    var_21 |= var_1;
    #pragma endscop
}
