/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((((((var_3 * (arr_0 [i_0]))))) ? ((((-(arr_1 [i_0] [i_0]))))) : (((arr_0 [i_0]) << (((arr_0 [i_0]) - 98))))));
        arr_3 [1] = ((1859468273 ? ((((arr_0 [i_0]) && 1859468251))) : (1733586246042010571 && 6681947012364508091)));
        arr_4 [8] = 2047;
        arr_5 [i_0] [2] = var_15;
        arr_6 [4] |= (~136);
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_9 [i_1] = (((~(min((arr_7 [i_1]), var_9)))) / (((((min((arr_8 [i_1] [i_1]), var_9))) ? -var_2 : (arr_7 [i_1])))));
        var_19 = (((arr_7 [i_1 + 2]) ? (((arr_8 [i_1] [i_1 - 2]) ? var_2 : (arr_7 [i_1 + 2]))) : ((~(arr_8 [i_1] [i_1 + 2])))));
        var_20 = (min(var_20, ((min(1859468240, ((~(arr_7 [i_1 + 1]))))))));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_21 += ((((min(1890407646, (((arr_13 [6] [i_2]) ? (arr_11 [i_2] [i_2]) : (arr_0 [i_2])))))) ? ((~((9007199254740991 ? var_6 : (arr_1 [i_2] [i_2]))))) : (arr_0 [i_2 + 2])));
        var_22 = (min((((arr_7 [i_2 - 1]) & (-32767 - 1))), -30));

        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            var_23 ^= var_7;
            var_24 &= ((!(((~(arr_15 [i_3 + 1] [i_3]))))));
            var_25 = ((~(arr_12 [i_3 + 1])));
            arr_16 [1] [i_3] = (((-1 > (arr_12 [i_3 + 1]))));
        }
        var_26 = var_10;
        var_27 = (~18446744073709551615);
    }
    var_28 = -1576932660;
    #pragma endscop
}
