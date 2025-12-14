/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = var_10;
                var_12 = var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_19 [i_4] [i_2] [11] [i_5] [i_6] [7] [i_3] = (((((var_8 ? var_8 : (arr_0 [i_5])))) ? var_3 : ((((var_6 ? var_4 : var_10)) << (((arr_14 [i_3] [i_4] [i_5] [i_6]) + 117))))));
                                var_13 = arr_7 [i_2];
                            }
                        }
                    }
                }
                arr_20 [i_2 + 2] [i_2 + 2] [i_2] = (arr_8 [i_2 + 1] [i_3] [i_2 + 2]);
                arr_21 [i_2] [i_2] [i_3] = ((((!(arr_16 [i_2] [i_2] [i_2] [i_2 + 1] [i_2] [i_2]))) ? (arr_12 [i_2 - 1] [i_3] [i_2] [i_2]) : ((((arr_10 [i_2] [i_2 - 2] [i_2]) || var_10)))));
                var_14 = ((((-((var_6 >> (var_3 - 1947054625)))))) ? (arr_10 [i_2] [i_3] [i_3]) : var_9);
                arr_22 [i_2] = (((arr_10 [i_2] [i_3] [i_3]) ? (((arr_11 [i_2] [i_2] [i_3] [i_2]) & var_2)) : var_10));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                arr_27 [i_8] [i_8] &= var_2;
                arr_28 [i_7] = (((var_1 ? (arr_0 [i_7]) : (arr_1 [8] [i_8]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 4; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            {
                var_15 ^= var_8;
                var_16 -= (((0 % 6) >> (((arr_1 [i_9 - 3] [i_9 - 2]) - 24604))));
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
