/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((max((~var_7), var_7)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (((~(~-639315599340680011))));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = (max((max((!var_9), -5103)), ((~((~(arr_2 [i_0])))))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_17 = (max(var_17, (((var_12 ? (((arr_7 [i_0] [0]) - (arr_5 [i_0] [4] [i_1 - 1]))) : ((((max(var_1, var_0))) ? (var_7 * var_1) : 1700589914)))))));
            var_18 = (var_3 | var_9);
            var_19 = ((!((((arr_0 [i_1 + 1] [i_1 - 1]) ? (arr_0 [i_1 + 1] [i_1 - 1]) : (arr_0 [i_1 + 1] [i_1 - 1]))))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_20 = max(((min((arr_7 [i_0] [16]), (((arr_7 [2] [2]) ? var_2 : (arr_9 [i_2])))))), (min((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_6 [i_2]))), (var_9 | 21907))));
            var_21 += ((((max((arr_2 [i_0]), (min((arr_7 [i_0] [10]), var_9))))) ? (((arr_9 [i_2]) ? (arr_9 [i_0]) : (arr_9 [i_0]))) : 94));
        }
    }
    var_22 += (((max(var_13, ((var_0 ? 1 : -639315599340680006)))) / var_6));
    #pragma endscop
}
