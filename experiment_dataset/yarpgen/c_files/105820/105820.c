/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] |= (((~var_7) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])));
        arr_4 [i_0] = (21 / (arr_0 [i_0]));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_15 = (min(((~(min(var_7, 21)))), (!var_7)));
        var_16 = ((!((min(-31206, (arr_5 [i_1 + 2]))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = var_9;
        var_18 *= (arr_7 [i_2]);
        arr_9 [i_2] [i_2] = (((((~(arr_8 [i_2] [i_2])))) ? ((var_12 << ((((var_13 ? var_0 : 4398046511103)) - 5269424658408808057)))) : (var_0 != 76)));
        var_19 = (max(var_19, (arr_8 [i_2] [i_2])));
        var_20 = ((((((arr_8 [i_2] [i_2]) ? (arr_8 [i_2] [i_2]) : var_1))) && -16));
    }
    var_21 = var_0;
    #pragma endscop
}
