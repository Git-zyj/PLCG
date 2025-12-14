/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_14 -= (max(((~((~(arr_1 [i_0]))))), (((arr_0 [i_1 + 1] [i_1]) ? (arr_0 [i_1 - 1] [i_1]) : (arr_0 [i_1 + 1] [i_1 + 1])))));
                var_15 = (min(var_15, (min(((((((~(arr_2 [i_0])))) ? ((~(arr_3 [8] [8]))) : (((arr_0 [i_0] [i_1 + 1]) ^ (arr_0 [i_0 - 2] [i_1])))))), (((arr_3 [i_0 + 2] [i_1 + 1]) ? ((~(arr_4 [10]))) : (arr_1 [i_1])))))));
                var_16 = (min(var_16, (((!(((-(arr_2 [1])))))))));
                arr_5 [i_0] [i_1 - 1] = (min(((-(arr_1 [i_1 - 1]))), (arr_3 [i_0 - 1] [i_0])));
            }
        }
    }
    var_17 = var_3;

    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_18 = (((arr_8 [i_2] [i_2 + 2]) ? ((((arr_6 [i_2 + 2]) | (min((arr_7 [i_2]), (arr_7 [i_2])))))) : (max(((max((arr_6 [i_2]), (arr_7 [i_2])))), (arr_8 [i_2] [i_2 + 1])))));
        var_19 = ((~((((((arr_6 [i_2]) ? (arr_6 [i_2 - 1]) : (arr_7 [i_2 - 1])))) ? (((arr_6 [i_2]) ? (arr_8 [i_2] [i_2]) : (arr_7 [i_2]))) : (arr_9 [i_2])))));
    }
    var_20 += (max(((~((var_4 ? var_3 : var_8)))), (((var_0 ? var_3 : var_12)))));
    #pragma endscop
}
