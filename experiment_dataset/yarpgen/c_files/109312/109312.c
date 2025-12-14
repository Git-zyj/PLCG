/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (max(var_11, var_2));
                var_12 -= ((var_9 / ((((var_10 / (arr_0 [i_0] [i_0 + 3]))) / var_8))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_12 [i_2] [i_4] [i_2] = 1;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_13 = -115;
                                arr_17 [i_4] [i_6] [i_6] [i_5] [i_6] [i_2] [i_6] = (arr_13 [i_4] [i_4]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_23 [i_4] [1] [i_4] = (((((var_8 ? var_1 : var_4)) << (((((arr_20 [i_2] [22] [i_4] [i_2] [i_8 - 1]) ? var_6 : 115)) - 113)))));
                                arr_24 [1] [i_4] = ((((min((arr_9 [i_2]), var_2))) - ((var_1 ? var_9 : 124))));
                                var_14 = ((1 ? -var_7 : (((((var_3 ? var_6 : var_2))) ? ((113 ? var_5 : var_6)) : (((var_10 ? var_7 : var_1)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_15 += (min(((((min((arr_6 [i_2] [i_3]), var_7))) ? (((arr_14 [i_2] [i_3] [17] [i_9]) ^ 1)) : 112)), var_6));
                                arr_30 [i_4] [13] [9] [i_4] [i_4] = (((((var_4 ^ (arr_6 [i_2] [i_3])))) ? (max(((((arr_13 [i_4] [23]) ? var_7 : (arr_18 [i_2] [i_4] [i_4] [i_4] [i_10] [i_4])))), var_4)) : 1));
                                var_16 = var_4;
                                arr_31 [i_4] [i_4] = 1;
                            }
                        }
                    }
                    var_17 = (min(var_17, var_10));
                }
            }
        }
    }
    var_18 &= var_1;
    #pragma endscop
}
