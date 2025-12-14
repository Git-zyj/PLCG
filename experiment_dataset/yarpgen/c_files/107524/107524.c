/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = ((156 ? 156 : 87));
        arr_3 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0])))) ? (min((arr_2 [i_0]), (min((arr_0 [1]), (arr_0 [i_0]))))) : (((((min((arr_1 [i_0]), (arr_2 [i_0])))) ? (((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0]))) : (arr_1 [i_0]))))));
        var_20 = ((~(max((min((arr_2 [i_0]), (arr_0 [i_0]))), ((((arr_2 [i_0]) / (arr_2 [i_0]))))))));
    }

    for (int i_1 = 3; i_1 < 24;i_1 += 1)
    {
        arr_7 [18] [i_1 + 1] = max(((max((arr_5 [i_1 - 3] [i_1 + 1]), (arr_5 [i_1] [i_1 - 3])))), (((-32767 - 1) - 103)));
        arr_8 [1] = (min(((+(((arr_5 [i_1] [i_1 - 2]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1]))))), (((arr_4 [i_1 + 1]) ? (arr_6 [i_1 - 2] [i_1]) : (((min((arr_5 [14] [i_1]), (arr_4 [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_13 [i_2] = (max(((((arr_10 [i_2]) == ((((!(arr_6 [i_2] [i_2])))))))), ((-(arr_4 [i_2])))));
        var_21 = (min((min((((arr_6 [i_2] [i_2]) ? (arr_11 [i_2]) : (arr_11 [i_2]))), (arr_12 [i_2]))), (((!(arr_12 [i_2]))))));
        arr_14 [i_2] = (arr_5 [i_2] [4]);
        var_22 = (min(((max((arr_10 [i_2]), (arr_10 [i_2])))), (((arr_10 [i_2]) ? (arr_10 [i_2]) : (arr_10 [i_2])))));
        var_23 ^= (max((((arr_10 [i_2]) & (arr_6 [i_2] [i_2]))), (min((arr_10 [i_2]), (arr_6 [i_2] [i_2])))));
    }
    var_24 = (((((var_7 ? (min(var_4, var_15)) : (min(var_4, var_1))))) ? var_17 : ((min((min(-77, 87)), (!32910))))));
    #pragma endscop
}
