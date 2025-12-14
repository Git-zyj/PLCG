/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(-1, var_4));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_3;
        var_19 = (((max((((arr_0 [5]) ? 1 : var_10)), 2233785415175766016)) - (((((var_6 ? 3118345208 : var_16)) + ((var_12 ? var_4 : (arr_0 [2]))))))));
        var_20 = (~255);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((-((((arr_1 [i_1]) && (arr_3 [i_1]))))));
        var_21 = 17723;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] = (arr_7 [i_2] [i_2]);
        var_22 = (arr_7 [7] [i_2]);
        var_23 -= (arr_7 [i_2] [10]);
        var_24 = 2296283615615724088;
        var_25 = (arr_6 [2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_26 = ((((max(((51710 + (arr_9 [i_3]))), ((0 ? (arr_9 [8]) : -85))))) || 26691));
        var_27 = (~var_13);
    }
    var_28 = -4229691302528643256;
    #pragma endscop
}
