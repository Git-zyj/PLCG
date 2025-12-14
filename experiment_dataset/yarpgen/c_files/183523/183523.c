/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((var_10 <= (((var_2 ? var_4 : var_5)))))), var_5));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_14 += (((arr_1 [24]) ? var_4 : (((2139409206810275468 ? -1616310081 : -22811)))));
        arr_2 [i_0] = ((((var_10 || (arr_1 [2]))) ? 22810 : (min(((((arr_0 [i_0 + 1]) + (arr_1 [i_0])))), 10695009358582164240))));
        arr_3 [i_0 + 2] = ((!var_2) ? ((~(arr_1 [i_0 - 1]))) : ((var_5 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))));
    }
    var_15 = ((((max(var_6, 32341))) ? (min(var_11, (min(var_0, var_6)))) : (((max(var_11, (!-2535657294808104220)))))));
    #pragma endscop
}
