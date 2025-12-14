/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = var_4;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_1 [i_0])));
        arr_3 [i_0] = 1414480924;
        arr_4 [i_0] = ((((min(((9223372036854775807 ? var_12 : var_5)), var_9))) == var_13));
        var_18 = (min(var_18, (((+((-(((arr_0 [i_0]) - (arr_0 [i_0]))))))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = var_0;
        arr_8 [i_1] = (max((min((max(var_5, var_9)), ((0 ? var_14 : var_7)))), (((!(arr_0 [i_1]))))));
        arr_9 [i_1] [i_1] = (max((arr_0 [i_1 + 3]), (arr_6 [i_1 - 1])));
        var_19 = (min(((~(arr_6 [i_1 + 1]))), ((var_0 ^ (arr_6 [i_1 + 3])))));
        arr_10 [i_1] = var_12;
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_20 += (((((((((var_5 / (arr_0 [i_2])))) ? -126 : -888)) + 2147483647)) >> (((((arr_12 [i_2] [i_2]) ? (min((arr_6 [i_2]), var_12)) : 874)) + 1273))));
        var_21 = (((var_1 ? (-127 - 1) : (var_10 / 1414480941))) + (((-((min(-875, var_9)))))));
        arr_13 [i_2 - 1] [i_2] |= 2741238743792945092;
        var_22 = (((max((arr_1 [i_2 + 2]), (arr_1 [i_2 + 2]))) >= ((((arr_0 [i_2]) << (((arr_1 [i_2 + 1]) - 3759397945342439124)))))));
    }
    var_23 = var_0;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            {
                var_24 = ((+(((arr_16 [i_3]) ? (~2880486355) : -4323973485918519872))));
                var_25 = (max((((!(arr_16 [i_4 + 1])))), 888));
            }
        }
    }
    #pragma endscop
}
