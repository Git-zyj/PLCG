/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = var_11;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_14 = (((arr_0 [i_0 - 1] [i_0 + 1]) ? (((arr_1 [i_0 - 3]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 2]))) : (((4 < (arr_1 [i_0 - 1]))))));
        var_15 = (((((~(((arr_1 [i_0]) - (arr_1 [i_0])))))) ? (((!(arr_0 [i_0] [i_0])))) : (arr_1 [i_0 + 1])));
        var_16 = ((var_8 == (arr_1 [i_0 - 1])));
        var_17 = (arr_0 [i_0] [i_0]);
        var_18 = (max(var_18, 241));
    }
    var_19 = var_7;
    #pragma endscop
}
