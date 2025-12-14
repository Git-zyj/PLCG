/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 += (arr_0 [i_0]);
                    var_14 = (((arr_5 [i_0 - 1] [i_1 + 1] [i_0 - 1]) ? (arr_2 [i_0 + 1] [i_1 - 1]) : (((arr_1 [i_0 + 1] [i_1 + 1]) >> (var_9 - 25953)))));
                    var_15 = ((var_5 ? ((((((arr_1 [i_1] [10]) ? (arr_1 [i_0] [i_2]) : var_7))) ? (arr_1 [i_0] [i_1]) : (arr_2 [i_0 + 2] [8]))) : ((((var_5 > var_3) ? (arr_4 [i_2] [21]) : (((arr_4 [i_0 - 1] [i_1 - 1]) ? (arr_3 [i_0] [i_1 + 1]) : 8722225886976923157)))))));
                    arr_6 [i_0 + 1] [10] [i_1] = (max((((arr_3 [i_1 - 1] [i_0 + 2]) ? (arr_3 [i_1 - 1] [i_0 + 2]) : (arr_4 [i_1 - 1] [i_0 + 2]))), (arr_2 [i_1 - 1] [i_0 + 2])));
                    var_16 = ((((((((-(arr_3 [5] [i_1])))) ? (arr_5 [i_0 - 1] [i_0] [i_0 + 2]) : (((arr_1 [i_1] [i_2]) ^ var_8))))) ? (arr_5 [i_0 + 1] [i_0 + 1] [i_2]) : ((((var_2 != (arr_1 [i_0] [i_0 - 1])))))));
                }
            }
        }
    }
    #pragma endscop
}
