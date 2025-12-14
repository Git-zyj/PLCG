/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max((18446744073709551615 - 339390428), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (min(var_15, 32));
                var_16 = (-127 - 1);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_17 |= var_11;
                                var_18 = (min(var_18, 18446744073709551602));
                            }
                        }
                    }
                    var_19 = (min(1, (((arr_20 [i_2] [i_4 + 2] [i_2 - 1] [1] [i_2]) ? (arr_13 [i_2]) : (arr_18 [i_2 + 1] [i_2] [i_3] [i_3])))));
                    arr_24 [i_2] [i_2] [i_2] [i_2] = (((-(arr_11 [i_2 - 1]))));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_2] = (((arr_15 [i_2 + 3] [i_2 + 3]) ? ((max((max(var_5, (arr_12 [i_2 + 3] [i_2 + 2]))), (max(-32756, -15297))))) : var_4));
                        arr_30 [i_2] = (((!((((arr_20 [i_2] [i_2 + 3] [i_2] [i_2] [i_2]) ? 6 : 18446744073709551615))))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_33 [12] [2] [i_4] [i_8] [2] [12] |= 5811;
                        var_20 = (arr_26 [i_2 + 2] [i_2] [i_3] [1] [22]);
                        var_21 |= ((-(min(((853349288 >> (-14 + 31))), (arr_10 [6])))));
                        arr_34 [0] [14] [i_2] = (min(((var_4 ? var_11 : -var_8)), (arr_21 [i_2] [i_3] [i_4 + 1] [i_2] [i_8] [i_3])));
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_39 [i_2] [i_2] [i_2] [i_9] [i_9] [i_9] = 23;
                        var_22 = (arr_11 [i_2]);
                    }
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_23 = var_6;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 23;i_12 += 1)
                        {
                            {
                                arr_47 [2] [0] [i_2] [i_11] [i_12 + 1] [i_10] [i_12] = (-(+-1));
                                var_24 = (max(var_24, (14 == -853349289)));
                                arr_48 [19] [i_2] [i_2] [i_10] [i_2] [19] = (((var_2 || -27430) ? (((24 > 8738947829959241850) ? (arr_23 [i_2] [i_3] [i_3]) : (min((arr_22 [i_2] [i_2]), (arr_38 [i_11] [i_10] [i_3] [i_2 - 1]))))) : (((((0 ? (arr_41 [1] [1] [i_10] [i_2]) : (arr_40 [i_2] [i_2] [i_11])))) ? ((((var_13 && (arr_45 [18] [i_2]))))) : (arr_20 [i_2] [i_2] [i_10] [i_2] [i_2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_25 = ((!(arr_35 [i_2 + 2] [i_3] [i_10] [i_14 - 1])));
                                var_26 = -var_9;
                            }
                        }
                    }
                }
                var_27 = (min(var_27, (((~(min((arr_46 [i_2] [i_2] [i_2 + 2] [i_2 + 3] [i_2 + 2]), (arr_46 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 + 2]))))))));
            }
        }
    }
    var_28 += ((-18446744073709551598 ? var_10 : var_2));
    #pragma endscop
}
