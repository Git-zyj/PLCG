/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_1, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (arr_3 [i_0]);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_15 = arr_5 [i_1] [i_0] [i_1];
            var_16 = var_3;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_8 [i_0] [i_2] = (-32767 - 1);
            var_17 = (!(arr_5 [i_2] [i_0] [i_2]));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    {
                        var_18 = 0;
                        var_19 = ((var_8 / (arr_14 [i_3] [i_2] [i_3] [i_4 - 2])));
                        var_20 = ((var_9 - ((18446744073709551615 ? var_6 : (arr_9 [i_3] [12] [i_0])))));
                        var_21 = (~18446744073709551615);
                        var_22 = (max(var_22, ((((arr_7 [10]) ? 0 : var_8)))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_22 [i_2] [i_2] = (2 ? 2456384797 : (-32767 - 1));
                        var_23 = ((~(arr_2 [i_0])));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_25 [i_0] [i_7] [i_7] = ((-(arr_4 [i_7])));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_24 = (arr_14 [13] [i_9] [0] [10]);
                            var_25 = 4294967279;
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_26 = (min(var_26, var_10));
                            arr_36 [i_0] [i_0] [i_0] = (arr_33 [1] [i_0] [i_0] [i_7] [i_8 + 1] [i_7]);
                            arr_37 [i_11] [i_7] = -589465114;
                        }
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_11 [i_0] [i_0] [i_0];
                    }
                }
            }
        }
    }
    var_27 = (max(var_27, var_7));

    /* vectorizable */
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        arr_42 [i_12] = (arr_26 [i_12] [i_12] [i_12]);
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 4; i_14 < 9;i_14 += 1)
            {
                {
                    arr_48 [i_12] [2] [i_14] = var_11;

                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        var_28 = (arr_40 [i_14 - 2] [i_14 - 2]);
                        arr_52 [i_13] [i_13] [i_14 - 1] [i_14] = ((~19) * 18446744073709551608);
                    }
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        arr_57 [i_16] [i_14] [1] [i_16] = (((arr_55 [i_14 - 1] [i_14 - 1] [9] [i_16]) ? (arr_55 [i_14 - 3] [6] [1] [1]) : (arr_55 [i_14 + 1] [i_14 + 1] [i_14 - 4] [i_16])));
                        arr_58 [i_12] [i_12] [i_14] = (((arr_34 [i_14 - 3] [i_13] [i_13] [i_13] [i_13]) ? (arr_5 [i_14] [i_14] [i_12]) : ((18446744073709551608 ? 19 : 1))));
                        var_29 = (arr_17 [i_14 - 4] [i_14 - 2] [i_14 + 1] [i_14]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_17 = 2; i_17 < 15;i_17 += 1)
    {
        arr_62 [i_17] [i_17] = (((arr_59 [i_17 - 2]) ? (!var_0) : (arr_61 [i_17 + 1])));
        var_30 = 15956;
    }
    #pragma endscop
}
