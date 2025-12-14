/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (min((arr_2 [i_0]), var_8));
                    var_20 ^= ((((min(var_18, (-43 && var_18)))) | ((max((arr_0 [i_2 - 1] [2]), 57)))));
                    arr_8 [i_0] [i_0] [7] = var_3;
                }
            }
        }
    }
    var_21 *= var_13;
    var_22 = (max(var_22, (((((!(-29330 & var_9))))))));
    #pragma endscop
}
