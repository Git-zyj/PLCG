/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = ((-(arr_0 [i_0])));
        arr_2 [i_0] |= 67108863;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = ((~(~15362312402518203934)));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_15 = 0;
                        var_16 ^= ((-((-(arr_0 [i_1])))));
                    }
                    var_17 += (~1);
                    arr_11 [i_0] [i_0] [i_1] &= (!9658408014655086977);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_4] [i_5] = (arr_1 [i_2]);
                                var_18 *= (!var_9);
                                arr_20 [i_0] [i_2] [i_2] [i_2] [i_4] [i_4] [i_5] = var_10;
                                var_19 = (min(var_19, var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_20 ^= (!0);
                    arr_29 [i_6] = ((-(((!(arr_26 [i_8] [i_7]))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_21 |= (!-1091332668);
                                arr_36 [7] [i_7] [7] [7] [i_9] [i_6] [i_10] = ((-(!-2419581596)));
                                var_22 = (min(var_22, (((!(!5850169540222424937))))));
                                var_23 = (!-var_4);
                                var_24 = (((~((~(arr_28 [9]))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    var_25 = (max(var_25, (((!(((-(arr_37 [i_6] [i_12])))))))));
                    var_26 &= (~-15354463540577667042);
                }
            }
        }
        var_27 = (~-1875385700);
    }
    var_28 = var_9;
    #pragma endscop
}
