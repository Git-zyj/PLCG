/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 |= ((~(min((arr_0 [i_0]), (min(-16705, 12534599721003980239))))));
        var_20 = (max(((((4665257296713850903 ? (arr_0 [i_0]) : 4665257296713850903)) & (23253 % -9180))), ((((((var_11 ? var_13 : 0))) ? (~17749) : 41864)))));
        var_21 = (min(var_21, (((-(((!23664) ? -16384 : 4665257296713850919)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_2] = arr_2 [i_0];
                    var_22 ^= (~-16383);
                    var_23 ^= 16382;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_24 = (max(var_24, (((~(((arr_4 [i_3] [i_3] [i_3]) ? (arr_0 [i_3]) : -24018)))))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_16 [16] [i_3] [i_4 + 2] [i_4] [i_3] [i_3] = (((arr_4 [i_4 + 1] [i_4 + 1] [i_4 + 2]) <= var_8));
                        arr_17 [i_3] [i_3] [i_5] [i_3] [i_5] [i_3] = (arr_8 [i_5]);
                        var_25 = (max(var_25, var_13));
                    }
                }
            }
        }
        var_26 = (max(var_26, (arr_4 [i_3] [i_3] [i_3])));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        var_27 = var_18;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_30 [i_7] [i_11] [i_10] [i_10] [i_10] [i_10] = ((!((!(arr_2 [i_9])))));
                                var_28 = (arr_15 [i_7] [i_8] [i_7] [i_10 - 3] [i_11]);
                            }
                        }
                    }
                    arr_31 [i_7 + 1] [i_8] [i_9] = (((110 / (arr_26 [i_7] [i_8] [i_8] [i_9] [i_9]))));
                    var_29 = (arr_19 [i_7] [i_9]);
                    var_30 ^= ((30366 ? 8738 : -1));

                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        var_31 = 25977;
                        var_32 = (((arr_9 [i_7 - 2] [i_7 - 2] [19]) ^ (arr_27 [i_9])));
                    }
                    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        var_33 ^= (arr_0 [i_7]);
                        var_34 = ((((-(arr_8 [i_7])))) ? (((1 * (arr_13 [i_7 - 1])))) : (arr_9 [i_7] [i_8] [i_13]));
                    }
                    for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
                    {
                        var_35 ^= (arr_22 [i_7 + 1] [7]);
                        var_36 = ((-4665257296713850919 ? 1 : var_12));
                    }
                }
            }
        }
        var_37 = (arr_9 [i_7 - 2] [i_7 - 1] [i_7]);
        var_38 = (arr_4 [i_7 + 3] [i_7] [i_7]);
    }
    var_39 |= var_6;
    var_40 = 8537167270834195782;
    #pragma endscop
}
