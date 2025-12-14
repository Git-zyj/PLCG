/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_0 - (1852881496 && -1852881496)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 = ((1852881477 ? (arr_1 [i_0 - 1] [i_0 + 4]) : ((var_2 - (arr_0 [i_0 + 3] [i_0])))));
        var_12 = (((arr_0 [i_0 + 2] [i_0]) | 1852881496));
        var_13 = var_9;
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] [i_1] |= (((arr_4 [i_1 + 1] [i_1 - 2]) ? var_1 : (arr_4 [i_1 + 1] [i_1 - 2])));
        var_14 = ((511 | (arr_3 [i_1 - 1])));
    }
    var_15 = var_5;
    #pragma endscop
}
