/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_1 + 1]))) | (((var_5 != (arr_8 [i_0] [i_1 + 1] [i_2 + 1]))))));
                    var_20 = (arr_1 [i_0]);
                    arr_10 [i_2] = ((((18369173441002111221 ? (arr_7 [12] [i_2 + 3] [1]) : (arr_0 [i_1 + 1])))) ? ((((arr_7 [i_2 + 3] [i_1 + 1] [i_2]) ? (arr_5 [i_2 + 3] [i_1 + 1] [i_2 + 1]) : (arr_5 [i_2 + 3] [i_1 + 1] [i_2 + 2])))) : (min((min(var_9, var_2)), ((((arr_7 [i_0] [i_1 + 1] [1]) ? (arr_0 [i_0]) : var_5))))));
                    arr_11 [i_0] [i_2] [i_2] = (arr_2 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
