/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(-var_4, ((var_0 ? 0 : ((1 ? 116 : 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((((arr_4 [i_1] [i_3]) && (~35))) ? (min(((607551842 & (arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]))), (var_9 + var_7))) : (max(var_9, var_7)))))));
                                var_14 = ((((((var_11 ? var_7 : (arr_0 [i_2]))))) ? (((((((arr_4 [i_3] [i_3]) ? var_8 : 3687415454)) != (var_9 - var_8))))) : -26221));
                                arr_13 [i_0] [i_1] [i_0] [i_0] = (-1959025118 - 20492);
                                var_15 = (max(var_15, (((607551845 > (((((607551842 ? 16 : 239))) - ((3687415434 ? var_11 : var_5)))))))));
                                arr_14 [i_0] [i_1] [i_1] [i_1] = (~var_6);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    var_16 -= (((((var_11 != (arr_7 [i_0] [i_1] [i_5])))) * (!127)));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0] = ((65529 ? (arr_19 [i_6] [i_5] [i_1] [i_0]) : var_6));
                        arr_22 [i_0] [i_6] [i_0] [i_6] [i_5] [i_6] = ((1 ? 17380262771130878968 : 239));
                        arr_23 [i_0] [i_5] [i_1] [i_0] = (arr_16 [i_1] [i_0]);
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_7] [i_8] [i_9] = 4;
                            var_17 = (max(var_17, ((((365833349 ? 1 : 24)) << (((~var_9) + 30270))))));
                        }
                        var_18 = (max(var_18, (var_8 || var_11)));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_19 = ((25646 > (arr_2 [i_0] [i_10])));
                        arr_39 [i_0] [i_1] = ((((11187252194222849192 ? 16 : 607551842))) ? (14659 & var_11) : (arr_31 [i_0] [i_1] [i_1] [i_7] [i_0]));
                        var_20 -= -0;
                        var_21 = (((arr_19 [i_0] [i_1] [i_7] [i_10]) || (((var_1 ^ (arr_1 [i_7] [i_1]))))));
                    }
                    var_22 -= var_5;
                    arr_40 [i_1] [i_1] [i_0] [i_1] = 206248046;
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                {
                    arr_43 [i_0] [i_1] [i_0] = max((~5), ((((-2047901304 > var_4) ? ((-1 ? var_11 : var_9)) : (((max((arr_41 [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_1])))))))));
                    var_23 = ((((((arr_35 [i_0] [i_0] [i_1] [i_0]) ? (arr_35 [i_0] [i_11] [i_1] [i_0]) : (arr_35 [11] [i_1] [i_11] [i_0])))) ? 1 : ((((-(arr_25 [i_0] [i_1] [i_11])))))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    var_24 += (((~var_11) || -1163213919483278574));
                    var_25 = (((~18446744073709551611) ? 248 : ((7762 ? 16490376630821840977 : var_11))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 23;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 22;i_16 += 1)
                    {
                        {
                            var_26 = ((var_6 ? ((var_3 ? (((min(114, (arr_51 [22] [i_15]))))) : (~35184372088832))) : (((~(~0))))));
                            var_27 ^= ((50 | (((((116 ? 57775 : 3687415454))) ? var_8 : -1))));
                        }
                    }
                }
                arr_56 [i_14] [i_14] [i_14] = (((max(var_4, (arr_53 [i_13 - 1] [i_14] [i_14] [i_13 - 1] [i_14] [i_14]))) < 955955525));
            }
        }
    }
    #pragma endscop
}
