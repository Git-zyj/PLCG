/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_20 += (((((19 ? 782 : 1) - ((21554 ? (arr_1 [i_0 - 2]) : 65535))))));
        arr_2 [6] |= (((arr_0 [i_0]) ? 1 : ((-(min((arr_0 [i_0]), var_19))))));
    }
    var_21 = (min((((((var_4 ? 64768 : var_16))) ? (max(var_6, var_12)) : var_17)), 38));
    var_22 &= 1;
    #pragma endscop
}
