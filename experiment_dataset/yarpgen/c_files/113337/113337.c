/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 ^= var_3;
                            arr_11 [i_3] [i_3] [i_3] [i_0] = var_16;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_5] [i_4] [i_4] [i_1] [2] = (((var_4 ? 236 : var_1)));
                                arr_22 [14] [i_1] [14] [i_1] [i_1] [i_1] = min(((190 ? var_12 : (arr_10 [i_4] [i_4]))), (((arr_7 [i_0 + 2] [i_5 - 1] [i_6 - 2]) ? var_9 : 59)));
                                arr_23 [i_0] [i_5] [i_6] = (min((arr_8 [i_0] [5] [i_4] [0]), (arr_9 [i_0] [i_6])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    arr_32 [i_7] = ((~((~(min(var_0, (arr_30 [i_7] [i_8] [i_9] [i_8])))))));
                    arr_33 [i_7] = (arr_25 [i_7] [i_7]);
                }
            }
        }
    }
    #pragma endscop
}
