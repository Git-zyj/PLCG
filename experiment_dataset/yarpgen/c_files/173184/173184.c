/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_1] [i_0] = (((arr_7 [i_0 + 1] [i_1 + 2]) ? (arr_7 [i_0 + 1] [i_1 - 1]) : (arr_9 [i_0 - 1] [i_1 + 2] [i_2 + 3] [i_2])));
                    var_13 = (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                }
            }
        }
        var_14 *= var_11;
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_15 = var_11;
        arr_13 [i_3] = (arr_12 [i_3]);
        var_16 += (max((max((115 - var_2), -119)), 7467564679005594995));
        arr_14 [i_3] = var_10;
        var_17 = ((-108 ? var_6 : 43637));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_18 *= ((~(((((arr_16 [i_4] [i_4]) <= var_12)) ? var_12 : ((-2018477822 ? var_9 : var_7))))));
        arr_17 [i_4] = (((var_5 * var_7) * ((var_9 ? (arr_12 [i_4 - 1]) : var_6))));
        arr_18 [i_4] = 100;
        arr_19 [i_4] = (~-24729);
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                {
                    var_19 = (((((59 && var_11) ? var_5 : (355455555 > 3875955854))) >= var_7));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_33 [i_5] [i_5] [i_7] [i_5] = 100;
                                var_20 = (min(var_20, (arr_1 [i_9] [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
