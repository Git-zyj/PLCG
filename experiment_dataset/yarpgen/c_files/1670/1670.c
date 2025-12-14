/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 += (max((((var_15 != var_9) ? var_8 : (min((arr_1 [i_0]), 33292288)))), (((+(((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        arr_3 [i_0] = (~-33292288);
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_18 = ((~((~(arr_1 [i_1])))));
        arr_6 [i_1] [i_1] = ((+(((arr_0 [i_1]) << (33292288 - 33292287)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_19 = (arr_0 [i_1 + 1]);

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_2] [i_3] [i_1] = var_2;
                        var_20 *= (arr_1 [i_3]);

                        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] [i_1] [i_2] [i_1] [i_1] |= var_16;
                            arr_18 [i_2] &= ((((((arr_5 [i_2]) ? (arr_16 [i_1] [i_3]) : var_13))) ? var_15 : (arr_12 [i_1 + 1])));
                            var_21 += ((~(arr_2 [i_1 - 1])));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_22 = (max(var_22, ((((arr_15 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1]) ? (!var_2) : (arr_19 [i_1] [i_1] [i_1]))))));
                            var_23 *= (((arr_4 [i_2]) ? (arr_2 [i_1 - 1]) : var_7));
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (-(arr_9 [i_1 + 1] [i_2] [i_6 - 1]));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_24 = var_10;
                                var_25 = (!(arr_13 [i_1] [i_2] [i_7] [i_8]));
                                var_26 = (min(var_26, ((((var_8 & 3208276544565688953) * (arr_2 [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        arr_32 [i_9] [i_9] = var_2;
        var_27 = var_5;
    }
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        arr_36 [i_10] = var_1;
        arr_37 [i_10] = (max(1856779075, (((4623148644737701142 ? var_11 : var_1)))));
        var_28 = (max(var_28, (((((9223372036854775807 / (arr_2 [i_10]))) / ((((62050 ? 4261675007 : 33292288)))))))));
        arr_38 [i_10] = 3942348745806770079;
    }
    var_29 = -4623148644737701153;
    #pragma endscop
}
