/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] = -3164074891;
                    arr_11 [i_0] [12] = ((-18 > ((~(0 & 1)))));
                    var_18 = (((arr_0 [i_0] [i_0 + 1]) && -24841));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_19 = (arr_4 [i_1] [i_0]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_19 [14] [i_0] [i_2] [14] [i_0] [i_0] = (~0);
                            var_20 += 6639;
                        }
                    }
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        var_21 = (max(var_21, (arr_17 [18] [18] [i_2] [i_2] [i_5])));
                        arr_22 [i_0] [i_1] [i_2] [i_5] = ((+((((arr_16 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_2] [i_5]) <= (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_6] [i_0] [i_6] = (((((~(arr_12 [i_0] [i_1] [i_2] [1]))))));
                            var_22 = 3536388185;
                        }
                    }
                }
            }
        }
    }
    var_23 = var_3;
    var_24 = ((var_12 != (!-24841)));
    #pragma endscop
}
