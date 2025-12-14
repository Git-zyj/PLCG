/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_4 [7] = ((max((arr_2 [i_0]), ((-1 ? var_15 : var_2)))));
        var_16 *= (+((((var_15 < 3682912880) >= (!80)))));
        var_17 = (-81 <= 8501135479913672672);
        var_18 ^= ((~(((((78 ? 104824112 : 3008208441))) ? (-4 / 96) : 27876))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = ((((min((arr_6 [i_1]), (arr_6 [i_1])))) ? var_7 : ((((max(var_2, var_6))) ? 2138587872 : var_15))));
        arr_7 [i_1] = (((arr_6 [i_1]) ? ((((!(((-794720431 ? var_1 : var_5))))))) : (max((((var_13 ? -75 : var_14))), (((arr_5 [i_1]) ? var_11 : var_5))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        arr_11 [16] |= (!var_7);
        var_20 = ((((arr_9 [i_2]) ^ var_3)));
        arr_12 [i_2] = ((var_14 ? var_12 : var_1));
    }
    var_21 = ((var_12 ? var_6 : ((var_8 + (77 * 134)))));
    #pragma endscop
}
