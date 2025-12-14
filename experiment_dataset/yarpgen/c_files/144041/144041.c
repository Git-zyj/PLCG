/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (((((arr_0 [i_0]) <= (arr_0 [i_0]))) ? (max(2356508425, (arr_1 [i_0]))) : (arr_0 [i_0])));
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = 2356508425;
        arr_4 [i_0] = ((((((25888 | -101) & (592650337 | 592650350)))) ? ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : ((((((arr_0 [i_0]) | (arr_0 [i_0])))) | (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = (max(var_18, (arr_1 [i_1])));
        arr_7 [i_1] = ((!(((~(arr_0 [i_1]))))));
        arr_8 [i_1] [i_1] = (((!1) ? (arr_5 [i_1]) : (arr_5 [i_1])));
        arr_9 [i_1] [i_1] = 3702316959;
    }
    var_19 += (min((~var_15), ((~(592650337 - 592650343)))));
    #pragma endscop
}
