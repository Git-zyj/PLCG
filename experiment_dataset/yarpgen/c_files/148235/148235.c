/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    for (int i_0 = 4; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, var_12));
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) / (max((arr_1 [i_0]), (min((arr_1 [i_0]), var_9))))));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_18 = (arr_3 [5]);
        arr_5 [i_1 - 3] [i_1] = (arr_0 [i_1] [7]);
        var_19 = ((-2 ? ((-721601067 ? 25132 : (-2147483647 - 1))) : (((arr_1 [i_1 - 2]) ? (arr_1 [i_1]) : (arr_1 [i_1 - 1])))));
        var_20 = var_9;
    }
    #pragma endscop
}
