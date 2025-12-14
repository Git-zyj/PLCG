/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_10 *= (min(54194, 20388));
        var_11 = (arr_0 [i_0]);
        var_12 = var_2;
    }
    var_13 = 45147;
    var_14 = (((~var_0) | 20418));
    var_15 = (max(((0 ? (((min(var_8, 3)))) : (497144998 & 229847169))), ((max(0, ((var_9 ? 1 : 64121)))))));
    var_16 = ((45119 ? (max(12288, (0 * var_2))) : (((min(var_5, var_4)) ? var_2 : var_0))));
    #pragma endscop
}
