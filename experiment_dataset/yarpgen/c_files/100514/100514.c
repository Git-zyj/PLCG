/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_10 = ((!var_8) && (((-(!var_6)))));
                var_11 = min(var_2, -var_6);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_12 = (var_5 * var_4);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_13 += var_4;
                                var_14 = (var_0 != var_5);
                            }
                        }
                    }
                    var_15 = var_4;
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_16 += (!var_0);
                                var_17 *= var_4;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                {
                    var_18 = (var_0 ^ var_7);
                    var_19 = (max(var_19, (((var_1 ? var_5 : var_9)))));
                    var_20 = var_5;
                }
            }
        }
        var_21 = ((~(var_9 * var_3)));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            {
                var_22 += (max((((!(!var_0)))), (var_1 | var_9)));
                var_23 = (max((~var_2), ((-(max(var_6, var_0))))));
            }
        }
    }

    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        var_24 = var_2;
        var_25 = ((((var_2 >> (var_5 != var_7))) * (((!(var_9 && var_4))))));
        var_26 = (max(var_26, (var_1 & var_6)));
    }
    for (int i_14 = 2; i_14 < 21;i_14 += 1)
    {
        var_27 = (max(var_27, ((((~var_1) ? ((min(var_5, var_5))) : (~var_4))))));
        var_28 = ((!((((max(var_1, var_3)) ^ var_5)))));
        var_29 = ((((((var_7 ? var_4 : var_9)) + var_1)) + (((~var_0) % -var_7))));
    }
    #pragma endscop
}
