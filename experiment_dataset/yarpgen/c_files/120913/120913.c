/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (min((((((max(var_1, 2003765444))) && ((min(var_3, -6295392920632074270)))))), (min((max(var_6, var_8)), (var_16 | var_10)))))));
    var_20 = (((-714651658 < 2003765420) / (min((var_1 * var_7), (min(var_10, var_4))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [7] = (((((((arr_0 [i_0]) < (arr_2 [14]))))) <= ((var_18 - (arr_1 [i_0])))));
        var_21 = (((5413639744619280521 <= -31160) || ((((arr_2 [i_0]) / 2291201867)))));
    }
    #pragma endscop
}
