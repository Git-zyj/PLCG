/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((var_9 ? var_9 : var_10)) && var_5)))));
    var_16 |= (((min((var_7 / var_4), (var_13 >= -5902561013943849062))) >> (var_5 - 13467)));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_17 = (max(var_17, (((((!(((arr_1 [0] [i_0 - 2]) && -7376459296119227087)))) ? (max((arr_0 [i_0 + 4] [i_0 + 2]), (arr_0 [i_0 + 4] [i_0 + 1]))) : ((-((var_6 / (arr_1 [10] [i_0]))))))))));
        var_18 = (max(var_11, (((arr_1 [i_0 + 3] [i_0 + 1]) ? (arr_1 [i_0 - 1] [i_0 + 3]) : (arr_1 [i_0 - 1] [i_0 - 4])))));
        var_19 = (max(var_19, ((min(((((arr_1 [i_0 - 2] [i_0 - 4]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 - 4] [i_0 + 4])))), (((arr_1 [i_0 + 1] [i_0 - 3]) ? var_4 : var_4)))))));
    }
    #pragma endscop
}
