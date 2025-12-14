/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 = (((((((~(arr_7 [i_0] [i_0] [i_0] [i_0]))) <= (((!(arr_9 [i_4] [i_3] [i_2] [i_1]))))))) < ((((-22349 && 1) <= (~22329))))));
                                var_13 = (max(var_13, (!-22349)));
                            }
                        }
                    }
                    var_14 -= (!0);
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_15 *= (arr_12 [i_0] [i_1] [i_2 + 1] [i_5] [i_6 + 1]);
                                arr_16 [i_6] [i_1] [i_2 - 1] [i_5] [i_6 + 1] = 2330562444;
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] = (arr_13 [i_1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2]);
                    arr_18 [i_0] = -1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            {
                arr_23 [i_7] [i_7] [i_7] = ((((~((~(arr_9 [i_7] [i_8 + 1] [i_8 + 1] [i_8]))))) ^ (~-6993621120805923513)));
                var_16 = (min(var_16, (((-(((arr_19 [i_8 + 1]) ? var_0 : (arr_4 [i_8 - 1] [i_8 - 1] [i_8 + 1]))))))));
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
