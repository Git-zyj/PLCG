/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((((var_9 != (max((arr_2 [i_1]), var_1)))) && ((((arr_6 [i_2] [7] [i_0] [i_0]) ? (arr_6 [i_2] [i_1] [i_1] [i_0]) : 32767)))));
                    var_16 = (((((max(var_9, (arr_3 [i_0]))) & (682071187 / var_8))) & (arr_7 [i_0] [i_2] [i_1] [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_20 [i_5] [i_5] [i_6] [i_6] [9] [i_3 - 1] = (((~(var_9 * 0))) * (!var_1));
                            arr_21 [i_3] [i_6] [i_6] [i_3] = -var_5;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_17 = ((!((max((arr_9 [i_9 - 1] [i_4 + 2]), (arr_23 [i_7 - 3]))))));
                                arr_33 [i_9] [3] [i_3] [i_3] = (((var_2 ^ ((var_10 * (arr_25 [i_9] [i_8 + 1] [i_3 + 1]))))) * (((var_13 != var_13) ? ((max((arr_28 [i_4] [i_4] [i_4]), var_8))) : (var_15 / 1587951326))));
                                arr_34 [i_9] [i_8] [i_7] [i_4 - 1] [3] = (max((((arr_18 [i_9] [i_8] [i_7] [i_3 - 2] [i_4] [i_3 - 2]) ? (((65 << (((var_3 + 1807766573962575191) - 3))))) : (min((arr_13 [i_7]), (arr_10 [i_7] [i_4]))))), ((((~var_12) ? (var_14 & 5127770222176493830) : (1587951334 % 2924893635649547810))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
