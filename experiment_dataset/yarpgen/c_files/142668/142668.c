/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = ((((max((18 < 11), var_1))) << (var_9 != var_7)));
    var_13 = ((+((((var_1 * 46445) && var_7)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 |= (min((((((1 ? var_10 : var_10))) ? ((var_8 ? (arr_2 [i_0]) : 511)) : (arr_1 [i_0] [i_0]))), ((min((arr_0 [i_0]), (((-512 + 2147483647) << (511 - 511))))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_15 = (min(var_15, (((((((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_1]) : var_0))) == (((arr_4 [i_1] [i_1] [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : var_10)))))));
            var_16 = ((16345216640125177770 ? 15 : ((16345216640125177756 ? (~1) : (~255)))));
            arr_5 [1] = (min((max(((max(var_9, 1))), (((arr_4 [i_1] [i_0] [i_0]) ? 500 : 9223372036854775807)))), var_8));
        }
        arr_6 [2] [i_0] = ((~(max(var_7, (max(var_4, 511))))));
        var_17 ^= ((~1673033938756924777) ? 1 : (arr_4 [i_0] [i_0] [i_0]));
    }
    #pragma endscop
}
