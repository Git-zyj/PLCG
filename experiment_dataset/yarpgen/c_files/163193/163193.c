/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = var_17;
        var_18 = (min(var_18, var_0));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_19 = (((var_6 / var_14) - (((arr_8 [i_3] [i_4]) ? var_10 : (arr_4 [i_2] [i_3] [i_4])))));
                            var_20 = (min(var_20, ((((((-3126587582479192565 ? var_4 : var_15))) ? 3126587582479192565 : (var_17 & 372479653))))));
                            var_21 += (!var_6);
                        }
                        for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_22 &= ((var_7 | (arr_5 [i_1] [i_1])));
                            arr_17 [i_0 + 3] [i_1] [i_2] [i_5] = (((-1 / var_0) >= ((var_7 ? var_17 : (arr_10 [i_0 + 3] [i_1] [i_0 + 3] [i_3])))));
                        }
                        for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_23 = (((arr_9 [i_0 + 2] [i_1] [i_1] [i_3] [i_6]) % ((var_12 ? var_2 : (arr_16 [i_1] [i_3] [i_6])))));
                            arr_20 [i_3 - 1] [i_3 - 1] [i_2] [i_0] [i_0] = (arr_9 [i_6] [i_3] [i_2] [i_1] [i_0]);
                            var_24 = (max(var_24, (arr_9 [i_0] [i_2 - 1] [21] [i_2] [i_3 + 2])));
                        }
                        for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_25 &= (~3126587582479192565);
                            arr_23 [i_0 - 2] [i_1] [i_2] [i_2] [i_3] [i_7] = 372479653;
                            var_26 = (arr_14 [i_7 - 2] [i_2 + 1] [i_2 + 1] [i_3] [i_7] [i_7]);
                        }
                        var_27 = (((((arr_1 [i_0 + 3]) + 2147483647)) << ((((~(arr_7 [i_0]))) - 77))));
                        var_28 = (arr_16 [i_3 - 2] [i_1] [i_0 - 2]);
                        var_29 += (var_8 / 49362);
                    }
                }
            }
        }
    }
    var_30 = 16143;
    #pragma endscop
}
