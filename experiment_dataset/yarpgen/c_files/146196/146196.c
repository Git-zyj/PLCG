/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((min(var_12, var_3)), 1))) ? (((~(var_12 || var_17)))) : (((var_5 ? 1278525189127413764 : var_8)))));
    var_20 = var_10;
    var_21 = var_2;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_22 = (arr_0 [i_0]);
        arr_2 [i_0] = var_12;
        var_23 = (min(var_23, (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_24 = (min(var_24, ((max((((893660022 ? var_18 : 1))), (((arr_4 [1] [1]) ? (min(2, (arr_1 [18]))) : 0)))))));
        var_25 = var_0;
        arr_6 [12] |= (max(((((arr_0 [1]) <= 7500673983370773737))), (min((arr_4 [14] [i_1]), (arr_5 [5])))));
    }
    #pragma endscop
}
