/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((var_4 ? ((min((min(var_0, var_18)), (var_11 != var_19)))) : (max(var_16, (!var_11))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (((((((var_10 ? (arr_6 [i_0] [i_1 - 1]) : (arr_1 [i_1] [i_2])))) ? (arr_1 [i_1 + 1] [1]) : (!var_0)))))));
                    arr_9 [14] [i_1 + 1] [i_1 - 1] [14] = (min((((2147483638 - var_13) ? 1964823177503459207 : ((max(2121183127, var_0))))), (((var_18 ? (arr_7 [i_0] [i_0] [i_1 - 1] [i_1 - 1]) : 2147483642)))));
                }
            }
        }
    }
    var_22 = (((-(!var_0))));
    #pragma endscop
}
