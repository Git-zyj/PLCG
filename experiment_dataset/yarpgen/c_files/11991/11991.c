/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (~(((((12946200309679127598 ? 123 : 5265000169204471199))) ? (var_6 ^ var_10) : ((((arr_3 [i_0]) ? (arr_4 [i_1] [i_1] [i_1]) : 28349))))));
                var_13 = (min(var_13, var_1));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_14 = ((~(~var_9)));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_15 = var_0;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_16 = ((var_8 / (((28348 % (arr_14 [i_2] [i_2] [i_6 - 1] [i_3 - 1] [i_4] [i_5]))))));
                                arr_19 [i_2] [i_6] [i_4] [i_5] [i_5] [i_6 - 1] = 28348;
                            }
                        }
                    }
                    var_17 -= ((!(1 | 5500543764030424017)));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_22 [i_7] |= (((((29 ? var_10 : 8))) ? (max(var_7, 12946200309679127599)) : var_4));
        var_18 = (5265000169204471195 == -var_9);
        var_19 = (max(var_19, 12946200309679127598));
        arr_23 [i_7] = ((var_7 ? (arr_18 [i_7]) : (((var_6 + 2147483647) >> (((arr_7 [i_7]) + 1934))))));

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_20 = (var_11 % var_7);
            arr_27 [i_7] [i_8] = var_9;
        }
    }
    #pragma endscop
}
