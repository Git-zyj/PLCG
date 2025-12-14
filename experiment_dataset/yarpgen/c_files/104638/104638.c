/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min(var_10, var_2))) ? ((var_3 ? (arr_1 [i_0 - 1] [i_0]) : var_5)) : (min((arr_1 [i_0 - 1] [i_0]), var_3))));
        var_11 = ((((min(17776, var_4))) ? ((((arr_0 [i_0 - 1]) * var_5))) : (min(225388838, var_0))));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((!(!var_9)));
        var_12 = (max(var_12, var_1));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (min(((((arr_9 [i_2] [i_2]) ? (var_5 + var_8) : var_3))), (min(((-(arr_5 [i_2]))), var_6))));
        arr_11 [i_2] = min((((var_0 ? var_2 : (arr_4 [0])))), (((min((arr_4 [i_2]), 124938325)) | 1)));
        arr_12 [i_2] = ((((min(17808, var_4))) - (((!(((var_0 ? var_4 : var_7))))))));
        var_13 = var_5;
    }
    var_14 = ((var_10 - ((var_6 ? (25764 >> var_7) : var_3))));
    var_15 = (max(var_15, (min((min(-var_2, (min(var_7, var_8)))), var_8))));
    var_16 = (min(-var_6, var_0));
    #pragma endscop
}
