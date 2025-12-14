/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((max(18080, -106)) ^ (max(-97, var_14))))));
                arr_6 [i_0] = ((var_1 ? (((max((arr_1 [9] [i_1]), 255)) << (728867794 - 728867765))) : (((235 ^ (((-1809412597 <= (arr_3 [i_1])))))))));
                arr_7 [i_0] [i_0] = var_12;
                arr_8 [i_1] [i_1] [i_0] = (arr_4 [i_0] [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_2] [i_3] [i_4] = -var_0;
                    var_19 = 5348155351320890990;
                }
            }
        }
    }
    var_20 = (max(var_20, ((((max((!var_16), var_9))) + var_8))));
    #pragma endscop
}
