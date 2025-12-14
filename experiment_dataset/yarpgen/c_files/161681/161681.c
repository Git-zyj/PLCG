/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((48 ? 48 : ((var_10 ? -27561 : var_10)))), 1653985361));
    var_15 = var_3;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = 0;
        var_16 *= (((!42) ? (max((arr_0 [i_0 - 2] [i_0 - 3]), var_7)) : (max((((arr_1 [i_0] [i_0 + 1]) ? (arr_0 [i_0] [i_0]) : var_1)), (((arr_0 [i_0 - 2] [i_0 - 2]) & (arr_0 [i_0] [0])))))));
        var_17 = ((-(((!(arr_0 [i_0 - 2] [i_0 + 1]))))));
        var_18 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_19 = (max(var_19, ((max((((arr_6 [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_6 [i_1]))), (((arr_6 [i_1]) * (arr_6 [i_1]))))))));
        var_20 = (-((1 ? var_1 : (arr_6 [i_1]))));
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_21 = ((!((((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2]))))));

                    for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_3] [i_2] = (!501649872);
                        var_22 = ((((arr_11 [i_2] [i_5 + 1] [i_5]) ? (14313396452409080695 ^ 0) : var_6)));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_2] [i_2] [12] [i_2] [i_4] [i_4] = ((-2702 - (arr_13 [i_2] [i_2] [5] [i_6 - 1])));
                        var_23 ^= var_9;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_24 += (!var_10);
                                var_25 = var_6;
                            }
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_26 ^= ((20813 && (-9223372036854775807 - 1)));
                    arr_30 [i_2] [i_3] [i_2] = (max((arr_13 [i_9 + 1] [i_2] [i_2 - 1] [i_2]), (((!(arr_13 [i_9 + 1] [i_2] [i_2 - 4] [i_2]))))));
                    arr_31 [i_2] [i_3] [i_2] = (40756 ? (((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2]))) : -var_1);
                    arr_32 [i_2 - 1] [i_2] = (((arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? -665920368 : (1702761469 < var_7)));
                    var_27 = (arr_24 [i_2] [i_3] [i_3] [i_2]);
                }
                for (int i_10 = 1; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    var_28 = 25811;
                    var_29 = (arr_28 [i_2] [i_2] [i_10] [i_2 + 1]);
                }
                for (int i_11 = 1; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    arr_37 [i_2] [i_2] [i_11 + 1] [i_2] = (((((arr_28 [i_2 - 3] [i_2] [i_11 - 1] [i_11 + 1]) & (arr_28 [i_2 - 4] [i_2] [i_11 + 1] [i_11 - 1]))) != (arr_28 [i_2 - 4] [i_2] [i_11 - 1] [i_11 + 1])));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                var_30 = (min((((1 ? 0 : (arr_7 [i_2])))), -7296957596206490954));
                                var_31 = (min(var_31, ((min(((~(arr_19 [i_2] [i_2] [i_2 + 1] [i_11] [i_11] [i_12]))), (arr_19 [1] [1] [i_2 - 3] [10] [i_3] [i_12]))))));
                                var_32 = -1883278279;
                            }
                        }
                    }
                    var_33 = ((((var_7 == -317103862) ? (arr_39 [i_11]) : (arr_35 [i_2] [i_3] [i_11]))));
                    arr_43 [i_2] [i_2] [i_2] = (min(((((arr_35 [i_2] [4] [i_2]) ? (arr_21 [i_11 + 1] [i_2] [i_11 + 1]) : ((243 ? var_6 : var_11))))), ((0 ? (arr_10 [i_2]) : 17330721206099432630))));
                }
                var_34 = (arr_23 [i_2] [15] [17] [15] [15] [i_3]);
                arr_44 [i_2] [i_2] = (~-var_5);
                arr_45 [i_2] [i_3] [i_2] = ((((47372 ? -1899592286 : -1))));

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_35 *= var_10;
                    var_36 = var_0;
                }
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    var_37 += ((((max(((var_4 ? 0 : (arr_9 [8]))), (arr_18 [i_2] [17] [i_2 - 2] [i_15])))) || ((-51 || (arr_40 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [13])))));
                    arr_51 [i_2] = (max((arr_12 [i_2] [i_2 - 4] [i_2]), ((~(arr_12 [i_15] [i_2 - 4] [i_2])))));
                    arr_52 [15] [i_2] [i_2] = ((~(((arr_24 [1] [i_3] [i_3] [i_2]) ? (((!(arr_22 [i_2] [i_2] [i_3] [i_15] [i_3] [i_2])))) : (((arr_42 [i_2] [i_2] [i_2]) & (arr_49 [14] [i_15] [i_2] [i_15])))))));
                }
                /* vectorizable */
                for (int i_16 = 1; i_16 < 20;i_16 += 1)
                {
                    arr_56 [i_2] [i_2] [i_2] [i_16] = 1348802719;
                    var_38 = ((~(arr_47 [i_2] [i_2 - 4] [i_2] [i_2])));
                    var_39 = var_4;
                    var_40 = (~4578147736392941352);
                    var_41 ^= (((arr_15 [i_2 - 2] [i_2 - 1] [14] [i_2 - 1] [i_2 - 2]) | (arr_15 [i_2 - 2] [i_2 - 2] [0] [i_2 - 4] [i_2 - 4])));
                }
            }
        }
    }
    var_42 = (!-1911720054);
    #pragma endscop
}
