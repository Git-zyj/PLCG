/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_3] [i_1] [6] [i_1] [i_1] [i_1] = (arr_0 [i_3]);
                                var_15 = ((!(((-(arr_11 [i_3]))))));
                                arr_18 [i_0] [i_1] [i_1] [1] [i_3] [6] [i_4] = (arr_12 [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_16 = 6898085484892579946;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_24 [i_5] [i_1] [i_2] [i_5] [i_1] [i_5] [i_5] = 6898085484892579960;
                                var_17 = ((~(arr_22 [i_1])));
                                var_18 = -6898085484892579949;
                                var_19 = 0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_30 [i_0] [i_0] [i_7] [0] [i_7] [i_7] [i_7] = -2398;
                                arr_31 [i_0] [i_7] [i_2] [i_7] [i_2] [4] [i_2] = 0;
                                var_20 = 15311;
                                arr_32 [i_0] [i_7] [1] [i_0] [i_0] [i_0] = (arr_21 [i_2] [5] [i_2] [i_2] [i_2] [i_1] [i_0]);
                                var_21 = (arr_19 [i_0] [5] [i_2] [i_7] [i_8]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = 8689668891758655400;
    var_23 = (!-127);
    #pragma endscop
}
