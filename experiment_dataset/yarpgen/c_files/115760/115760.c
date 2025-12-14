/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 40407;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_11 = 4039203554;
        var_12 = ((-((255 ? 874201104 : 4039203550))));
        arr_2 [0] = (min((min(((1 ? var_1 : 255763737)), 508)), ((min(((999770218 ? (-127 - 1) : 5)), (max(-1, 14)))))));
        arr_3 [i_0] [i_0] = ((768 ? (arr_0 [i_0]) : 4039203554));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_13 = (min(var_13, ((((!64) < (arr_5 [i_1 + 1]))))));
        arr_6 [12] [i_1] |= (arr_5 [i_1 + 1]);
        var_14 += (((((arr_4 [i_1]) << (11 - 11))) ^ (((-1 ? 73 : -1)))));
        var_15 = ((16 ? -65 : -422636406));
        var_16 = (min(var_16, 245));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        var_17 = 65528;
        var_18 -= 25135;
    }
    #pragma endscop
}
