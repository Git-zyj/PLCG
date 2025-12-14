/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = var_13;
                                arr_16 [i_0] [i_0] = var_1;
                                arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] = (17 & 81524623);
                                var_21 = (((var_17 - 8625793186396472235) ? ((var_11 ? 81524613 : var_15)) : (arr_9 [i_0] [i_4] [12] [i_3] [12] [2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_23 [1] [i_1] [i_0] [i_2] [i_5] [i_6] = ((~(((!(arr_10 [i_6]))))));
                                var_22 = (min(-30, 16674511942449093299));
                                var_23 |= var_10;
                            }
                        }
                    }
                    var_24 = var_2;
                }
            }
        }
    }
    #pragma endscop
}
