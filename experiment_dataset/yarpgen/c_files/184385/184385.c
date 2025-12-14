/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, -var_6));
                            arr_11 [14] [13] [i_2] [i_2] [i_0] = (arr_6 [15] [i_1] [i_2] [i_3]);
                            var_12 -= var_10;
                            arr_12 [i_0] [i_0] = var_8;
                            arr_13 [i_0] [i_0] [i_1] [i_0] [6] [i_3] = var_10;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((-(!-1))))));
                            var_14 = (max((~var_3), ((((arr_3 [i_0] [i_0 + 2]) ? (arr_1 [i_0 + 1] [i_0 + 2]) : 91)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_15 *= ((~((-(arr_30 [i_9 + 1] [i_9 - 2] [i_9 - 1] [i_7] [i_10])))));
                                var_16 = (min(((!(arr_30 [i_9 + 1] [i_9] [i_9 + 1] [i_9] [i_9 - 1]))), (!var_10)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_39 [i_12] [i_11] [2] [i_12] [i_11] [16] = ((-(arr_16 [i_12 + 1] [i_12 + 1])));
                            var_17 = (max(var_17, (arr_16 [i_11] [i_7])));
                            var_18 = ((~((-var_2 ? (((var_5 ? var_9 : var_10))) : var_8))));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
