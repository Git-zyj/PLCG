/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_14, -var_7));
    var_20 = (((!-45) * (max(((min(var_11, var_3))), ((65535 ? var_18 : var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [1] = (max(((min(var_2, var_14))), (max((min((arr_8 [6] [9] [5]), var_12)), ((((arr_3 [0]) && var_5)))))));
                    arr_10 [16] [4] = -var_9;
                    arr_11 [12] [1] = var_14;
                }
            }
        }
    }
    #pragma endscop
}
