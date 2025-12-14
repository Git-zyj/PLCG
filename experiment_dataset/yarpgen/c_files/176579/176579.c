/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 ? 13451410374745647293 : (((11515554873542917883 ? ((1680573291 ? 2614394004 : 18079)) : 1)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!((((arr_0 [i_0] [i_0]) - (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((9054 ? ((9054 ? 251692853 : 8500)) : (arr_1 [i_0] [i_0])));
        var_14 = var_9;
    }
    var_15 = var_1;
    var_16 = 601678624;
    #pragma endscop
}
