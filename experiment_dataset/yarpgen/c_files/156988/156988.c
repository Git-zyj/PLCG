/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = -5241;

                for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_14 = (min(var_14, var_8));
                    var_15 = (min(var_15, ((min((var_1 == 2699175212273387458), ((-((18146548468731808524 ? 300195604977743092 : 0)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_3] [i_2] [i_4] = 10330;
                                var_16 = var_8;
                                var_17 = (min(var_17, var_6));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_2] [16] = (arr_9 [i_2 - 1] [i_2] [i_2 - 1] [i_2]);
                                var_18 = (((((((var_2 ? var_1 : var_5))) || 0)) && var_9));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        arr_23 [i_5] = (!var_2);
                        var_19 -= (var_0 ? (arr_10 [i_0] [i_6 + 1] [i_6] [i_6] [i_6] [i_0]) : (arr_10 [3] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6]));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_1 - 2] [i_5] [i_7] [i_0] = var_6;
                        var_20 = -10330;
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        var_21 = (!var_5);
                        var_22 = ((~(~var_2)));
                        arr_31 [i_0] [i_0] [i_5] [i_0] [i_8] = 255;
                        var_23 = var_2;
                        var_24 = (max(var_24, (var_1 + var_3)));
                    }
                    var_25 = ((~(((arr_16 [i_1] [i_1 + 1] [i_1] [i_1 + 1]) >> (var_5 - 22494)))));
                }
                var_26 *= (!-var_3);
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_27 = (-(((arr_10 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1]) ? 7 : var_4)));
                                arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = ((!((((var_9 | var_4) ? var_3 : (((arr_29 [i_0] [i_0] [i_1 + 2] [i_9] [i_0] [i_11]) & var_7)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 19;i_13 += 1)
        {
            {
                var_28 = (min(var_28, 192));
                var_29 = 255;
            }
        }
    }
    var_30 = var_3;
    #pragma endscop
}
