/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((~(arr_2 [i_0]))) <= ((min((var_9 < var_19), (arr_2 [i_0]))))));
        var_21 = var_4;
        arr_4 [i_0] = (((-956391961 | 20) - 50370));
        arr_5 [2] [i_0] &= -14544;
        var_22 = (-956391961 ? (13248774511758341147 == 5784) : 575117747106314637);
    }
    #pragma endscop
}
