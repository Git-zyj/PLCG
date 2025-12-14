/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 = var_5;
        arr_2 [i_0] [i_0 + 1] = 65535;
    }
    var_17 |= (((max(-var_4, var_3)) / ((~((max(14, -32)))))));
    #pragma endscop
}
