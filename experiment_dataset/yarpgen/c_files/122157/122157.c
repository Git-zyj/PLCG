/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [6] = var_9;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_14 = var_0;

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_16 [i_4] [i_1] [i_4] [i_1] = (var_3 % var_13);
                            var_15 = (min(var_15, ((((255 < 1) ? ((1 ? var_6 : var_10)) : ((((arr_7 [i_0]) ? -783294251 : var_3))))))));
                            var_16 = (((arr_0 [i_2]) ? 71 : (((arr_6 [i_0] [i_0] [i_2]) ? var_7 : var_6))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_17 = (min(var_17, (((var_9 ? (arr_1 [i_2] [i_1]) : 16681348225730494024)))));
                            arr_21 [i_5] [4] [4] = ((var_13 && var_8) ? 69 : ((246 % (arr_2 [i_0]))));
                            arr_22 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5] [i_6] = (~31589);
                            var_18 |= ((var_10 == (arr_12 [i_0] [i_1] [i_1] [6])));
                            arr_23 [i_0] [i_1] [i_1] [i_5] [i_6] [i_5] = -31082;
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_19 ^= (arr_4 [i_1] [6]);
                            arr_27 [i_0] [i_5] [i_2] [6] = ((~(arr_6 [i_1] [i_2] [i_1])));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_8] [i_5] [i_5] [i_0] [i_5] [i_0] [i_0] = (((((arr_20 [i_5] [i_1] [i_1] [i_1] [i_8]) + 2147483647)) >> ((((var_2 ? -31082 : 20220)) + 31097))));
                            arr_31 [i_5] [i_0] [i_0] [i_0] [i_5] = ((var_3 ^ (((~(arr_7 [i_5]))))));
                        }
                        var_20 |= -31611;
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        var_21 ^= ((1 > (arr_7 [i_0])));
                        arr_35 [i_0] [i_2] [i_2] [i_9] [i_0] [4] |= ((31080 << (59 - 53)));
                        var_22 = (min(var_22, (~2418069680)));
                        arr_36 [i_9] [i_1] [i_2] [i_9] [i_9] = var_3;
                    }
                    arr_37 [i_0] = (((arr_7 [i_0]) >> (((arr_0 [i_1]) - 2440893808788142498))));
                }
            }
        }
        var_23 = (min(var_23, 246));
    }
    var_24 = var_12;
    #pragma endscop
}
