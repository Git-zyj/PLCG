/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] = (max((min((((arr_3 [i_2]) ? (arr_0 [12]) : 3017494022)), 5)), ((((arr_14 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 2]) <= (arr_4 [i_0 + 1]))))));
                                var_17 = (arr_9 [10] [10] [i_2] [i_4]);
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_0] [i_1] = (((((39484 ? (!var_1) : 53319))) ? (max(((134213632 << (((arr_7 [i_2]) - 1518843346916658188)))), ((((-9223372036854775807 - 1) > 53315))))) : (max((((arr_11 [i_0] [i_1] [i_2]) ? 1 : 12202)), (!59)))));
                }
            }
        }
        arr_18 [i_0] [i_0] = ((!(arr_8 [15] [i_0 + 2])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_18 = (arr_1 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_19 *= ((((min(1, 32759))) ? -2147483628 : var_0));
                                var_20 = (min(((((arr_19 [i_0 - 1]) >= var_15))), (max((arr_5 [i_0] [i_0] [i_0 + 2]), (arr_19 [i_0 + 1])))));
                                arr_29 [i_6] |= (~1);
                                arr_30 [i_5] [i_5] [i_6] [i_6] [i_8] = (116 ^ 4294967295);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_21 = ((((-(1 | -15))) * 12221));
                                var_22 = (arr_24 [i_0] [i_0 + 1] [i_0]);
                                arr_37 [i_0] [23] [i_5] [i_0] [i_0] = (~13);
                                arr_38 [i_10 + 1] [i_5] [i_5] [8] = arr_25 [i_6];
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_23 = ((-var_9 ? ((-(arr_7 [i_11]))) : 4200059374));
                                arr_51 [i_11] [i_13] [i_13] [i_13] [i_15 - 2] [i_13] = var_9;
                                var_24 = (max(var_24, ((((((-10 != (arr_22 [i_11] [i_12 - 2] [i_12] [i_15 - 3])))) != 3)))));
                                var_25 = var_14;
                                var_26 = -123;
                            }
                        }
                    }
                    var_27 = (max(var_27, (((var_0 ? var_8 : (arr_47 [i_11] [i_12] [i_12 - 1] [i_12 + 1] [i_13] [i_13]))))));
                }
            }
        }
        var_28 -= (((arr_10 [i_11] [i_11] [i_11] [0] [i_11]) ? 5 : var_16));
    }
    for (int i_16 = 0; i_16 < 25;i_16 += 1)
    {
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 25;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    {
                        var_29 = (max(var_29, ((min(1, 1)))));
                        arr_63 [i_16] [i_16] [i_18] [i_16] = ((var_12 ? ((max((arr_34 [i_16] [i_17] [i_18] [i_19] [i_18] [i_19]), (arr_34 [i_16] [i_17] [i_18] [i_18] [i_18] [i_19])))) : 1));
                        var_30 = ((((100 + (arr_55 [i_16] [i_17] [i_19]))) == (arr_55 [i_17] [i_18] [i_19])));
                    }
                }
            }
        }
        var_31 = ((-69 ? 1 : (18446744073709551590 <= 33)));
    }
    /* LoopNest 2 */
    for (int i_20 = 2; i_20 < 10;i_20 += 1)
    {
        for (int i_21 = 1; i_21 < 10;i_21 += 1)
        {
            {
                var_32 = (((arr_69 [i_20] [i_20 - 1]) ? ((max(-6684, 67))) : ((~(arr_34 [i_21] [i_21] [i_21] [i_21] [i_20 - 1] [i_20 - 1])))));
                var_33 = (min(var_33, -107));
            }
        }
    }
    var_34 = ((max(-63050394783186944, var_4)));
    var_35 = var_14;
    #pragma endscop
}
