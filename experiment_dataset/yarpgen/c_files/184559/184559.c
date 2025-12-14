/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] |= ((6423123981660127168 ? ((min(var_16, -6423123981660127155))) : (max((~var_11), ((min(167, var_6)))))));
        var_19 *= (((arr_0 [i_0]) != ((0 ? (40433 % var_12) : (arr_1 [i_0])))));
    }
    var_20 |= 0;
    var_21 *= var_9;
    var_22 = var_3;
    var_23 = (min(var_23, 88));
    #pragma endscop
}
