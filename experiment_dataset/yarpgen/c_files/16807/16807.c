/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_2 - (var_11 && var_5))));
    var_21 = (min((max((min(var_16, var_17)), var_15)), ((max(var_11, (max(var_6, var_19)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [13] = (max((max((max(var_2, (arr_1 [i_1] [i_1 - 1]))), ((((arr_4 [1]) ? (arr_3 [i_0] [i_1]) : var_18))))), ((min((arr_4 [i_0 - 2]), 159)))));
                arr_7 [i_0] = ((((((arr_5 [i_0] [2] [2]) ? (((max((arr_4 [i_0]), (arr_3 [i_0] [1]))))) : (((arr_5 [i_0] [i_0 - 2] [3]) ? var_4 : var_1))))) ? 104 : ((((((!(arr_5 [14] [i_1] [i_1 - 1]))))) + (arr_1 [i_0] [i_1 - 1])))));
                var_22 = (min(var_22, (arr_5 [i_0] [i_0] [i_0 + 1])));
            }
        }
    }
    var_23 = min(var_10, (max(16, var_0)));
    var_24 = (min(var_24, (((var_9 ? (min(var_6, ((1155079467 ? 105 : 111)))) : (var_15 == var_18))))));
    #pragma endscop
}
