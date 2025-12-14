/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(1, (~1)))) ? var_5 : (min((((var_5 ? -7124 : var_2))), ((1 ? 1 : 135117123)))));
    var_11 = var_7;
    var_12 *= var_1;
    var_13 = (min(var_9, ((((var_7 ? var_5 : var_3)) + (24556 * var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = ((((arr_3 [i_0] [i_1] [i_2]) ? var_1 : (arr_3 [i_1] [i_1] [i_1]))));
                    arr_6 [i_1] [i_0] [i_2] [i_0] = ((((var_6 / ((((arr_2 [i_0] [21] [21]) && var_3)))))) / ((var_4 + (arr_1 [i_1] [i_2]))));
                    arr_7 [i_1] = (arr_2 [i_0] [i_0] [i_0]);
                    var_15 = (min((~-184), (((arr_0 [i_1]) & (arr_3 [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
