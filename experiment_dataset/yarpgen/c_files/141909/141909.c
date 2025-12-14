/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (2489292990 <= 1805674298);
    var_11 = var_8;
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (max(var_13, (((((max(18490, 2489292990))) ? ((18490 ? 1 : 2816458560)) : ((((!(arr_1 [i_0] [i_0]))))))))));
        arr_2 [i_0] [i_0] = ((((min(2048, ((1805674309 ? 43180 : var_0))))) ? (min(0, (arr_0 [i_0]))) : 1));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_14 = (arr_4 [i_1] [13]);
        var_15 = (min(var_15, 1257663469));
        var_16 = (-1257663446 && 15769);
    }
    #pragma endscop
}
