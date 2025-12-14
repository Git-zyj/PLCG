/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [6] = var_3;
        arr_3 [i_0 + 1] [i_0] = ((var_5 ? 277523110 : 65535));
        arr_4 [i_0 + 2] [i_0 + 1] = 65535;
        arr_5 [i_0] = var_2;
        arr_6 [i_0] &= ((~((var_6 ? var_13 : var_13))));
    }
    var_20 = ((+(min((var_10 != var_3), var_8))));
    #pragma endscop
}
