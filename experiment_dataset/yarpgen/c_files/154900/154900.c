/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max((min(1156757270, -78)), (((-7942726882171852739 ? -16486 : ((max(1, -80))))))));
        arr_4 [i_0] = (((((3529096802 ? -1189199175956541543 : -78))) || (((2147483630 ? (((var_0 ? var_7 : var_15))) : var_2)))));
    }
    var_18 &= var_15;
    #pragma endscop
}
