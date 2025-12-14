/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = 3872343707;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [18] [i_1] = var_1;
                    var_15 = (((-127 - 1) && var_8));
                    var_16 = (((arr_1 [i_1] [i_2]) == var_12));
                    var_17 = var_10;
                }
            }
        }

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_18 = (((arr_6 [i_0] [6]) & (arr_9 [i_0] [i_3])));
            arr_11 [i_3] [i_3] = 126;
            var_19 = 127;
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_20 = ((1446894716 ? (max(-5880, 709286658)) : 1446894716));
        var_21 = ((~(((((-83 ? (-127 - 1) : -78))) ? 0 : var_1))));
    }
    var_22 = (((min(var_6, (!var_10))) >> (((var_12 && var_6) / var_11))));
    #pragma endscop
}
