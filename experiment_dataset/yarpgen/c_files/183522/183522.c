/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 += ((!(((((18446744073709551611 << (13155820604213249263 - 13155820604213249262)))) && (var_3 && var_5)))));
        var_13 = ((((((arr_0 [i_0]) ? (arr_0 [9]) : var_8))) ? ((((min(1, (arr_2 [i_0] [1])))))) : (max(var_10, (arr_3 [8])))));
        var_14 = var_9;
        var_15 = (max((~var_7), var_4));
        var_16 |= ((((arr_1 [2] [i_0]) ? 13155820604213249256 : (arr_1 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] = (min(249, 3405));
        var_17 = (min(var_17, ((((arr_6 [i_1] [i_1]) ? ((((((arr_7 [i_1]) && var_4)) && (arr_5 [12] [15])))) : ((-(arr_7 [i_1]))))))));
    }
    var_18 = ((!((min((var_10 + var_5), var_5)))));
    #pragma endscop
}
