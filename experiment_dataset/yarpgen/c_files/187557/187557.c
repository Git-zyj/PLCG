/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [9] [i_0] = (!var_4);
        arr_3 [i_0] = (((-110 - var_3) ? 954824181 : (((max(var_7, var_8))))));
        var_12 *= (max(((~(((arr_0 [9] [9]) ? 162 : 4215)))), ((10 << (78 - 60)))));
    }
    var_13 = var_7;
    #pragma endscop
}
