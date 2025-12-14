/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = var_12;
                                arr_14 [i_0] [i_4] [1] [i_0] [i_4] = (arr_13 [13] [i_1 + 1] [i_2] [i_1 + 1] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_14 = (!1698061325);
                                var_15 = (!var_9);
                                var_16 *= var_6;
                                var_17 = (((arr_8 [i_0] [i_1 - 1] [i_2] [11] [7]) > var_11));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_18 = (max(var_18, (arr_19 [1] [i_1 - 3])));
                        var_19 += (arr_19 [i_1 - 3] [i_1 - 1]);
                        var_20 = ((((max(14, 14))) ? var_4 : (17078210539108164696 + 1698061325)));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_21 = ((-(arr_10 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_2] [i_1])));
                        var_22 *= (arr_19 [i_1 - 3] [i_1 - 3]);
                    }
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        var_23 = 1698061325;
                        var_24 = (arr_6 [1] [i_1 - 2]);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            {
                arr_33 [i_10] = arr_29 [i_10];
                var_25 |= ((((((arr_32 [i_11] [i_10]) / (arr_28 [i_10])))) ? var_11 : var_4));
            }
        }
    }
    var_26 -= (~1368533534601386920);
    #pragma endscop
}
