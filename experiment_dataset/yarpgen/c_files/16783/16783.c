/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [6] = (((((var_0 ? (arr_9 [2] [2] [i_2 - 3] [i_2 - 1] [i_2]) : (arr_9 [i_2] [i_2] [i_2] [i_2 - 1] [i_2])))) != (min(var_9, (-2147483647 - 1)))));
                                var_16 = var_1;
                                arr_14 [i_0] [2] [i_2] [1] = (min((var_9 || 180), (((arr_11 [i_0 - 1] [i_2 - 2] [i_2] [i_2 - 1] [i_4] [i_2 - 2] [i_2 - 2]) ? (arr_11 [i_0 + 1] [i_2 - 2] [i_0 + 1] [i_2 + 3] [6] [i_0 + 1] [i_0 + 1]) : 1))));
                            }
                        }
                    }
                    arr_15 [i_1] = (arr_9 [1] [i_1] [i_2] [i_1] [5]);
                    arr_16 [1] [i_0] [i_0] = (((arr_3 [i_0 + 4]) >= ((min(-1470406326, var_1)))));
                    var_17 = ((~((var_5 ? var_3 : (arr_5 [3])))));
                }
            }
        }
        var_18 = 2;
        arr_17 [i_0] = (min((arr_7 [1] [i_0] [i_0]), var_14));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_24 [i_0] [i_5] [i_6] [i_7] [i_5] = ((((~var_1) >= (arr_22 [i_5]))));
                        arr_25 [i_7] [i_7] [i_7] [i_6] [i_5] = ((min((arr_19 [i_6 - 1] [i_5] [i_5 - 1]), (arr_22 [i_5]))));
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        var_19 = (max(var_19, ((((((((((arr_27 [i_8 + 3]) / (arr_27 [i_8])))) ? (arr_27 [i_8]) : ((var_2 ? var_9 : var_9))))) && var_6)))));
        var_20 = (((((109 >> (((-2147483636 - -2147483633) + 18))))) | (max(131072, (arr_26 [i_8])))));
        var_21 = var_2;
        var_22 *= (min(var_7, (max(var_1, var_12))));
    }
    var_23 = (((var_15 | 4378716019329546526) ? ((max(var_10, (var_0 % var_0)))) : var_12));
    var_24 = var_0;
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    var_25 = (max(var_25, (arr_32 [i_9] [i_9] [i_9])));
                    var_26 *= 86;
                }
            }
        }
    }
    #pragma endscop
}
