/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 = (arr_2 [i_0]);
        var_14 = (((var_0 != (arr_3 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] &= (54043195528445952 & 1006704013);
        var_15 = (min(var_15, (arr_6 [i_1])));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = var_7;
        var_16 = ((var_2 - (arr_10 [i_2])));
    }
    var_17 = -109;
    var_18 = ((((var_12 ? var_0 : var_8)) * (!58033)));
    var_19 = (max(var_19, (((((var_11 - (var_6 - var_11))) >= var_9)))));
    #pragma endscop
}
