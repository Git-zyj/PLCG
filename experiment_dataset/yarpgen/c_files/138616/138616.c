/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (-1 > var_8);
        var_12 = (min(var_12, (((((((((1 ? -85946312144970275 : -4520649975070088221))) ? 31812 : (28 / var_10)))) ? (((((arr_2 [i_0]) ? 1 : var_4)))) : var_0)))));
        var_13 |= (((~var_7) ? (((((1 ? 28 : 1))) ? (-9223372036854775807 - 1) : 65514)) : (((1 ? 0 : 1)))));
        arr_4 [i_0] = (!(((!58552) && (!28))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] = 1;
        arr_9 [i_1] = (var_3 >> 1);
        arr_10 [i_1] = (((~1) ? 1963 : var_5));
        var_14 ^= ((-1 ? (arr_6 [6]) : -4520649975070088228));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        arr_13 [i_2] = (((!var_1) ? ((var_6 ? 1 : var_5)) : var_1));
        var_15 ^= ((!(((((arr_12 [i_2] [i_2 + 1]) || var_6))))));
    }
    var_16 = 1;
    #pragma endscop
}
