/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(1, 1))) & 15775));
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        var_19 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = (max(var_20, ((max((arr_3 [5] [i_1]), var_3)))));
        arr_5 [i_1] = ((!((((min((arr_2 [i_1]), (arr_3 [i_1] [i_1]))) ^ (max(14288605995393458696, 4158138078316092920)))))));
        var_21 &= (((((arr_2 [i_1]) - (arr_2 [15]))) - ((max((arr_2 [i_1]), (arr_2 [i_1]))))));
    }
    var_22 = (max(var_22, (((((var_13 / ((var_5 ? var_10 : 15)))) | (~1))))));
    #pragma endscop
}
