/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((var_11 ? (var_7 == 1) : 185));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = ((~((var_7 ? 31 : var_5))));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] = 0;
                                arr_16 [i_0] = ((var_0 ? -var_1 : (var_0 & var_8)));
                                var_13 = -1;
                                var_14 = (1 == var_6);
                            }
                        }
                    }
                }

                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_15 = (~-8594690493307147044);
                                arr_24 [i_0] [i_0] [i_5] = ((50 ? (-2147483647 - 1) : var_10));
                            }
                        }
                    }
                    var_16 = -193;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_17 = ((~((var_2 ^ (~var_6)))));
                                var_18 = 2781653347;
                                var_19 = ((70 ? -123 : var_3));
                                arr_33 [i_0] [i_8] [i_9] [i_9] [i_0] = (((~var_2) & var_9));
                                var_20 = var_11;
                            }
                        }
                    }
                    arr_34 [i_0] [i_0] [i_0] [i_8] = var_10;
                    var_21 = (!0);
                }
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    arr_37 [i_0] [i_0] [4] [i_0] = (((var_1 ? ((var_11 ? 676895867087779495 : 255)) : (var_5 < var_6))));
                    var_22 = (((!(((var_2 ? 247 : var_10))))));
                }
            }
        }
    }
    var_23 = ((((33554431 >> (var_5 - 749592626)))));
    var_24 = var_8;
    var_25 = (var_8 / -85);
    #pragma endscop
}
