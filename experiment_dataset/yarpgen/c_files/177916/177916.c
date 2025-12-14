/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_15;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = ((-var_4 > ((((min(-122, -121))) ? 1516626435 : var_10))));
            var_19 *= ((~((~(-32767 - 1)))));
        }
        var_20 += (arr_3 [i_0] [i_0]);
        var_21 &= ((var_5 + (arr_0 [i_0])));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_22 = (min(var_22, (((-(arr_9 [i_3 + 1] [i_2] [i_3] [i_2]))))));

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_23 = var_11;

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_0] [i_3] [i_4] [i_5] = (((arr_13 [i_4] [i_3] [i_0] [i_3 - 1]) > (-90 >= var_16)));
                        arr_18 [i_5] [i_2] [i_3 + 2] [i_2] [i_5] = 0;
                    }
                    arr_19 [i_0] [i_0] [i_0] [i_4] [i_0] = ((!(((7455 << (-83 + 89))))));
                    var_24 = (min(var_24, 87));
                }
                arr_20 [i_0] [i_0] = (51253 * ((0 ? (arr_7 [i_2]) : 65514)));
                var_25 = (((arr_13 [i_3] [i_0] [i_2] [i_0]) ^ (-32767 - 1)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_25 [i_6] = (arr_7 [i_3 + 1]);
                            arr_26 [i_0] [i_2] [i_3] [i_2] [i_6] &= -87;
                            var_26 = (arr_16 [i_7 + 2] [i_7] [i_7] [i_3] [i_3] [i_3 + 2]);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_27 = (arr_4 [i_2]);

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    arr_32 [i_9] [i_9] [i_9] [i_0] = (arr_1 [i_2]);
                    var_28 = -122;
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {

                    for (int i_11 = 2; i_11 < 14;i_11 += 1)
                    {
                        arr_39 [i_0] [i_0] [i_0] [i_0] = -122;
                        var_29 |= -var_3;
                        var_30 = 51253;
                    }
                    for (int i_12 = 2; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        var_31 += ((~(arr_36 [i_12 + 1])));
                        var_32 = (((arr_24 [i_0] [i_2] [i_2] [i_10] [i_12 + 1]) * (((arr_16 [i_0] [i_0] [i_8] [i_10] [i_12 + 1] [i_10]) ? var_13 : 18809))));
                    }
                    for (int i_13 = 2; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        var_33 = (((arr_15 [i_13 - 1] [i_13 - 2] [i_13] [i_13] [i_13 + 1]) - (arr_15 [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 + 1])));
                        arr_46 [7] [7] [i_8] [7] [i_10] [i_13] = var_6;
                        arr_47 [i_0] [i_2] [i_8] [i_8] [i_0] |= (!-21965);
                        var_34 = (min(var_34, (((!(106 >= -32751))))));
                    }

                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        arr_50 [i_2] [i_10] [i_8] [i_2] [i_2] |= ((var_9 ? var_5 : -122));
                        var_35 *= ((var_12 ? ((var_3 ? var_8 : var_10)) : (arr_12 [i_0] [i_14] [i_0] [i_10])));
                    }
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        var_36 = var_8;
                        var_37 += (arr_16 [i_0] [i_2] [i_8] [i_10] [i_15] [i_2]);
                        var_38 = (arr_49 [i_0] [i_2]);
                    }
                    arr_53 [i_0] = arr_0 [i_2];
                    arr_54 [i_0] = (arr_1 [i_8]);
                }
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 4; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        {
                            var_39 ^= arr_11 [i_2] [i_2] [i_17 - 3] [i_2];
                            var_40 = ((var_7 > 74) > (18810 * 12));
                            var_41 = (min(var_41, var_2));
                            arr_62 [i_0] [i_2] [i_17] [i_17] [i_17] = var_17;
                        }
                    }
                }
                arr_63 [i_16] [i_2] [i_0] = -0;
                arr_64 [i_0] = ((-(arr_3 [i_0] [i_16])));
                var_42 = ((var_16 ? 0 : var_15));
            }
            arr_65 [i_0] = ((((min((arr_11 [i_0] [i_2] [i_0] [i_2]), (arr_9 [i_2] [i_2] [i_0] [i_0])))) <= (~84)));
        }
    }
    /* LoopNest 2 */
    for (int i_19 = 1; i_19 < 21;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 22;i_20 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 18;i_22 += 1)
                    {
                        {
                            arr_74 [i_20] [i_20] [i_21] [i_19] = (arr_66 [i_19 - 1] [i_22]);
                            arr_75 [i_19] [i_20] [i_21] [i_19] = (arr_68 [i_19] [i_19]);
                        }
                    }
                }
                var_43 *= (((((arr_70 [i_19] [i_19] [0] [i_19 + 1]) - (((-127 - 1) - (arr_73 [i_19] [i_19]))))) > (((arr_68 [i_19 - 1] [i_20]) ? (arr_70 [i_19 + 1] [i_19 + 1] [4] [i_20]) : ((110 ? 46718 : 9001))))));
                var_44 = (max(((0 << (106 - 90))), ((-(arr_71 [i_19 - 1] [i_19] [i_19 + 1])))));
                arr_76 [i_19] [i_19] [i_19] = ((var_12 & (((((-87 ? var_6 : var_16)) <= var_12)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_23 = 4; i_23 < 17;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 18;i_24 += 1)
        {
            {
                var_45 += 0;
                arr_82 [i_24] = ((((min((arr_80 [i_23 + 1] [i_23 + 1] [i_23 + 1]), 6))) || (((arr_80 [i_23 - 4] [i_24] [i_23 - 4]) == -83))));
                arr_83 [i_23] [i_24] = (min(1715, ((var_2 ? 0 : 46710))));
                var_46 = (max((min(((var_14 ? 8986 : var_15)), (arr_81 [i_23 - 2]))), ((-((0 ? var_5 : -32758))))));
            }
        }
    }
    var_47 &= -9162148741049739609;
    #pragma endscop
}
