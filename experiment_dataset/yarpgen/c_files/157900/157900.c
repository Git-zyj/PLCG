/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 = var_7;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_20 = (max(var_20, (!30635)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_1 - 1] [i_2] [12] [6] [i_4] &= ((-(arr_3 [i_3])));
                                arr_13 [i_0] = (12322 - 11);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_21 = (arr_17 [2] [i_1]);
                                var_22 = 30635;
                                var_23 = var_4;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_24 = var_1;
                                arr_26 [i_2 - 3] [i_2 - 1] [i_2] [i_2] [i_0] = (!2031616);
                            }
                        }
                    }
                    arr_27 [i_0] [i_1] [i_1] [i_0] = ((~(arr_14 [i_0] [i_1] [i_2] [i_0] [i_1 + 3] [i_0])));
                    arr_28 [14] [i_1] [14] &= (arr_14 [i_0] [i_0] [i_1 - 3] [i_1] [i_0] [8]);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_25 ^= -710261482;

        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            arr_34 [i_9] [i_10] [i_10] = (((!(arr_5 [i_9] [i_10]))) ? ((var_9 >> (var_16 + 30570))) : (!var_5));
            var_26 = (max(((~(arr_2 [i_9] [i_9]))), var_10));
            var_27 = (max(var_27, var_10));
        }
    }
    for (int i_11 = 1; i_11 < 21;i_11 += 1)
    {
        arr_37 [i_11] = (-32767 - 1);
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                {

                    for (int i_14 = 1; i_14 < 20;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            arr_49 [i_15] [i_14 - 1] [i_13] [i_12] [6] = (((0 ? 4294967280 : 2217314400)));
                            arr_50 [i_11 - 1] [i_12] [i_11 - 1] [i_13 - 1] [0] [i_14] = (arr_46 [i_14]);
                            var_28 = (max(var_28, (arr_35 [i_11] [i_11])));
                            arr_51 [i_11] [i_12] [i_13] [20] [i_14] = (min(((~(arr_44 [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13] [i_13 + 1] [i_13]))), ((((!71) ? (-2147483647 - 1) : 51826)))));
                        }
                        arr_52 [i_13] [i_13] [15] [i_13] = (~32485);
                    }
                    arr_53 [i_11] [i_12] [i_11] = 65523;
                    var_29 = (max(var_29, (arr_44 [i_13] [i_13] [i_12] [i_12] [19] [i_11])));
                }
            }
        }
    }
    #pragma endscop
}
