/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (((-((max(var_14, var_6))))));
    var_18 = var_12;
    var_19 = var_12;
    var_20 = var_16;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_21 = (min(((min(var_16, var_13))), (var_15 ^ var_9)));
        arr_3 [2] = ((!((var_10 && (var_14 * var_5)))));
        var_22 = (-var_16 ^ var_16);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [19] [17] [0] [7] [9] [1] = (max(var_10, (~var_13)));
                        arr_12 [1] [1] [1] = (((var_9 + var_2) ^ (var_15 < var_0)));
                        arr_13 [i_2] [1] = (((~var_8) * (((!(var_11 * var_5))))));
                        arr_14 [4] = ((var_7 && (max((var_15 && var_15), (!var_1)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = var_11;
        arr_19 [i_4] [17] = (var_15 + var_7);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_23 = var_6;

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_24 -= (var_14 + var_13);
                        arr_29 [i_6] [i_6] = ((~(~var_2)));
                        arr_30 [i_4] [i_6] [2] [i_4] = (((var_9 - var_4) / var_13));
                    }
                    arr_31 [22] [i_5] [i_6] = ((-var_2 >= (var_6 && var_11)));
                }
            }
        }
        var_25 = (var_3 * var_9);
    }
    #pragma endscop
}
