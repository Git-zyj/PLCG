/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 666;
    var_14 = (max(var_10, ((-1538615212 ? 0 : 676))));
    var_15 = (var_4 | var_7);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, (((((((arr_0 [i_0]) ? var_3 : 64870))) ? (((var_9 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))) : (((arr_1 [i_0] [i_0]) ? var_8 : (arr_1 [i_0] [i_0]))))))));
        var_17 = ((((((arr_0 [i_0]) >> (var_7 + 101)))) ? ((min(974774914, 64863))) : (max((arr_0 [i_0]), var_5))));
    }
    var_18 -= var_9;
    #pragma endscop
}
