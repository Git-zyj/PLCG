/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_10);
    var_14 |= ((((3202220640 ? -8418263941100280908 : 256))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (max(var_15, ((((!var_4) ? var_0 : -var_5)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = ((var_1 ? var_6 : var_3));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_9 [i_0] |= var_6;
                        var_17 -= (~var_3);
                        arr_10 [i_3] [i_1 - 2] [i_0] &= -4123887789;
                    }
                    arr_11 [i_2] |= var_8;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_18 *= var_1;
                                var_19 *= ((var_5 ? var_4 : var_5));
                                var_20 = (max(var_20, (((7952671976683780115 ? var_9 : var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_21 |= var_0;
        var_22 += (((var_10 ? var_4 : var_3)));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_23 |= var_0;
        var_24 &= (min(-var_10, var_7));
    }
    var_25 = var_4;
    #pragma endscop
}
