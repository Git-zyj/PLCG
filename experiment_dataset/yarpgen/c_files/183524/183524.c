/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 = (((min((arr_0 [i_0 - 1] [i_0 - 1]), var_8))) ? ((~(var_0 != 16))) : ((((((-(arr_0 [2] [i_0]))) + 2147483647)) >> (((((arr_1 [i_0]) << 55)) - 12970366926827028457)))));
        var_13 = (arr_1 [i_0]);
        arr_2 [i_0] [i_0 - 1] = (((var_11 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))) != ((min(var_5, var_2))));
        var_14 = (min(var_14, var_3));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] |= ((((18303 ? (arr_4 [0] [i_1]) : (arr_3 [i_1] [i_1]))) << (((arr_3 [i_1] [1]) - 56228))));
        var_15 = (var_11 >= var_10);
    }
    var_16 = (1 << (((min(((var_11 << (3800480220 - 3800480202))), var_10)) - 2631139322)));
    var_17 = var_10;
    #pragma endscop
}
