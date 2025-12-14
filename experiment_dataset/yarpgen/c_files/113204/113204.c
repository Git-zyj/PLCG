/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (arr_0 [i_0] [i_0]);
        var_18 = ((3382225219 ? -116 : ((-(arr_2 [i_0])))));
    }
    var_19 = (~120);
    var_20 = ((((~(max(var_14, var_16)))) ^ (((var_4 ^ ((83 ? var_13 : var_5)))))));
    #pragma endscop
}
