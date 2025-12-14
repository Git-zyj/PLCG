/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = var_1;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 += (((arr_10 [i_4 + 1] [7] [i_4 - 1] [8] [2]) ? (arr_11 [i_4 - 1] [2] [i_4 - 1] [4] [20]) : (arr_11 [i_4 - 1] [23] [i_4 + 1] [9] [9])));
                                var_14 = (max(var_14, (((-((((arr_1 [10]) && (arr_4 [5] [15])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_15 = ((-(65473 > var_4)));
                                var_16 = (4509655322016964182 > 8);
                                arr_22 [i_5] [18] = (arr_6 [16] [19] [7]);
                            }
                        }
                    }
                    var_17 = (arr_3 [i_0] [1]);
                }
                var_18 *= ((((!((max((arr_11 [3] [20] [4] [20] [23]), var_10))))) ? (((arr_7 [12]) ? (((arr_18 [16]) ? (arr_5 [19] [14] [22] [2]) : var_10)) : (max((arr_19 [19] [18] [6] [2]), (arr_2 [10]))))) : (((arr_19 [15] [8] [17] [10]) ? ((var_10 ? (arr_16 [12] [9] [9] [23] [3] [22]) : 13736771755837676655)) : (arr_10 [20] [i_1] [20] [0] [2])))));
            }
        }
    }
    var_19 = (max(var_10, 4509655322016964182));
    #pragma endscop
}
