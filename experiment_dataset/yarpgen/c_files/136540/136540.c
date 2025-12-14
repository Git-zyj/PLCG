/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (var_12 * var_1);
        var_20 = ((var_12 ? var_8 : var_0));
    }
    var_21 = (((((var_18 >= var_3) - (var_11 || var_1))) | ((-(var_18 <= var_1)))));
    var_22 = var_10;
    #pragma endscop
}
