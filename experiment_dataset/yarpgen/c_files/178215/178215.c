/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((min((max(((var_6 ? var_6 : var_2)), var_7)), var_3)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((var_5 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((-(arr_0 [i_0]))) : ((var_11 ? (arr_0 [i_0]) : var_4))));
        var_13 = (max((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((arr_0 [i_0]) | var_10))));
        var_14 += (max(((0 ? 229 : 51309)), (((arr_0 [i_0]) * (((arr_1 [i_0] [i_0]) * var_5))))));
        var_15 -= ((-(max(((max(51297, 0))), (240 * 1)))));
        var_16 = (((((((arr_0 [i_0]) / var_6)))) * (min(((max(var_3, (arr_1 [9] [i_0])))), (((arr_1 [i_0] [i_0]) * var_10))))));
    }
    #pragma endscop
}
