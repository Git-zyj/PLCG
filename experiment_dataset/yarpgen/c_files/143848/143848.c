/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((0 ? var_7 : 2054235865)) / var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((-(((arr_3 [i_1] [i_0]) ? var_10 : (~-1)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [8] [i_3] [i_4] = ((((-((min(0, (arr_7 [i_1] [i_1]))))))) ? ((var_11 ? var_3 : var_3)) : 1);
                                arr_13 [i_0] [i_0] [1] [3] = var_7;
                                arr_14 [i_2] [4] [i_2] [i_2] [4] = (((var_4 && var_2) + 111));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_16 += (min(var_7, (((var_8 * var_4) | var_6))));
                arr_19 [i_5] [i_6] = (((((var_14 - var_2) | (max(var_6, (arr_17 [i_5 - 2] [i_6])))))) ? ((~(max(var_7, (arr_18 [i_5] [i_6]))))) : ((1 ? 1 : -430698226)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 4; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 17;i_9 += 1)
            {
                {
                    var_17 *= (arr_25 [i_7] [i_7 - 2] [i_9] [6]);
                    var_18 += ((((var_10 | (arr_21 [1] [i_7 - 4]))) % var_4));
                    var_19 = ((-113 ? ((~((111 ? 127 : var_5)))) : 109));
                }
            }
        }
    }
    #pragma endscop
}
