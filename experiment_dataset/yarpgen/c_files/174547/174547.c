/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = ((!(((1563 ? (arr_3 [i_0]) : var_6)))));
        arr_5 [i_0] = (arr_0 [i_0]);
        var_20 -= (arr_2 [i_0] [i_0]);
        var_21 = ((4294967289 ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_22 = (-2147483647 - 1);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (~(arr_6 [i_1]));
        var_23 = (min(var_23, (((((1860484740 ? 18250 : 63985)) <= ((((~var_4) < 361865875))))))));
        arr_10 [i_1] = (~((~(~27739))));
    }
    var_24 = (min(var_24, ((max(var_9, ((max((~var_10), var_7))))))));
    var_25 = (172 <= 183331139);
    var_26 -= (min(var_14, ((((!var_3) || var_17)))));
    #pragma endscop
}
