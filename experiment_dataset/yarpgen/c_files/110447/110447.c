/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((var_13 + var_3) ? var_6 : (min(1156116874, var_9))));
    var_19 = ((((((var_0 ? var_3 : var_16)) << (((~var_17) - 2033481407)))) & var_11));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 *= var_8;
        arr_2 [i_0] = var_11;
        arr_3 [0] = ((~(var_3 & 1156116874)));
    }
    var_21 = var_12;
    #pragma endscop
}
