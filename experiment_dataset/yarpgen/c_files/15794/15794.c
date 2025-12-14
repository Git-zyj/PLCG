/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((max((max(var_13, 4027362993)), 0)), (((((var_1 ? var_4 : 65535)) >= ((var_4 << (var_16 - 52878))))))));
    var_19 = 0;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (arr_1 [i_0 + 1]);
                    var_21 = ((var_13 ? 3640 : var_17));
                    arr_6 [15] [15] = ((~(arr_2 [i_0 - 2] [i_2] [i_2 + 1])));
                    var_22 = var_16;
                }
            }
        }
        var_23 = var_9;
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_24 &= 267604289;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_19 [i_3] [i_3] [i_5] [i_5] [i_7] [i_7] [i_3] = 65508;
                                var_25 = 14;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
