/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (~var_13)));
        arr_4 [i_0] [i_0] = 14759;
        arr_5 [i_0] [i_0 - 1] = 66;
        arr_6 [i_0] [6] = ((-(((arr_2 [i_0]) / var_5))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1 - 1] [0] &= (((-(arr_1 [i_1] [i_1]))) - ((-(((arr_3 [10]) ? 387412640 : (arr_7 [i_1]))))));
        var_15 = (min(var_15, ((((var_7 ^ (arr_3 [i_1 + 1]))) ^ (min(var_11, (~-1783765723)))))));
    }
    var_16 = ((((((var_6 ? var_13 : var_3)) * (var_6 > var_1)))) ? var_3 : 190);
    #pragma endscop
}
