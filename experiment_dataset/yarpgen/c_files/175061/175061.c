/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 -= var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 ^= (arr_1 [i_0]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_2] [8] [i_0] = (arr_8 [i_0] [i_1] [i_2]);

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_20 = (arr_7 [i_0] [i_0]);

                        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_2] [i_1] [i_4] = (arr_13 [i_0] [i_0] [i_2] [i_0] [i_0]);
                            var_21 = (arr_8 [i_0] [i_1] [i_3]);
                            var_22 = (min(var_22, (arr_11 [i_0] [7] [i_3] [i_3])));
                            var_23 = (arr_7 [i_0] [i_0]);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_24 = (arr_19 [11] [0] [11] [i_3] [i_5]);
                            var_25 -= (arr_1 [i_1]);
                            var_26 ^= (arr_6 [i_0] [i_1] [i_0] [i_1]);
                            var_27 = (min(var_27, (arr_16 [i_0] [i_3])));
                        }
                        arr_21 [i_3] [i_0] = (arr_10 [i_0] [11] [i_0] [i_0]);
                    }
                    arr_22 [i_0] [3] [3] = (arr_14 [i_0] [i_0] [2] [i_1] [i_0]);
                }
                arr_23 [i_0] [i_0] [i_0] = (arr_18 [5] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
