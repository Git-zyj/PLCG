/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (min(((-(var_2 ^ var_7))), (((!(((var_7 ? var_4 : var_12))))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_20 = (min(((min((((!(arr_0 [i_0] [i_0])))), (max((arr_2 [i_0]), (arr_2 [i_0])))))), (min(var_0, (max(760055276, (arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] = (min((min(var_1, (var_15 & var_14))), (((var_6 + (arr_2 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_4;
        arr_7 [i_1] [i_1] = (((-((var_15 ? var_2 : var_17)))));
        var_21 = (max(var_21, ((((1 | 1) ? var_13 : (arr_1 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_22 = ((-((~(arr_0 [1] [i_2])))));
        var_23 = var_4;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_12 [1] [i_3] = (min((max((arr_4 [i_3] [i_3]), (arr_4 [i_3] [i_3]))), ((-(arr_4 [i_3] [i_3])))));
        var_24 ^= (max((((+((var_9 ? (arr_2 [i_3]) : var_2))))), (min(var_1, (arr_10 [i_3])))));
        arr_13 [i_3] = ((max((arr_11 [i_3] [i_3]), (arr_11 [i_3] [i_3]))));
    }
    var_25 *= var_6;
    var_26 = (min(var_18, (((!(var_2 | 4274159787))))));
    #pragma endscop
}
