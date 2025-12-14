/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = ((var_6 ? var_10 : (((var_2 * 559) | var_10))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_13 = (((((4294967295 || -99) != (6165445364922978597 > var_10))) ? (((max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 1]))))) : ((~(min(47696, (arr_0 [i_0] [i_0])))))));
        var_14 *= ((max(6165445364922978597, 3958325964464184984)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_4 [20] [i_1] = var_8;
        arr_5 [i_1] [i_1] = (~1);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_15 += (~-22603);
        var_16 = (((arr_2 [i_2]) && var_0));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_17 *= var_7;
        var_18 *= (min(((((((arr_1 [i_3]) ? (arr_2 [i_3]) : (arr_3 [14])))) ? 2587976421 : var_1)), var_10));
        var_19 = (((((268435455 ? 4294967295 : (arr_1 [i_3]))) != (arr_2 [i_3]))));
    }

    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        var_20 -= var_7;
        arr_15 [1] [i_4] = 14942658670555677402;
        var_21 *= 11484256939986774878;
    }
    #pragma endscop
}
