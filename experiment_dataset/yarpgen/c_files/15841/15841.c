/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_11, 551465747086477727));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((((var_1 | (arr_2 [i_1] [i_1]))) / -12371));
                arr_5 [i_1] = (((var_4 != -var_3) >> ((((var_8 ? (min(var_6, 2886522729)) : ((var_6 / (arr_1 [i_0]))))) - 2886522701))));
            }
        }
    }
    var_15 = var_9;
    #pragma endscop
}
