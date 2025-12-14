/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (arr_3 [i_1])));
                    arr_11 [i_2] [i_2] = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 -= ((-((~((~(arr_13 [8] [i_2] [8] [8])))))));
                                var_13 = (max(var_13, (arr_3 [i_0 + 4])));
                                var_14 = (arr_5 [i_0 - 1] [8]);
                                var_15 = (max(var_15, (arr_2 [7])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (--var_4);
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_17 = (((min(1477260350, (-32767 - 1))) >> (((arr_13 [0] [i_6] [i_6] [i_7]) - 95))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_18 = var_0;
                                var_19 = -var_3;
                                arr_30 [10] [i_6] [i_7] [10] [i_6] [i_8] [i_9] = ((-(arr_9 [4] [i_6])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
