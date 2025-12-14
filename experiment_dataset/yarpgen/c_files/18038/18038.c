/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_17 = (-64 ? (arr_1 [i_0 + 1] [i_0 + 1]) : (((((((arr_0 [i_0] [i_0]) == -1)))) * (arr_1 [i_0 + 2] [i_0 + 1]))));
        var_18 = (((arr_0 [i_0 + 1] [i_0 - 1]) / ((var_15 ? (min((arr_1 [i_0 + 1] [7]), var_10)) : (((min(var_0, var_11))))))));
        var_19 &= (((((((245 ? (arr_1 [3] [i_0]) : (arr_1 [i_0] [i_0]))) * (!3574851624)))) ? (arr_0 [11] [i_0 - 1]) : (((arr_0 [i_0 - 1] [i_0]) ? ((var_5 & (arr_1 [i_0 - 1] [i_0 - 1]))) : ((((arr_0 [i_0] [i_0]) ? 59 : (arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_20 = var_13;
        var_21 = ((((((arr_1 [i_1 - 2] [i_1 + 1]) ? var_5 : (arr_1 [i_1 + 3] [i_1])))) ? (arr_3 [5] [4]) : ((((var_2 ? var_15 : (arr_1 [i_1] [i_1]))) | (arr_0 [i_1 - 3] [8])))));
        arr_4 [3] [i_1] = var_7;
    }
    var_22 = (((((((10 ? var_11 : var_9)) * (((max(10, 48))))))) ? var_13 : var_11));
    var_23 = 126;
    #pragma endscop
}
