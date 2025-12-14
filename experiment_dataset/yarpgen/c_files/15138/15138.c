/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] = ((4294967295 ? 4516 : 4294967295));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_7 [3] [i_1] [i_2] [19]);
                    }
                }
            }
        }
        var_17 = (((arr_8 [3] [15] [8] [15] [i_0] [15]) ? 4294967295 : (arr_9 [i_0] [i_0] [i_0] [i_0])));
        var_18 = -98;
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((((max((arr_8 [1] [1] [i_4] [i_4] [20] [i_4]), ((max((arr_9 [i_4] [i_4] [i_4] [i_4]), var_14)))))) ? (max(65535, (min(var_11, (arr_2 [i_4]))))) : var_4));
        arr_16 [i_4] = ((((max(var_14, (max((arr_7 [i_4] [i_4] [i_4] [i_4]), var_14))))) ? (arr_13 [i_4]) : var_7));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [i_5] = arr_4 [i_5] [i_5];
        var_19 = (((arr_2 [i_5]) ? (arr_14 [i_5] [i_5]) : -32807973));
    }
    var_20 = ((((min(var_0, (min(var_1, var_7))))) ? ((var_10 ? (max(var_5, var_3)) : var_13)) : (((max(-2083, 1))))));
    #pragma endscop
}
