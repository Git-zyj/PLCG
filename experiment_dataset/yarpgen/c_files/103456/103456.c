/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((var_7 ? ((var_11 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : ((min(var_12, var_11)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((((min((14 || var_4), -20954))) ? -25281 : (((11531335600196809311 <= (((arr_6 [i_0] [i_0] [i_1] [i_2]) ? var_8 : 15041954931037491450)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 |= (-((((3404789142672060152 ? 6915408473512742312 : 5625860123907780479)) ^ ((min((arr_1 [i_4]), (arr_10 [0] [i_1] [i_1] [0] [i_1] [0])))))));
                                var_18 = ((!(((6915408473512742312 ? (((arr_2 [i_0] [6]) ? 6018391132989567467 : (arr_2 [3] [i_2]))) : (max((arr_10 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0]), var_6)))))));
                                var_19 = ((((((max(var_11, (arr_4 [9] [0] [1]))) | (((min(23872, -56))))))) ? ((((var_1 ? (arr_0 [i_3]) : (arr_12 [9] [9] [9] [i_4]))) / (arr_12 [i_0] [i_1] [i_3] [i_4]))) : (((-6018391132989567468 + ((var_4 ? (arr_0 [i_0]) : 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_20 = (var_4 == var_4);

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_21 = min((arr_15 [i_5]), (arr_15 [i_5]));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_28 [i_5] [1] [1] [1] [i_9] = var_2;
                            var_22 = ((-(arr_27 [i_6 + 2] [i_5] [i_6 + 1] [i_6])));
                            arr_29 [i_5] [i_6] [i_5] [i_8] [i_9] = (((-3252158024510713966 ? 810916320 : 23862)));
                        }
                        /* vectorizable */
                        for (int i_10 = 4; i_10 < 23;i_10 += 1)
                        {
                            var_23 = ((var_1 ? var_12 : (1 + 11531335600196809297)));
                            var_24 = (arr_25 [i_5] [1] [i_7] [i_5] [i_10 - 1]);
                        }
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            var_25 = 1267688497;
                            var_26 = (((min(((0 ^ (arr_26 [i_5] [i_6] [i_5] [i_8] [i_5] [i_6] [i_5]))), (arr_22 [i_5] [i_6] [i_5] [i_8])))) * ((~(13 | 18446744073709551615))));
                            var_27 = (min(var_27, 7));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                var_28 = (max(var_28, ((((-(arr_25 [4] [4] [4] [i_12] [i_15])))))));
                                var_29 = (((arr_31 [i_5] [i_5] [i_13] [i_14] [i_15] [i_12]) | ((max((arr_17 [i_5]), 2190)))));
                            }
                        }
                    }
                    var_30 = (min(var_30, (((181 ? 111 : (((min(var_14, var_14)))))))));
                    arr_46 [23] [23] [i_5] [23] = (15902268101394979631 ? (!36214) : 2355029717);
                    var_31 = (arr_33 [12] [i_5] [i_12] [i_12] [12] [i_5]);

                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        var_32 = (max(((~(((arr_27 [i_5] [i_5] [i_5] [i_5]) ? (arr_43 [i_5] [i_5]) : var_0)))), ((min((arr_22 [i_5] [i_12] [i_5] [i_12]), var_6)))));
                        var_33 = (min(var_33, var_12));
                        arr_49 [i_5] [i_12] [i_13] [i_16] = (min((min((arr_37 [i_5] [i_13]), (arr_37 [i_5] [i_12]))), (((~(arr_17 [i_5]))))));
                        arr_50 [i_5] [i_5] [i_12] [i_5] [i_13] [i_13] = ((((~((var_10 ? 44161667229326282 : (arr_30 [i_5] [i_5]))))) / (max(-3917907261250232609, 0))));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        var_34 = (max(var_34, (var_1 <= var_15)));
                        var_35 = (((var_3 ? 67 : 4262282739335478981)));
                    }
                }
            }
        }
        var_36 = var_11;
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 15;i_18 += 1)
    {
        arr_56 [i_18] [i_18] = (arr_25 [i_18] [i_18] [2] [22] [i_18]);
        var_37 = (!var_2);
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 15;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 15;i_22 += 1)
                        {
                            {
                                var_38 *= ((arr_36 [i_19] [i_19]) ? var_0 : (arr_36 [i_22] [i_19]));
                                var_39 = -236;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 1; i_23 < 11;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 15;i_24 += 1)
                        {
                            {
                                var_40 = (max(var_40, -41));
                                var_41 = (min(var_41, (((!(~var_11))))));
                                var_42 = 29323;
                                arr_74 [i_18] [1] [i_20] [i_23] [1] [1] = (arr_19 [i_18] [i_19] [i_18]);
                                var_43 = (~1066262485480079689);
                            }
                        }
                    }
                }
            }
        }
    }
    var_44 = (min((((min(var_2, var_13)) ^ var_5)), var_14));
    var_45 = (max(var_45, var_4));
    #pragma endscop
}
