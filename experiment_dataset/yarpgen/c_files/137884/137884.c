/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(max((~var_9), var_8))));
    var_15 = (min(-17179, 281440616972288));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((-(max(((~(arr_1 [i_0] [i_0]))), (max((arr_1 [i_0] [i_0]), (arr_0 [2] [i_0])))))));
        var_16 = ((+(min((!281440616972288), ((~(arr_1 [i_0] [i_0])))))));
    }
    var_17 = (~18446462633092579327);
    var_18 |= (-(max(((max(var_12, var_5))), -18446462633092579327)));
    #pragma endscop
}
