/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_15;
        arr_3 [i_0] [i_0] = (max((77 << 1), -14));
    }
    var_19 = ((!((min(((var_2 ? var_7 : var_10)), ((var_0 ? var_13 : var_17)))))));
    #pragma endscop
}
