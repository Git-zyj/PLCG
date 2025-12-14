/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] |= (((((-((-(arr_1 [0] [i_0 - 1])))))) * (min(-2359088426, (max(2247878795, 0))))));
        var_13 = ((+(((arr_0 [i_0]) ? ((((arr_0 [i_0]) | (arr_1 [i_0] [i_0])))) : var_11))));
        arr_3 [i_0 + 1] = (max(((max((arr_0 [i_0 + 1]), 1756088980))), ((var_8 >> ((min(var_12, 0)))))));
    }
    var_14 = (((((-(var_11 || var_7)))) ? var_1 : var_2));
    #pragma endscop
}
