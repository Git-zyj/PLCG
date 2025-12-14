/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 = var_11;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = (((~(arr_7 [i_1] [12] [12]))));
                    arr_9 [i_0] [17] [i_2] [14] = var_1;
                    var_20 -= (((arr_7 [i_2 + 1] [i_0 + 1] [i_2 + 1]) && var_17));
                    var_21 *= (arr_5 [i_2 + 2] [i_2] [i_2 + 2]);
                }
            }
        }
        arr_10 [i_0] = (((((var_15 ? var_12 : var_10))) ? ((var_9 ? var_7 : var_1)) : (((arr_1 [i_0]) ? 1869306731 : var_1))));
    }
    var_22 = var_7;
    #pragma endscop
}
