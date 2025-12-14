/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((max((min(-1310421865204690655, var_2)), 14)))));

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = var_6;
        var_12 = (arr_1 [i_0 - 3]);
    }

    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_13 = (max(var_13, (((((24 ? ((var_2 ? var_8 : 28206)) : (arr_5 [i_1 + 1]))) ^ ((max(28211, ((37329 ? 37351 : var_1))))))))));
        var_14 = (max(var_14, var_2));
        arr_6 [1] = (min(var_1, (((((var_9 | (arr_4 [i_1] [i_1 - 1])))) ? 28191 : (var_2 | 37315)))));
    }
    var_15 = (max(var_15, ((((((((min(var_5, 1462162014))) ? (var_9 >= var_2) : (28206 / var_0)))) && var_7)))));
    #pragma endscop
}
