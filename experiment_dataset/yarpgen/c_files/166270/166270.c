/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = ((((~(~var_3))) * var_4));
        var_16 = (((arr_1 [i_0] [i_0]) ? ((((var_10 ? (arr_2 [i_0]) : (arr_2 [i_0]))))) : ((((((arr_1 [i_0] [i_0]) / (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (!0)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = 0;
        var_17 = ((1 ? (max(65535, 5115455484478435296)) : 503316480));
    }
    var_18 = (max(65518, ((var_0 ? var_9 : (max(var_13, 0))))));
    var_19 = ((((((65535 / 35072) ? var_13 : (var_4 * var_0)))) ? var_9 : (var_2 / var_11)));
    var_20 = var_6;
    #pragma endscop
}
