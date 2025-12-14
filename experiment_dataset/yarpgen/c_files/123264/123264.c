/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = ((((var_3 > var_1) ? (max(var_10, var_8)) : var_9)));

    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((-9223372036854775807 - 1) ? (max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 2]))) : (arr_1 [i_0 - 1])));
        var_14 = (max((arr_0 [i_0 - 3] [i_0 - 2]), 0));
        arr_3 [i_0] [i_0] = (min(((~(arr_1 [i_0]))), (((-((var_11 >> (((arr_0 [i_0] [i_0 - 1]) - 339772294)))))))));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [7] [5] = 0;
        var_15 = (((((0 ? var_2 : (max(var_1, 0))))) ? (max((min(var_7, var_3)), (var_8 % 65528))) : (((0 ? 0 : (arr_4 [i_1]))))));
        arr_7 [i_1] &= (55711 & 0);
    }
    #pragma endscop
}
