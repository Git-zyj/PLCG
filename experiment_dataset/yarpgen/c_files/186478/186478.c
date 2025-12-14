/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1474398441;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (max((~1474398441), ((~(arr_2 [i_0 + 1] [i_0 - 1])))));
        var_12 += var_9;
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_13 = ((((1423 ? -var_2 : var_1))) ? var_9 : (min(var_7, 1474398441)));
        var_14 = (max((max(1474398441, (max(-1474398442, var_8)))), (arr_5 [i_1 + 3] [2])));
    }
    var_15 -= 0;
    #pragma endscop
}
