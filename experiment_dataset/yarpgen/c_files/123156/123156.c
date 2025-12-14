/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_10 |= (((((-5790812770840901862 ? (arr_0 [i_0 + 2] [i_0 + 2]) : (arr_2 [i_0])))) ? (arr_2 [i_0 + 2]) : (arr_1 [i_0 + 1] [i_0 - 1])));
        var_11 = ((arr_2 [i_0]) ? ((0 << (var_0 - 149))) : (~128));
    }
    var_12 = min(((-((-5790812770840901862 ? var_5 : var_0)))), var_4);

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_13 = (max(var_13, (((!(((2553918365293831530 ? (~3) : (~0)))))))));
        arr_5 [i_1] [i_1] = (max((min(-1, ((max((arr_3 [i_1]), (arr_4 [i_1] [i_1])))))), (arr_1 [i_1] [i_1])));
    }
    var_14 = (!var_0);
    #pragma endscop
}
