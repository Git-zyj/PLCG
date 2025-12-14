/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_1 [i_0]);
        arr_3 [i_0] = ((!((!(arr_2 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = 117;
        var_18 = ((((var_0 ? (arr_0 [i_1]) : (arr_1 [i_1]))) != (arr_6 [i_1])));
        var_19 = ((!(-118 - 103)));
        var_20 = (arr_4 [i_1]);
    }
    var_21 |= (((min(var_9, -118))));
    var_22 = (((~var_16) ? var_11 : 99));
    #pragma endscop
}
