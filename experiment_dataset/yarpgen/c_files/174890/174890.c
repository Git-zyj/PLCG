/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) ? (arr_0 [i_0 - 1] [i_0]) : (arr_0 [i_0 - 3] [i_0 - 3]))) & (arr_0 [i_0 - 2] [i_0])));
        arr_3 [i_0] = ((-((-((max((arr_0 [i_0 - 3] [i_0]), (arr_1 [i_0]))))))));
        arr_4 [i_0 + 1] [i_0] = (((((3835449824 ? 459517472 : 3835449824))) ? (max(((var_11 ? (arr_0 [i_0] [i_0]) : var_11)), 21056)) : (arr_0 [10] [i_0 - 3])));
        var_14 |= (arr_0 [i_0 + 1] [i_0 - 1]);
    }
    var_15 = (((min(((var_3 ? 748878570 : var_11)), (((var_6 ? var_7 : var_0))))) & (((var_8 ? (min(var_8, var_12)) : (min(var_5, var_10)))))));
    var_16 = var_6;
    #pragma endscop
}
