/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 += 32230257349165196;
        arr_3 [i_0] = (!-103);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [5] [4] = 124;
        arr_7 [i_1] = -0;
        arr_8 [i_1] [i_1] = ((((((arr_2 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : 7822))) ? (arr_2 [i_1] [i_1]) : (((!(arr_5 [0] [i_1]))))));
    }
    var_14 = var_4;
    #pragma endscop
}
