/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((34614 ? 34768 : (!7)))) || (35222 && 30331)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~((((15665628188184666002 || 26287) || 1)))));
        arr_4 [i_0] = ((1 ? (!920502058112580023) : (12098 - 2147483643)));
        var_20 = ((240 << (((((35222 ? 10 : 246)) >= -1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = -6;
        var_21 = (58330 + 98);
        var_22 = (0 - 66977792);
    }
    var_23 ^= (((!7) ? 35242 : 43476));
    #pragma endscop
}
