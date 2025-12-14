/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_9 ? -var_9 : 99));
    var_19 = var_1;
    var_20 = -3764503188;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((-(arr_0 [i_0]))));
        var_21 |= (arr_1 [i_0] [17]);
        var_22 *= (1400494536256695275 && 63);
        var_23 = var_4;
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] = (arr_3 [i_1]);
        arr_6 [i_1] [i_1] = (7799 - 1);
        var_24 = ((1 ? (67 | 549755813887) : (max(-4611686018427387904, 0))));
    }
    #pragma endscop
}
