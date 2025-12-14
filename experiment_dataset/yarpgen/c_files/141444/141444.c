/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = (~var_10);
    var_17 = var_3;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(arr_0 [i_0 - 2])));
        var_18 = (max((max((arr_0 [i_0 - 2]), (arr_1 [i_0 + 2]))), var_9));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_19 = (max((~21), (arr_3 [i_1] [8])));
        arr_6 [i_1] [i_1] = -var_12;
        var_20 = (min(((-(((arr_4 [i_1 - 1] [i_1 - 1]) ? var_5 : (arr_5 [19] [i_1]))))), 12432227691965606050));
    }
    #pragma endscop
}
