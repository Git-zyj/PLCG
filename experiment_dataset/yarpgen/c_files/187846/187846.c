/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= 21;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_21 = ((!33990) + ((0 ? 1 : 34031)));
        arr_3 [i_0] = (!-16);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = (min(var_22, ((((29804 | 1457260605847660255) ? (1457260605847660255 < var_7) : ((~(arr_4 [i_1] [i_1]))))))));
        var_23 -= (((((-64 ? 1 : 11))) ? -255 : ((69 ? (4503599627370495 & var_1) : ((-11146 ? 4503599627370495 : (arr_5 [i_1])))))));
        arr_6 [i_1] [i_1] = ((~((38 ? 15920733586216020145 : (arr_5 [i_1])))));
    }
    #pragma endscop
}
