/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (min((max((max(var_10, 18446744073709551615)), var_0)), var_4))));
    var_13 = (max(var_13, -var_10));
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = ((((max((arr_2 [i_0]), (arr_2 [i_0])))) ? 0 : ((2305561534236983296 ? (arr_2 [i_0]) : var_9))));
        var_15 |= max((arr_2 [i_0]), (((arr_3 [i_0]) ? (16413987679099075802 | 16141182539472568319) : (((var_4 % (arr_1 [i_0])))))));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_16 = (min(var_16, ((((((((2305561534236983309 ? 8188 : 30461))) ^ (max(2305561534236983296, var_9)))) < ((-(((arr_7 [i_1] [i_1 + 1]) * var_9)))))))));
        arr_9 [i_1] [i_1] = var_4;
        var_17 &= (max(53210239537184804, 15757212819942774822));
    }
    #pragma endscop
}
