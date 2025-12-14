/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = ((var_7 ? (arr_1 [i_0 + 1]) : 132));
        arr_3 [i_0] = var_1;
        arr_4 [i_0] [1] = (((arr_1 [i_0 - 3]) ? (((var_0 != (arr_0 [i_0 - 3] [i_0 + 2])))) : (!var_6)));
    }
    var_14 *= ((var_8 ? ((189 ? var_1 : var_1)) : (((((var_4 ? var_2 : var_5))) ? var_12 : var_12))));
    var_15 = ((((var_10 ? var_6 : 42204)) << (3 - 3)));
    #pragma endscop
}
