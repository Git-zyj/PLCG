/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 / ((max(var_5, ((var_9 ? var_6 : var_2)))))));
    var_11 = ((~(((~var_5) ? ((253 ? var_7 : var_9)) : var_9))));
    var_12 = (min((((!(((var_3 ? var_9 : 14612597569563586168)))))), var_2));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = var_9;
        arr_4 [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_13 = 192;
        var_14 = arr_5 [i_1];
        var_15 -= (arr_5 [i_1]);
        var_16 -= ((((((var_6 != 3) * (((arr_1 [i_1] [i_1]) & 2358154288))))) ? (arr_5 [i_1]) : (((((max(var_9, var_7))) ? var_1 : (arr_1 [i_1] [i_1]))))));
    }
    var_17 = var_2;
    #pragma endscop
}
