/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (min(((((max(2991666015, var_3))) ? var_0 : var_6)), ((max(var_9, var_6)))));
    var_11 = ((!((min(var_7, ((var_5 ? var_9 : var_2)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = -5;
        var_12 = 1303301280;
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1 + 2] &= ((((min(var_9, ((max(56188, 0)))))) && ((var_4 <= (((-32767 - 1) ? (arr_3 [i_1]) : var_4))))));
        var_13 |= (((!(arr_5 [i_1 - 2]))));
    }
    #pragma endscop
}
