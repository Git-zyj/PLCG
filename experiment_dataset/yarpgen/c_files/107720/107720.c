/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = ((~(((var_5 < var_2) >> (!var_4)))));
                    var_13 = (((!var_4) < var_3));
                    var_14 = min((max((max(var_5, var_7)), var_6)), var_11);
                }
            }
        }
    }
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_16 = var_5;
                            var_17 = (var_4 - var_0);
                            var_18 = (max(((-(var_10 && var_4))), ((max(var_1, (var_3 || var_3))))));
                        }
                    }
                }
                var_19 = (min(var_5, (var_11 != var_3)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_20 = var_3;
                            var_21 = ((var_8 * (var_0 * var_7)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_22 = (min(var_2, ((-(min(var_5, var_11))))));
                                var_23 = (min(((((max(var_6, var_10)) <= var_4))), var_11));
                                var_24 = (min(var_24, (((-((min(var_3, var_11))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            {
                                var_25 = (564103153 + 16);
                                var_26 = var_3;
                                var_27 = (max(var_27, (((-var_8 | (min(var_4, var_2)))))));
                                var_28 = (-9223372036854775790 || 330586885);
                                var_29 = (min((((max(var_1, var_3)))), (((var_10 && var_8) / var_6))));
                            }
                        }
                    }
                    var_30 = 2;
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 22;i_18 += 1)
                        {
                            {
                                var_31 = (min((max(var_11, var_7)), (var_3 | var_9)));
                                var_32 = 142989288169013248;
                            }
                        }
                    }
                    var_33 = (((var_6 | var_4) - ((max(228, -16218)))));
                    var_34 = ((~(var_5 != var_3)));
                }
            }
        }
    }
    var_35 = var_5;
    #pragma endscop
}
