/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 3584434296;
    var_11 = (-(((((var_4 ? -577861328 : var_8))) ? 23 : -var_3)));
    var_12 = var_9;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_3;
        arr_4 [i_0] = ((((!(arr_1 [i_0 + 1]))) ? (((1 ? (arr_0 [i_0] [i_0]) : 2074575557))) : (((max(var_4, var_0))))));
        var_13 |= ((+((2220391754 ? (~2220391739) : 199))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_14 = (min(0, var_6));
        var_15 = 48;
        var_16 = 205;
        var_17 = (min(var_17, var_0));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_18 = (arr_9 [i_2] [i_2]);
        var_19 = (~690655641);
    }
    var_20 &= var_3;
    #pragma endscop
}
