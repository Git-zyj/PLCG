/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = (min(var_10, (((var_6 > ((~(527015836 / 3866961066937392928))))))));
        var_11 = (max(var_11, (~-3822712822572571191)));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = 722582964950894134;
            arr_7 [i_1] [i_0] = var_6;
        }
        arr_8 [10] [i_0] = (((~443809883) ^ -18));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [5] [i_4] [i_5] [i_6] = 527015836;
                                arr_23 [i_2 + 2] [i_2] [i_5] [i_2] [i_2] = (-100 >= 113);
                                var_12 = ((-(min(var_5, 8472553150880157317))));
                            }
                        }
                    }
                }
                arr_24 [i_3] = 255;
                arr_25 [0] = 255;
                arr_26 [i_2 + 1] [i_2 + 1] = (var_7 <= var_2);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            {
                arr_32 [i_7] = var_7;
                arr_33 [i_7] [i_8] = (((var_9 >= 1) ? 3857780160 : 4457381538043499429));
            }
        }
    }
    #pragma endscop
}
