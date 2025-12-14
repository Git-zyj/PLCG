/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((var_7 ? var_11 : var_11))));
    var_16 = min(((-(max(var_1, var_3)))), (!var_13));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (max(((((max((arr_0 [5]), var_5))) ? var_6 : (max((arr_0 [i_0]), var_8)))), (((((~(arr_3 [i_0])))) ? (min(var_4, (arr_0 [2]))) : (arr_3 [8])))));
        var_18 = ((!(arr_0 [i_0])));
        var_19 = (((((((((!(arr_2 [i_0]))))) - (max((arr_1 [i_0]), (arr_2 [i_0])))))) ? ((((!(arr_1 [i_0]))))) : (((((arr_0 [i_0]) && (arr_3 [i_0]))) ? (((arr_3 [9]) ? (arr_3 [i_0]) : (arr_1 [i_0]))) : var_11))));
    }
    var_20 = (min(((((max(var_12, var_10))) ? (!var_6) : ((var_11 ? var_6 : var_11)))), ((((var_0 ? var_3 : var_3))))));
    #pragma endscop
}
