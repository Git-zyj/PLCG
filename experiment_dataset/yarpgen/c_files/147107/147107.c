/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 56;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((!var_7) != (!var_8))) ? ((-var_0 ? (~var_0) : ((6 ? var_9 : var_2)))) : ((var_7 ? var_8 : var_5))));
        var_12 = var_5;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1] = 1;
            var_13 = ((-((((var_4 && 1) != (1 - 1))))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_15 [14] [14] [i_3] [i_3] = ((1 * (-var_5 * var_10)));
                        arr_16 [i_3] [i_3] [i_3 - 1] [i_2] [i_3] [i_0] = ((((((1 ? -18 : -77)) + -124)) != (((22 ? var_3 : var_5)))));
                        arr_17 [i_0] [i_3] [i_3] [i_4] = (1 / var_1);
                        arr_18 [i_3] = var_7;
                        arr_19 [i_3] [i_3] = (!1);
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_14 = (!1);
                        arr_22 [i_0] [i_0] [1] [i_3] = 56477;
                        arr_23 [i_0] [17] [i_0] [i_3] [i_3] = 1;
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_2] [i_3] [i_3] [i_6] = var_3;

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_15 = var_4;
                            arr_30 [i_0] [5] [i_3] [17] = ((!(-var_7 >= var_10)));
                        }
                        var_16 = (~var_3);
                        arr_31 [i_0] [i_0] [i_3] [i_0] [i_3] [i_0] = (((~var_8) ? 15360 : ((-var_2 ? (var_3 / var_0) : (42713 != 50367)))));
                        arr_32 [i_6] [i_3 - 1] [i_3] [i_0] [1] = ((((((var_0 ? 9047 : var_1)))) ? var_8 : 1));
                    }
                }
            }
        }
    }
    #pragma endscop
}
