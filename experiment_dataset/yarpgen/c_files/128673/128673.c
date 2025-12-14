/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, (((arr_3 [i_2] [i_0]) ^ var_8))));
                    arr_8 [i_1] [i_1] = ((max(2147483640, (min(var_1, var_3)))));
                    var_11 += 21109;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_2] [i_1] = (min(((var_8 ? (((arr_1 [i_3]) / -1)) : 26181)), var_7));
                        var_12 -= (min(((var_3 ? (min(var_5, var_9)) : (var_7 * 21103))), (-2147483640 ^ var_4)));
                        var_13 = var_9;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_14 = (max(var_14, (var_1 | var_7)));
                            var_15 = (max(var_15, (((~(44432 <= var_0))))));
                            var_16 *= (max(16128, 21087));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_17 += var_4;
                            var_18 = var_9;
                            arr_18 [i_1] [i_1] = var_2;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_19 = (max((arr_5 [i_0] [i_1] [i_1] [i_6]), var_5));
                            var_20 = ((((((~(arr_13 [i_0] [i_0] [i_0])))) ? ((min(var_6, var_3))) : (min(var_8, (arr_0 [i_1]))))));
                            var_21 = (((((((var_0 ? var_9 : 2147483642)) / ((var_8 ? var_1 : var_9))))) ? ((var_0 / ((28653 ? 8188 : 29031)))) : var_2));
                            var_22 = (min(var_22, ((min((arr_19 [14]), (arr_19 [11]))))));
                            var_23 = (max(((((var_4 ? var_5 : var_3)) - 36882)), ((min((var_0 || var_8), (2147483621 == var_3))))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [2] [i_1] [i_1] [7] = 44405;
                            arr_27 [i_0] [i_0] [i_0] [i_0] [6] [i_3] [i_0] |= var_7;
                            var_24 = ((~((((var_6 ? 44458 : 2147483640)) ^ var_7))));
                            var_25 = (((-33 | (var_9 ^ var_8))));
                        }
                        var_26 = (min(((32 | (arr_20 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] [i_3]))), (min(-297284210, var_4))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_27 = (!var_3);
                        var_28 = ((var_0 / (arr_13 [i_0] [i_1] [i_2])));
                    }
                }
            }
        }
    }
    var_29 = (-25938 | 3118663031420973834);
    #pragma endscop
}
