/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        arr_3 [i_0] [i_0] = ((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = (max(var_16, ((~(arr_4 [8])))));

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            var_17 = (1 ? 11211553110112547623 : 0);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_18 = (max(var_18, 1));
                        var_19 = (((1 ? 3055541209432947378 : 1)) * 0);

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_20 += (arr_14 [i_2 - 1] [i_2 - 2] [i_4] [i_2]);
                            var_21 = ((18446744073709551612 ? 1 : 0));
                            var_22 = var_8;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_21 [i_1] [i_2] [i_1] [i_4] = (13166203253611158582 || 1);
                            var_23 = var_10;
                            var_24 = 13166203253611158587;
                            var_25 = (max(var_25, (arr_6 [i_2])));
                            arr_22 [i_2] [i_2] [i_3] [i_4] [i_6] &= 10029651032121022340;
                        }
                    }
                }
            }

            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                arr_25 [i_1] = (((((1 ? var_13 : var_12))) ? var_13 : (arr_11 [i_1])));
                arr_26 [i_2] [i_1] = (arr_23 [i_1] [i_7]);
                arr_27 [i_1] [i_2 - 1] [i_1] [i_7] = (((arr_16 [i_1] [i_1] [i_1] [i_2 + 1] [i_7 - 1]) > (((arr_5 [i_7] [i_2]) + var_14))));
                arr_28 [i_1] [i_1] [i_2] [i_1] = (arr_18 [i_1] [i_2] [i_2] [i_7] [i_7 - 1]);
            }
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 19;i_10 += 1)
                {
                    {
                        arr_38 [i_1] [i_1] [i_1] = ((~(arr_29 [i_8] [i_10 - 2] [i_1])));
                        arr_39 [i_1] [i_1] [i_8] [i_9] [i_9] [i_8] &= ((0 ? 16800703380299815460 : 5187294578121995649));
                        arr_40 [i_1] [i_9 - 1] [i_9 - 1] = (0 & 18446744073709551615);
                        var_26 = var_14;
                    }
                }
            }
            var_27 = (min(var_27, var_11));
        }
        arr_41 [i_1] = -var_8;
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {

        /* vectorizable */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            var_28 = (var_14 < 0);
            var_29 = (min(var_29, ((((arr_43 [i_11]) >> (((arr_43 [i_11]) - 7786389481427581280)))))));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_30 = 13166203253611158582;
            arr_51 [i_13] = ((+((((arr_42 [i_11]) != (arr_44 [i_11] [i_13]))))));
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 22;i_16 += 1)
                    {
                        {
                            var_31 = ((-(max(5467314120767636966, (arr_60 [i_14] [i_13] [i_14] [4] [i_16] [i_16 + 1] [i_16])))));
                            var_32 = max(8589934576, 0);
                            arr_61 [i_11] [i_11] [i_13] [i_13] [i_15] = 1;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 4; i_18 < 22;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_69 [i_11] [21] [i_17] [i_18 - 4] [i_13] [i_19] = (min(((((arr_65 [i_18 + 1] [i_18 - 3] [i_18] [i_19] [i_19]) < (arr_55 [i_18 + 2] [i_18] [i_18 - 2] [i_18] [i_18 - 4] [i_13])))), ((1 ? 1 : 13241284950203869627))));
                            arr_70 [i_11] [i_13] [i_13] [11] [i_19] [i_18 - 1] [i_17] = ((var_7 >> (arr_67 [i_11] [i_11] [i_18 - 2] [i_18 + 1] [i_19])));
                            var_33 = (max((((arr_54 [i_13] [i_13]) * (arr_54 [i_13] [i_13]))), ((((arr_54 [i_13] [i_13]) || (arr_54 [i_13] [i_13]))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {
            arr_74 [i_11] [i_20] [i_20] = arr_73 [i_11] [i_20];
            var_34 = (min(var_34, (((var_7 ? (arr_47 [i_20] [i_11] [i_11]) : (arr_47 [i_20] [i_20] [i_11]))))));
            var_35 = (((1 && (arr_57 [i_11] [i_20]))) ? (var_4 ^ 2522087638814479530) : ((var_11 & (arr_58 [i_11] [i_11] [i_11] [i_11] [1] [i_20]))));
        }
        var_36 *= ((((~(max((arr_54 [i_11] [i_11]), (arr_52 [i_11])))))) ? (4994349473455232810 && var_3) : ((((arr_72 [i_11] [i_11]) < var_10))));
    }
    var_37 = (((-((var_15 ? var_1 : var_14)))));
    var_38 = (max(10563190096321185578, var_15));
    var_39 = (max(var_11, var_9));
    var_40 = 1;
    #pragma endscop
}
