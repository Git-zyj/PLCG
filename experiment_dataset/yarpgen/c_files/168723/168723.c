/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_4;
    var_11 = (min(var_11, ((max(14312, 8)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 &= ((var_6 ? var_6 : var_4));
                    var_13 = (~5500);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = var_3;
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3 - 1] [i_1] = -var_3;
                                var_15 = (~var_9);
                            }
                        }
                    }
                }
            }
        }
        var_16 = var_6;
        var_17 *= (2198486384640 ? 97299472 : 9);
    }
    var_18 = var_1;
    #pragma endscop
}
