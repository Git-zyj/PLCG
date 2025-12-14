/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_6, var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_12 = (min(var_12, (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
            var_13 &= var_7;
        }

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_14 = var_7;
            var_15 = var_0;
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_16 &= ((-((min(554, 64981)))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_17 = min(11333932049998249974, var_5);
                    var_18 = var_1;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_19 = min(-11333932049998249971, ((((arr_18 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]) < ((min(var_2, (arr_13 [i_5] [i_5] [i_7]))))))));
                                arr_23 [i_7] [i_3] [0] [i_7] &= ((max(var_6, (arr_16 [i_4 - 1] [15] [i_4 + 1]))));
                                var_20 = (min(var_20, var_4));
                            }
                        }
                    }
                    arr_24 [0] [i_5] [i_5] [14] = ((-1 ? ((-555 ? (((var_9 ? var_3 : var_0))) : -var_7)) : ((var_6 ? (var_5 - var_6) : var_8))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_21 -= var_10;
        var_22 = (arr_11 [i_8] [i_8]);
        arr_27 [i_8] [i_8] = (min(((((arr_25 [i_8]) ? (arr_25 [i_8]) : var_8))), (arr_14 [i_8] [i_8])));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 19;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_23 *= (max((arr_16 [i_12 + 1] [i_10] [i_10 + 1]), (((arr_16 [i_12 + 2] [i_12] [i_10 + 1]) * var_10))));
                                var_24 = min((max((arr_18 [i_12] [i_11] [i_10 + 1] [i_9]), (arr_18 [i_8] [i_9] [i_8] [i_11]))), (max((arr_10 [i_8]), 7112812023711301644)));
                                var_25 += -1551904636;
                                var_26 = (((arr_22 [18] [i_10] [12] [i_10 + 2] [i_10 - 2] [i_12 + 2]) ? (arr_20 [i_12] [i_8] [i_8] [10]) : (((+((var_10 ? (arr_9 [i_9]) : 1048575)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            {
                                var_27 = (min(var_27, 288230376084602880));
                                var_28 = (17836539970385564283 < var_1);
                            }
                        }
                    }
                    var_29 = (min(var_29, (((min(64102, var_10))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 10;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            {
                var_30 |= (((((var_5 ? var_9 : var_0))) ? var_8 : 174));
                var_31 = (max(var_31, ((max(2397981033, 1)))));
            }
        }
    }
    #pragma endscop
}
