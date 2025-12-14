/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = 1;
        arr_2 [i_0] = var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        var_15 = (var_8 - 6797824758445766352);
                        var_16 = var_7;
                        arr_14 [i_3] [i_2] [i_3] [i_2] = (arr_12 [i_3] [i_4] [i_4] [i_4 + 1]);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_17 = 56;
                                arr_19 [i_3] [i_2] [i_1] [i_5 + 2] [i_6] [i_5] = ((!(arr_3 [i_5 + 2] [i_6 - 2])));
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_1] [i_1] = (((2441237999 >> (3280357655 - 3280357625))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    var_18 = ((~(arr_6 [3] [i_7])));
                    arr_28 [i_1] [i_8] [i_1] = (((arr_5 [i_1]) ? (75938739 < 1855487795) : -105));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    var_19 *= ((!(var_13 % var_11)));
                    arr_33 [i_10] = (arr_12 [i_1] [2] [2] [10]);
                    var_20 = ((((((!(arr_29 [i_1] [i_1]))))) & (arr_3 [i_10] [i_10])));
                    var_21 = 1525238900;
                    var_22 = 97;
                }
            }
        }
    }
    var_23 = (((2786049523 | var_1) ? (min(var_3, ((var_3 ? var_7 : var_3)))) : var_3));
    #pragma endscop
}
