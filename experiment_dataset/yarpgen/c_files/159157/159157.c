/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-1811276060 ? var_14 : ((((!((min(var_13, var_15))))))));
    var_18 = ((var_0 ? 0 : var_13));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_4;
        arr_3 [i_0] [i_0] = 0;
    }
    #pragma endscop
}
