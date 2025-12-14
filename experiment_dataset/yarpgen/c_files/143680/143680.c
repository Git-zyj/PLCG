/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = ((-((-(((arr_1 [i_0] [i_0]) - var_4))))));
        arr_2 [11] = (((((arr_0 [i_0]) && var_8)) || ((!(arr_0 [i_0])))));
        var_22 = (!(((((var_10 == (arr_1 [5] [i_0])))))));
        arr_3 [i_0] |= var_7;
        var_23 = var_15;
    }
    var_24 = (-((-(~var_18))));
    #pragma endscop
}
