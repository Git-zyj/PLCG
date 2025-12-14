/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0 - 1] = (((~(arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0 - 2] [i_1] [i_2] = (((arr_4 [i_2 - 1] [i_0 + 1]) ? (arr_0 [i_2 - 1]) : (arr_0 [i_2 - 1])));
                    arr_11 [i_0] [i_0 - 2] [i_0] = (arr_8 [2] [2] [i_0]);
                    arr_12 [i_0 + 3] = ((142 <= ((var_0 ? var_17 : (arr_3 [i_0] [i_0 + 3])))));

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_18 = (max(var_18, -var_12));
                        var_19 &= var_7;
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
    {
        var_20 = ((~203600023) ? (((~(arr_16 [i_4])))) : (arr_17 [i_4] [i_4]));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                {
                    arr_22 [i_4 + 1] [14] &= (arr_20 [i_4 + 1] [i_5] [i_6]);
                    var_21 = 10182467401817848460;
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
    {
        var_22 = (((((max(10182467401817848476, 8264276671891703139) > -5158629124320431686)))));
        arr_25 [19] [19] = (-(arr_23 [i_7 + 1] [i_7 + 1]));
        arr_26 [4] = ((~((((arr_19 [i_7 + 1]) > (arr_19 [i_7 + 1]))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_23 = ((-(arr_24 [20] [i_8])));
                    arr_32 [i_7] [i_7] [i_7 + 1] [i_7] = arr_21 [i_8] [i_7 + 1] [i_8];
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_24 = ((1034199085 ? 5158629124320431686 : 11));
                                var_25 -= (arr_38 [i_7] [i_7 + 1] [i_7]);
                                var_26 = ((74 * (((arr_23 [5] [10]) ? (arr_23 [i_7] [i_7 + 1]) : (arr_23 [i_7] [i_7])))));
                            }
                        }
                    }
                    var_27 = (min(var_27, (((~(arr_23 [i_7 + 1] [i_9]))))));
                    var_28 = var_14;
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
    {
        var_29 = (max(var_29, var_14));
        arr_42 [4] = (max((((arr_41 [i_12 - 1] [i_12]) && (arr_40 [i_12 - 1]))), (((arr_40 [i_12 - 1]) <= (arr_41 [i_12 - 1] [i_12])))));
        arr_43 [7] = ((((var_14 ? (arr_17 [i_12 - 1] [i_12]) : (arr_17 [i_12 - 1] [i_12 - 1]))) / (((((arr_17 [i_12 - 1] [i_12]) >= (arr_17 [i_12 - 1] [i_12])))))));
        arr_44 [i_12 - 1] = var_2;
    }
    for (int i_13 = 1; i_13 < 1;i_13 += 1) /* same iter space */
    {
        var_30 = (arr_24 [i_13 - 1] [i_13 - 1]);
        var_31 = ((+((((arr_27 [i_13] [i_13 - 1]) >= (((((arr_39 [i_13] [i_13] [i_13] [i_13] [i_13]) + 2147483647)) >> (var_14 - 16492141141150794925))))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                {
                    arr_54 [1] [1] [i_15] [i_15] = ((-(arr_51 [i_13] [i_13 - 1])));
                    var_32 *= var_14;
                }
            }
        }
    }
    var_33 = (max(-5158629124320431687, var_4));
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 8;i_17 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 9;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        {
                            arr_64 [10] [1] [i_17] [i_19] = (min((-1690039247 + 1690039267), var_0));
                            var_34 = (((arr_9 [i_19]) ? (((-59 && 805307222062524886) >> ((((var_15 ? var_2 : (arr_28 [i_17 + 1]))) - 124)))) : var_16));
                            arr_65 [i_17] = ((+((~((var_12 << (((arr_46 [i_17]) - 2067628847))))))));
                            var_35 -= (109 | 64);
                        }
                    }
                }
                arr_66 [i_16] [i_17] [i_16] = 0;
            }
        }
    }
    #pragma endscop
}
