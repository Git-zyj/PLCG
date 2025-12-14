/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_15 ? var_1 : var_18));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = ((((((((var_3 >> (((arr_1 [i_0] [i_0]) - 79))))) ? (var_17 * 39937) : var_10))) && (~1)));
        var_22 = ((((((16265 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) - (64 || 1200958885))) - 0));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_23 *= ((!(((~(max((arr_3 [i_1 + 2] [i_1 - 1]), var_9)))))));
        arr_4 [i_1 + 2] = arr_0 [i_1] [i_1 + 2];
    }
    var_24 = (((var_19 < var_0) ? var_9 : 1));
    var_25 = var_6;

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_26 *= 15845;
        arr_8 [i_2] [i_2] |= var_5;
    }
    #pragma endscop
}
