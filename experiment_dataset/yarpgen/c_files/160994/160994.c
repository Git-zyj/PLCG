/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 -= (min((arr_1 [3]), (min((1539995628 || var_5), (min(3509128076519674397, 7))))));
        arr_2 [i_0 + 1] = (arr_1 [12]);
        arr_3 [i_0 + 1] = arr_0 [i_0 + 1];
        arr_4 [i_0] [7] = var_0;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] = ((~5776) ? -48 : ((((((arr_0 [i_1]) + (arr_5 [5] [i_1])))) ? var_0 : var_3)));
        var_15 = (3 <= 279223176896970752);
    }
    var_16 = var_12;
    #pragma endscop
}
