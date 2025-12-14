/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_16, var_12));
    var_18 = (((-84 ? var_9 : var_9)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        arr_3 [i_0] [i_0] = (min(((max((arr_1 [i_0]), var_1))), var_6));
    }
    var_19 = (((~var_2) ? (min((var_11 ^ 869199795), (((var_6 ? var_9 : var_7))))) : (~var_5)));
    var_20 = -12519;
    #pragma endscop
}
