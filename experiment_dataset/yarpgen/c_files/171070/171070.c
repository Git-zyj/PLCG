/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [7] [i_2] [i_3] [i_1] = (119 * 32158);
                                arr_13 [11] [i_1] [i_2] [22] [1] [i_1] [i_2] = (((~16383) < (((((((arr_6 [i_0] [i_1] [i_2] [i_3]) | 1)) != -162500313))))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [16] = (var_7 + -var_6);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 = ((~(min((((arr_15 [1] [i_5] [i_2] [10]) ? 1 : var_5)), var_9))));
                                arr_19 [i_0] [i_1] [i_2] [i_2] [i_1] [i_2] = ((~((-(((var_11 == (arr_11 [7] [i_6] [23] [i_2] [i_0] [i_0]))))))));
                                arr_20 [i_0] [i_1] [i_1] [i_5] [11] [1] [1] = -0;
                                var_14 ^= ((((~(arr_3 [i_6] [18])))) | var_12);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_31 [i_7] [i_7] [i_7] = (max((((var_5 ? var_3 : ((max(var_10, -1)))))), ((((max(0, 32158))) ? (max(897499128533257232, (arr_0 [i_10]))) : (~var_7)))));
                            arr_32 [i_7] [i_10 + 1] [i_9] [i_7] [i_7] [i_7] = (((~(arr_3 [i_10 + 2] [i_10 - 1]))));
                            arr_33 [i_7] [i_9] [i_8] [i_7] = ((((~(var_0 & var_7))) != var_0));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_15 = (!(((-((-(arr_35 [i_8] [i_8] [i_7])))))));
                                var_16 = ((((-var_5 ? var_12 : (arr_15 [i_12] [i_12 - 1] [1] [8]))) < var_1));
                                var_17 = ((!(((var_1 ? (arr_28 [1] [i_12 + 1] [i_12 + 1] [i_12 + 1]) : (arr_28 [i_12] [i_12] [12] [i_12 + 1]))))));
                                arr_41 [i_7] [i_12] [i_8] [i_8] [2] [i_7] = ((((-(arr_36 [i_11 + 2] [i_11 + 2] [i_12 - 1] [i_13 - 1]))) >> ((var_3 ? (~var_7) : (arr_38 [i_12 + 1] [i_12 + 1] [i_13 + 2] [i_11 + 1])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            arr_47 [0] [i_7] [i_14] [i_15] [i_15] = (max(-18446744073709551614, (((-(!var_3))))));
                            arr_48 [11] [11] [i_7] [i_15] = ((~(~0)));
                            var_18 ^= 1;
                            var_19 -= ((!((min((arr_10 [1] [i_8] [i_8] [i_15] [i_14]), (((var_12 ? 1 : (arr_28 [i_7] [i_7] [18] [3])))))))));
                            arr_49 [i_7] [i_7] [1] [i_7] = ((arr_37 [12] [i_7] [i_7] [i_7] [i_7] [i_7]) ? 8589934591 : var_0);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
