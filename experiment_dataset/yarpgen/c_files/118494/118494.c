/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [4] |= ((!((((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_0]))))));
        var_10 &= (((((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_3))) || (((-2996660401997629239 ? (arr_0 [i_0] [i_0]) : -84)))))) < (max(30, (arr_1 [8])))));
        arr_3 [i_0] = (max((((-var_1 + ((max(58782, 6754)))))), ((1640759603 ? (var_6 & 1758369715) : 6753))));
        var_11 &= var_1;
    }
    var_12 |= var_2;
    var_13 = (((((~(~var_2)))) * (var_4 / var_2)));
    #pragma endscop
}
