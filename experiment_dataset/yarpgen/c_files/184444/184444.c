/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (var_0 < (var_10 & var_7));
                    var_18 = var_16;
                    var_19 = (((var_16 != var_8) < var_16));
                }
            }
        }
        var_20 = (var_12 | var_5);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_10 [i_3] [i_3] = (((var_2 + var_8) + var_1));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_21 = var_15;
                    var_22 = (var_14 + var_12);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_23 = (var_15 & var_7);
                                var_24 = var_7;
                                var_25 = var_16;
                                arr_21 [i_3] [1] [7] [i_5] [3] [i_3] = (var_4 & var_9);
                            }
                        }
                    }
                }
            }
        }
        var_26 -= (var_12 <= var_9);
        var_27 = (min(var_27, ((((var_11 / var_4) ^ var_15)))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_28 = (min(var_28, (var_5 != var_2)));
        var_29 = (var_3 & var_12);
    }
    var_30 = (min(var_30, var_11));
    #pragma endscop
}
