/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((-895978739 <= 1572864), var_3));
    var_11 = var_4;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0] = (max((min(var_0, (arr_1 [i_0]))), (((-116 + 10360276698043995) - -2111437371))));
        var_12 = arr_1 [i_0 + 1];
        var_13 = ((var_4 ? (arr_1 [i_0]) : (((arr_0 [i_0]) ? var_1 : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_14 = (((arr_5 [i_1 - 2]) ? 255 : (arr_5 [i_1 - 2])));
        arr_7 [i_1] = (((arr_3 [i_1 + 2]) ? (arr_5 [i_1 - 3]) : (arr_6 [i_1 - 1])));
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_15 = ((-(max(((1848278591 ? var_8 : (arr_8 [i_2]))), var_0))));
        var_16 = ((~(((arr_8 [i_2 - 1]) ? (arr_8 [i_2 - 2]) : (arr_8 [i_2 - 2])))));
        var_17 = (min(2446688699, ((13571417004873899783 ? (arr_8 [i_2]) : (((2446688716 ? 0 : var_9)))))));
    }
    var_18 = (~((var_5 ? var_2 : var_7)));
    #pragma endscop
}
