/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(!var_15)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = ((+((var_13 ? (!var_8) : ((var_2 ? var_9 : var_11))))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_17 *= ((~(~var_14)));
                        var_18 = (max(var_18, (((+(((~var_2) ? ((var_9 ? var_0 : var_6)) : var_13)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_19 = (min(var_19, var_12));
                        arr_12 [13] [13] [i_0] [i_4] [i_0] |= (!var_1);
                    }
                    arr_13 [i_0 + 1] [i_1] [i_2] = (((-((var_9 ? var_12 : var_8)))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_17 [i_5] [i_0 - 1] &= (((((var_6 ? var_15 : var_8))) ? (~var_10) : var_1));
                        arr_18 [i_1] [16] [i_0] [i_1] [i_1] [i_0] = (((((var_5 ? var_14 : var_10))) ? (!var_3) : -var_0));
                        var_20 = ((-(~var_0)));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_21 = var_15;
                        var_22 = (~-var_11);
                    }
                }
            }
        }
    }
    #pragma endscop
}
