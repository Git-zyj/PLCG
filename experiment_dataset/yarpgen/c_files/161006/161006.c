/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (((((((((arr_0 [i_0]) ? (arr_4 [i_2] [i_2] [i_0]) : 1))) ? (((-(arr_4 [i_0] [10] [i_0])))) : var_9))) ? ((-4743712485889793570 ? 135 : ((((arr_5 [i_1] [i_1 + 2] [i_1] [i_1]) <= (arr_5 [i_2] [i_1 + 1] [9] [i_0 - 1])))))) : -4743712485889793563));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = var_0;
                                arr_11 [i_1] [i_1] [i_2] [0] [i_1 - 1] [i_3] &= (max(-4743712485889793558, 1));
                                var_16 = -10921;
                            }
                        }
                    }
                    var_17 &= (arr_2 [i_0] [i_1 - 2] [5]);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            var_18 |= ((-(arr_15 [i_5] [i_6])));
            arr_17 [i_5] [i_5] = 32756;
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 7;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_26 [i_5] [i_6] [i_7] [i_7] = (arr_10 [i_5] [i_5] [i_5] [i_8] [i_8]);
                            arr_27 [i_5] = 1;
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 9;i_12 += 1)
                {
                    {
                        var_19 |= (arr_19 [i_12] [i_10]);
                        var_20 = ((39343 ? 4743712485889793553 : (((1 ? 32755 : 120)))));
                        var_21 = (((arr_33 [i_10] [i_12 + 2] [i_12 + 2] [i_12 + 1] [i_12]) ? (arr_33 [i_12 - 2] [i_12 - 2] [i_12 - 1] [i_12 + 2] [i_12 + 2]) : 127));
                    }
                }
            }
            arr_35 [i_5] [i_5] = (arr_30 [i_5] [i_5] [i_10] [i_10]);
        }
        for (int i_13 = 2; i_13 < 9;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        {
                            var_22 = ((~(arr_36 [i_5])));
                            var_23 += (((arr_36 [i_15]) || ((!(arr_0 [i_15])))));
                            var_24 = (((((var_1 ? (arr_19 [i_5] [i_5]) : (arr_5 [i_5] [i_13 + 2] [i_14] [i_16])))) ? (var_9 ^ var_1) : (arr_16 [i_13 - 2])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_17 = 2; i_17 < 9;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 9;i_18 += 1)
                {
                    {
                        var_25 = (~var_9);
                        var_26 = (arr_48 [i_5] [5] [i_18]);
                        arr_52 [i_5] = ((~(~4743712485889793570)));
                    }
                }
            }
        }
        var_27 = ((((-4743712485889793563 ? 0 : -10923)) <= (4524 || 32761)));
    }
    for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
    {
        var_28 = ((-((((min(64512, (arr_1 [1])))) ? ((var_10 ? (arr_0 [0]) : (arr_51 [0] [i_19] [0]))) : (arr_31 [i_19])))));
        var_29 = ((~(((arr_33 [i_19] [i_19] [i_19] [i_19] [i_19]) ? (arr_33 [i_19] [i_19] [i_19] [i_19] [i_19]) : (arr_33 [i_19] [i_19] [i_19] [i_19] [i_19])))));
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 16;i_20 += 1)
    {
        for (int i_21 = 3; i_21 < 14;i_21 += 1)
        {
            {
                var_30 = -4446634676954676739;
                var_31 = ((-21631 ^ (((arr_58 [1] [i_21]) ? (arr_61 [i_20] [i_20]) : (((!(arr_56 [i_21]))))))));
                var_32 = var_12;
            }
        }
    }
    #pragma endscop
}
