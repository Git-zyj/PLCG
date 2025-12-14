/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((1 > ((min(0, 31744)))));
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (arr_11 [i_4] [i_3] [i_2] [i_1] [i_0]);
                                var_18 = var_0;
                                var_19 = ((((max(1, 65531))) <= (arr_12 [i_2] [i_2 + 1] [i_1 + 3] [i_1] [i_1] [i_1])));
                                arr_14 [2] [i_3] [i_2] [i_1] [2] |= var_3;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_20 -= (((((min(1, ((var_4 ? var_11 : 1)))) + 9223372036854775807)) << (((-1 + 21) - 20))));
                                arr_21 [i_0] [i_1] [i_1] [i_2] [i_5] [i_0] [i_6] = 1237778857;
                                var_21 = (((((1 | 448) ? var_10 : var_2)) & (arr_16 [i_0] [i_1] [i_6 - 1] [i_1 + 1])));
                                var_22 = ((32757 ? 32756 : 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
