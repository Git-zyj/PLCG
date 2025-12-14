/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = ((-(~var_3)));
        arr_2 [14] = (!(~var_14));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 = ((!(((~(-32767 - 1))))));
        arr_6 [i_1] = var_10;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [10] = -var_5;
                    var_22 = (~var_0);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_23 = (min(var_23, var_10));
                                var_24 = -var_18;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_25 += -var_5;
                                arr_33 [i_4] [i_5] [i_10] [i_9] [i_5] [i_5] [i_5] = (~var_17);
                            }
                        }
                    }
                    var_26 = (!var_13);
                }
            }
        }
        var_27 = (max(var_27, (!var_15)));
        arr_34 [i_4] = (~9273550688447120153);
    }
    var_28 = (!-var_9);
    #pragma endscop
}
