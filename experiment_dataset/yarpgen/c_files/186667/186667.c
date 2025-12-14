/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((-((~(-2797946774288121481 ^ var_13))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = 43048;
        arr_2 [1] = (~var_7);
        var_19 -= (((arr_1 [i_0]) ? var_2 : 2639892389));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (arr_3 [i_1] [i_1]);
        var_20 += var_4;
    }
    #pragma endscop
}
