/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_17 = -8188194040265859536;
        var_18 = (max(var_18, (-8188194040265859536 / -1130)));
        var_19 = (min(var_19, 8188194040265859539));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_20 ^= (((arr_1 [i_1]) / (arr_0 [i_1])));
        var_21 *= var_14;
        var_22 = (max(var_22, (max((arr_1 [i_1]), var_3))));
    }
    var_23 = (max((~var_2), var_2));
    #pragma endscop
}
