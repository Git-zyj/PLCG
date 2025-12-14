/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((var_12 ? (arr_0 [19]) : var_0))) <= (max((arr_0 [i_0]), 22782))));
        var_15 -= var_5;
        var_16 = 8;
        var_17 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 = ((~((((arr_0 [i_1]) == var_11)))));
        arr_7 [i_1] [i_1] = 4;
        var_19 = (min(var_19, ((((((arr_1 [4]) > (arr_1 [20]))) ? (max((arr_1 [12]), 246)) : (arr_1 [1]))))));
    }
    var_20 = var_6;
    var_21 = (~var_8);
    var_22 = (max((var_13 == var_1), var_7));
    #pragma endscop
}
