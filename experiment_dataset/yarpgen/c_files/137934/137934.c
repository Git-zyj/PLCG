/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 *= (((arr_1 [i_1]) ? (3154156534 || 1) : 78));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1 - 3] [14] [i_3] [i_2] [i_0] = (arr_3 [i_1 - 3]);
                                var_19 -= ((10259 % (((arr_6 [i_4] [i_1] [i_2] [1]) ^ 0))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] &= 5851;
                                var_20 = arr_0 [i_1] [i_1];
                                arr_22 [i_2] = (((arr_16 [i_1] [i_2] [i_1 + 2] [i_2]) ? 266338304 : (arr_17 [i_6] [i_5] [i_0] [i_0])));
                                var_21 = (arr_9 [i_1 - 3] [i_1] [i_2] [16]);
                                arr_23 [i_2] [9] [i_5] [i_2] [i_1] [i_0] [i_2] = (arr_14 [i_0] [i_1] [i_2] [i_5] [i_6]);
                            }
                        }
                    }
                    arr_24 [i_0] [i_0] [i_1] [i_2] = ((1350668523 ? (-3215286600647687213 / 19940) : var_14));
                    arr_25 [4] [14] [i_2] [i_2] = (arr_20 [i_0] [i_1] [i_2]);
                }
            }
        }
        var_22 = (max(var_22, (arr_4 [i_0] [i_0] [i_0])));
    }
    var_23 |= var_4;
    #pragma endscop
}
