/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_10 = ((((((40782 && 16399) ? (!var_1) : (var_6 || -19595)))) || var_4));
        var_11 ^= (((((((~var_1) <= (var_4 <= var_5))))) <= (min((arr_1 [i_0] [i_0]), 16399))));
        var_12 = arr_0 [5] [i_0];
        var_13 = (((((arr_0 [i_0] [i_0]) | ((min(var_7, (arr_1 [i_0] [i_0])))))) | ((((min(var_5, 360800766))) ? (((arr_3 [i_0] [2]) & var_0)) : ((min(var_2, (arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_14 *= 3859708429;
        var_15 = (arr_4 [i_1 + 1] [i_1 + 2]);
        var_16 += arr_4 [i_1] [1];
    }
    var_17 = -16389;
    #pragma endscop
}
