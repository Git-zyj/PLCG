/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [1] = -var_0;
        var_10 += (((((((((arr_0 [2] [10]) ? (-9223372036854775807 - 1) : 35115))) ? 35112 : 35128))) ? (arr_0 [i_0] [i_0]) : ((((arr_1 [i_0]) < (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = ((-(((((-2 ? (arr_1 [i_0]) : var_9))) ? ((((!(arr_0 [i_0] [i_0]))))) : (min(var_6, var_0))))));
        arr_4 [i_0] = var_0;
        var_11 = ((~((min((1022 && var_6), (arr_1 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_9 [i_1] [i_2] [15] &= var_4;
            arr_10 [i_1] = ((((((arr_5 [i_1 + 2]) ? (arr_7 [i_1 + 2]) : -1301499328501541501))) ? ((((((~(arr_7 [i_1])))) || 30415))) : (min((((arr_6 [i_1 + 1]) - (arr_8 [i_2] [i_2]))), (((arr_6 [i_1 + 1]) ? (arr_6 [9]) : (arr_6 [i_1])))))));
        }
        var_12 -= (min((arr_7 [i_1]), (arr_6 [i_1])));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_13 [i_1] [i_3] = (((min((arr_5 [10]), (arr_11 [2] [i_1 + 2]))) + 31854));
            var_13 += (((((arr_7 [i_1 - 1]) <= 14836)) ? 2611194894821271192 : ((min(var_1, var_0)))));
            var_14 = (max(var_14, (!13)));
            arr_14 [i_1] = ((98 <= ((((var_8 ? (arr_11 [i_3] [7]) : (arr_12 [i_3] [i_1] [i_3]))) / (arr_12 [i_1] [i_1 + 1] [i_1])))));
        }
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            arr_17 [i_4] [i_4 - 1] [i_4] = (max((((arr_7 [i_1 + 1]) ? ((~(arr_5 [i_1]))) : ((((!(arr_15 [1]))))))), (arr_16 [i_4 - 1])));
            arr_18 [1] = (11373304631502193489 != (((arr_8 [i_4 - 1] [i_4 - 1]) ? (arr_6 [i_4 - 1]) : (arr_12 [i_4 - 1] [i_4] [i_1 + 1]))));
        }
        arr_19 [i_1] = ((!((((arr_16 [i_1]) + (arr_11 [i_1 + 1] [i_1 + 1]))))));
        arr_20 [i_1] [i_1] = (arr_7 [i_1]);
    }
    var_15 = var_6;
    #pragma endscop
}
