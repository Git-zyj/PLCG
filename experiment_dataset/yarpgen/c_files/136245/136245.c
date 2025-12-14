/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (arr_3 [i_0]);
        var_18 -= ((11 ? (((4294967261 ? var_12 : (~var_8)))) : ((-(~11)))));
    }
    var_19 = var_0;
    #pragma endscop
}
