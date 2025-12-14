/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_11 ? (((max(var_1, var_3)))) : ((var_4 ? var_3 : var_2))))) ? (min((var_3 + var_5), var_12)) : (((var_9 * ((var_11 ? 4006856130 : var_6)))))));
    var_14 = ((min(var_2, (((var_3 ? var_6 : -20796))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = var_12;
        arr_3 [i_0] = ((var_8 > ((-1 ? ((var_2 / (arr_0 [i_0]))) : ((max((arr_0 [i_0]), var_5)))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 = (((max((arr_4 [i_1] [i_1]), (arr_5 [i_1]))) == (arr_4 [i_1] [i_1])));
        arr_6 [i_1] = (((max((arr_4 [i_1] [i_1]), (arr_4 [20] [i_1]))) ^ (min(((max((arr_5 [i_1]), (arr_5 [11])))), ((var_11 ? (arr_5 [i_1]) : var_9))))));
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (max(var_7, (max((arr_8 [i_2 - 3]), (arr_8 [i_2 + 2])))));
        arr_11 [i_2] = -9223372036854775807;
        arr_12 [i_2] [i_2] = (((max((arr_2 [i_2 + 1]), (arr_8 [i_2 - 2]))) > (((var_0 ? (((0 ? var_5 : (arr_7 [i_2])))) : 9223372036854775800)))));
        var_17 = (min(var_17, ((((((max(288111166, 20796)))) ? (((min(20795, (min(var_7, 5533)))))) : (((arr_2 [i_2 - 3]) - (((arr_4 [i_2] [i_2]) * (arr_8 [i_2]))))))))));
    }
    #pragma endscop
}
