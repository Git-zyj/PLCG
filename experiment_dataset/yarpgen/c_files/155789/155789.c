/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) ? ((((min(var_11, (arr_2 [i_0] [18])))) ? ((var_3 ? -3374488244202994322 : var_5)) : (arr_0 [i_0]))) : (((((max((arr_1 [i_0]), var_11))) ? ((var_5 ? var_0 : (arr_1 [i_0]))) : -20355)))));
        arr_4 [7] = ((var_0 + (3374488244202994322 - 501725593)));
        arr_5 [i_0] = ((-((-(arr_0 [i_0])))));
    }
    #pragma endscop
}
