/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_1] |= var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (((((max((arr_0 [i_2] [i_1]), -154935141))) ? var_8 : var_6)))));
                                var_12 = ((((arr_4 [8] [i_2] [i_1] [0]) >> (((arr_4 [i_0] [i_0] [11] [i_3]) - 71)))));
                                var_13 = arr_7 [i_3] [i_3] [i_3];
                                arr_11 [i_3] [i_1] [i_2] [i_3 + 2] [i_4] = var_2;
                            }
                        }
                    }
                    var_14 = ((-((max(147, (min(var_6, 1)))))));
                }
            }
        }
    }
    var_15 -= var_0;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            {
                var_16 = (((-var_0 + 2147483647) >> (((var_6 - var_10) - 3637826075))));
                arr_17 [i_6] &= (((arr_16 [i_5] [i_5] [i_6]) & ((((((arr_9 [i_5] [i_5]) ? 16 : (arr_0 [i_5 + 1] [i_5 + 1])))) ? (arr_2 [i_5] [i_5] [i_6]) : (var_0 - 9610)))));
                var_17 -= (((min((((arr_16 [i_5 - 1] [i_5 - 1] [5]) ? (arr_9 [i_6] [i_5]) : (arr_4 [i_6] [i_6] [9] [i_5]))), var_7)) + var_6));
                var_18 = var_8;
            }
        }
    }
    #pragma endscop
}
