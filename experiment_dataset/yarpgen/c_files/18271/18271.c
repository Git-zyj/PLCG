/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = (102 || (arr_8 [i_1 + 1] [i_1 + 1]));
                                var_15 = (min(var_15, (((((var_9 ? var_1 : var_10)) << (var_3 - 173))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_16 |= -88;
                                arr_21 [i_1 + 3] [i_2] [i_5] = ((26421 - (arr_11 [i_2 - 2] [i_2 - 2] [i_6] [i_6] [i_2 - 2])));
                            }
                        }
                    }
                }
            }
        }
        arr_22 [i_0] = (arr_17 [i_0] [14]);
        var_17 = (((arr_20 [i_0] [i_0 - 2] [i_0 - 3] [i_0] [1] [i_0] [i_0]) % (arr_20 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 1] [i_0])));
        arr_23 [i_0] = 1088629382;
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_18 = (min(var_18, ((((arr_25 [i_7] [i_7]) ? var_11 : -23106)))));
        var_19 ^= (arr_25 [13] [7]);
    }
    #pragma endscop
}
