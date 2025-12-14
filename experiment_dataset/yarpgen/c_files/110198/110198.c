/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(((var_4 ? var_2 : -3690)), var_7))) ? (((max(var_10, var_5)))) : var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = (max(((((735114300 ? 30325 : (arr_7 [i_1] [i_1]))))), 2281185485805133244));
                    var_14 += ((((var_8 ? (var_11 && var_3) : var_9)) >= (arr_4 [18] [i_1] [i_2 - 1])));
                    arr_9 [i_0] [i_0] [i_2] [i_1] = ((-((((min(var_4, -21385))) ? -1049581410 : ((max(250, var_5)))))));
                    var_15 = (max((arr_4 [i_1] [i_2 - 2] [i_0]), -9846));
                }
            }
        }
    }
    #pragma endscop
}
