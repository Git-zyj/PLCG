/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = (((arr_2 [i_0] [1]) <= ((((((arr_2 [i_0] [i_0]) - (arr_2 [i_0] [i_0])))) ? (~var_9) : (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (-9223372036854775807 - 1)))))));
        var_11 = (min(var_11, ((max(-120, -19)))));
        var_12 ^= (arr_2 [i_0] [i_0]);
        arr_3 [11] = ((-(((var_6 != var_9) ? ((-30707 ? 511 : (arr_0 [i_0]))) : (((var_6 ? var_0 : 30107)))))));
        var_13 = var_0;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_14 ^= (((arr_4 [14]) <= (arr_4 [i_1])));
        var_15 += (~1);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_16 *= (arr_7 [i_2] [i_2 + 1]);
        var_17 -= (((arr_5 [i_2] [17]) - var_7));
        var_18 *= (((arr_4 [i_2 - 1]) || (arr_4 [i_2 - 1])));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (!-30108);
        var_19 = (min(var_19, (((max((arr_7 [i_3] [i_3]), (arr_0 [i_3])))))));
    }
    var_20 = ((-(((min(var_3, var_5)) % (((min(502, var_7))))))));
    #pragma endscop
}
