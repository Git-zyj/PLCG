/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        var_13 = (arr_0 [14]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 = -4;
        arr_4 [i_1] [i_1] = (max(((((((arr_2 [i_1]) ? var_1 : var_0))) ? -8684225761260219000 : var_4)), (arr_2 [i_1])));
    }
    var_15 = (min(var_15, (max((-127 - 1), (((((-1005430053 ? 185 : 126))) ? 38 : (((-127 - 1) ? -99 : 15))))))));
    #pragma endscop
}
