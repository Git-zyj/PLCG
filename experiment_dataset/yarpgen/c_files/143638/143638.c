/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_11));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (min(var_16, (((236 ? 1 : (arr_0 [i_0]))))));
        var_17 -= ((((max((arr_0 [i_0]), ((var_14 & (arr_0 [1])))))) ? ((((var_11 ? var_6 : var_8)) | (((var_12 << (7405751064213030754 - 7405751064213030750)))))) : ((((arr_0 [i_0]) >> ((0 >> (arr_0 [i_0]))))))));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_18 = (((~1) ? (max((arr_4 [i_1]), (arr_4 [i_1]))) : (((0 >> (var_5 - 2010648735))))));
        var_19 = (min(var_19, (((max(1, (arr_4 [6])))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] = ((((arr_5 [i_2]) ? (arr_8 [i_2] [i_2]) : (arr_5 [i_2]))));
        arr_10 [i_2] = ((~(((arr_5 [i_2]) & (arr_5 [3])))));
        var_20 = var_5;
    }
    #pragma endscop
}
