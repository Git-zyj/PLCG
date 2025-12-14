/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((((~(min(var_5, var_11))))) ? (((var_12 | var_9) ? var_12 : var_3)) : var_18));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_20 *= ((268435200 ? (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 3]))) : ((+(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0 + 2])))))));
        arr_2 [i_0] [i_0] = (arr_0 [i_0 - 1] [i_0]);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_21 = (min(var_21, (arr_1 [i_1])));

        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_1] [i_2] [i_2] = var_5;
            var_22 = ((1 ^ (((((-(arr_1 [i_1])))) ? (arr_1 [i_1 + 2]) : ((45 ? (arr_0 [i_2] [i_2 + 2]) : (arr_8 [i_1] [i_2])))))));
        }
        var_23 = (((arr_1 [i_1 + 2]) || ((max((arr_4 [i_1 - 1]), (arr_4 [i_1 + 2]))))));
    }
    for (int i_3 = 4; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_24 &= (min(226, (max((arr_12 [i_4]), (((arr_1 [0]) / (arr_0 [i_3] [i_4])))))));
            arr_14 [i_4] [i_4] [3] = (((arr_1 [i_3 - 3]) ? (((arr_1 [i_3 + 2]) + (arr_1 [i_3 - 2]))) : (arr_1 [i_3 + 3])));
        }
        var_25 -= (((arr_11 [i_3]) || 225));
        arr_15 [3] = (((var_13 - (arr_1 [i_3 + 1]))));
        var_26 += (arr_1 [i_3]);
    }
    var_27 = var_5;
    var_28 = (((((var_2 | (244 & -32)))) ? var_0 : (max(12, (-32 / 4295374084673896405)))));
    #pragma endscop
}
