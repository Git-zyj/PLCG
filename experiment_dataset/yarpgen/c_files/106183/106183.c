/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_11 = (3766186287433393009 ? var_3 : var_2);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_12 ^= (~1);
            var_13 ^= 64512;
            arr_5 [i_1] = (-1195790833 >= 36123);
        }
        arr_6 [i_0] = (((64518 ? var_8 : var_7)) * var_4);
        var_14 = ((((var_5 ? var_9 : var_9)) & 820611421794688453));
    }
    var_15 ^= ((var_7 ? var_2 : ((((!(!var_1)))))));
    #pragma endscop
}
