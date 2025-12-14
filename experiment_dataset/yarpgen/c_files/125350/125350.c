/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_10 ? ((var_9 ? (max(var_3, var_6)) : ((var_8 ? var_7 : var_13)))) : -var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (max((((min((arr_3 [i_0] [5] [12]), (arr_5 [3] [i_1 + 1]))))), (arr_3 [2] [i_1] [i_2])));
                    var_19 = (min(var_19, ((min((((arr_5 [i_2] [i_1 - 1]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((arr_1 [i_1 + 1] [0]) ? (arr_2 [9] [i_1] [i_2]) : (arr_3 [i_1] [i_1] [i_1]))))), (arr_5 [i_2] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
