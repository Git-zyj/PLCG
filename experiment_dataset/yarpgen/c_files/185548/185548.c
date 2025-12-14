/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!var_3) && var_15));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] = (((((!(arr_8 [8] [i_0] [i_0])))) & 21628));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = (!181);
                                var_20 = ((-(var_2 / 32764)));
                                var_21 = (((min(((var_17 ? var_11 : var_3)), var_15)) ^ (min(((max(var_12, 3102251576))), var_10))));
                                arr_15 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = 255;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_22 = ((((((~var_12) ? (~var_1) : ((-83 ? (arr_10 [i_1] [i_0] [i_1]) : var_4))))) ? ((var_7 | (((arr_12 [i_0] [i_0] [i_0] [i_5] [i_0]) ? -32764 : 0)))) : ((((((492687582 | (arr_12 [i_6] [i_0] [i_2] [i_0] [i_0])))) ? 130048 : 384)))));
                                var_23 = (((min(((114 ? var_1 : var_10)), var_2)) == (((arr_17 [i_5 - 1] [i_5]) ? (arr_17 [i_5 - 3] [i_5]) : (arr_12 [7] [i_0] [i_6] [i_0] [i_1])))));
                            }
                        }
                    }
                    var_24 = (((((max((arr_2 [i_2 + 1] [i_2]), (arr_8 [i_0] [i_1] [i_0]))))) ? 128 : ((11555 ? -58 : 84))));
                }
            }
        }
    }
    var_25 = (min(var_25, var_1));
    #pragma endscop
}
