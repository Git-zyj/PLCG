/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_9;
    var_13 = min(var_3, (!-var_6));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = ((11580286732121703266 ? 6866457341587848328 : (((arr_1 [i_0] [i_0]) ? 6866457341587848350 : 1))));
        var_15 = (min((min((min(var_2, var_7)), (arr_0 [9] [9]))), ((((((arr_0 [i_0] [4]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (min(-20858, var_7)) : ((var_3 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))))));
        var_16 = var_0;
    }
    #pragma endscop
}
