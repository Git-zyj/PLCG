/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_2 + -0);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_21 = (13733831158848213627 / var_15);
                        var_22 = ((((-((var_18 / (arr_7 [i_2] [i_2]))))) << (((~var_11) - 6143491656902176672))));
                    }
                }
            }
        }
        arr_9 [i_0] = -34;
        var_23 = (max(var_2, (((arr_5 [i_0] [i_0] [i_0]) * 3457019015))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    {
                        var_24 = ((+(((((arr_2 [i_5] [i_5]) << (var_1 - 60)))))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_20 [i_0] [i_0] = ((-(~var_11)));
                            var_25 = (33 - -4063566522203351161);
                        }
                        arr_21 [i_0] [i_4] [12] = ((!((!(arr_13 [i_6 - 1] [i_6] [i_6 + 1] [i_6])))));
                        var_26 = (((((min(((-(arr_1 [i_4]))), (var_16 / var_13))) + 2147483647)) << (((max(3087442050914968184, (min(3087442050914968181, (arr_18 [10]))))) - 3087442050914968184))));
                        var_27 = ((~((var_0 >> (37 || 15440546154995694689)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_24 [i_8] = var_17;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_28 = -47;
                    var_29 = var_17;
                }
            }
        }
        arr_29 [i_8] = -var_5;
        arr_30 [i_8] = (((arr_17 [i_8] [i_8] [i_8] [5] [i_8] [5] [i_8]) - -757988429));
        arr_31 [i_8] = (((-37 < 3477594515290371924) > 616269481));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        arr_34 [i_11] = (~2785734310);
        var_30 = (((((((~(arr_0 [i_11] [i_11])))))) * (max((2765503694 / 10946749563061203714), -3375608770590185866))));
        arr_35 [i_11] = (((2518522155325695270 % var_6) | var_6));
    }
    #pragma endscop
}
