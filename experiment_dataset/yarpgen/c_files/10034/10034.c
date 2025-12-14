/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_15 ^= (arr_1 [i_0]);
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) ? (((arr_1 [i_0]) - var_9)) : (arr_1 [i_0])))) <= ((var_11 - (min((arr_0 [i_0]), var_4))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_16 += -5188820757346085044;
                    var_17 = (arr_10 [i_1] [i_2] [i_3]);
                }
            }
        }
        var_18 = (arr_8 [i_1]);
        var_19 = (~var_11);
    }
    var_20 = ((((!3840) && var_13)) || ((((var_5 ? var_9 : var_1)))));
    #pragma endscop
}
