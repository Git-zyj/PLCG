/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((380088426 ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0])))) ? (arr_3 [i_0] [i_0]) : var_2));
        var_14 = (max(var_14, ((((3914878860 >> (((arr_3 [i_0] [i_0]) - 393603535)))) > 2047))));
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_15 = 380088435;
        var_16 = 1272916332;
        var_17 = 380088426;
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_18 = (max(var_18, (~-7834744408955637090)));
        arr_9 [i_2] [i_2 + 3] = (max((~59), (min((var_12 == 53), (((arr_1 [i_2]) ? 0 : (arr_1 [i_2])))))));
    }
    #pragma endscop
}
