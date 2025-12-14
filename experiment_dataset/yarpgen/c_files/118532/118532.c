/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_19 = ((!(((-(arr_0 [i_3] [i_2]))))));
                        arr_13 [i_3] = ((-(((!((max(16, (arr_10 [i_1] [i_1] [i_1] [i_0])))))))));
                        var_20 = var_15;
                        var_21 = (min(var_21, (((~((((21 ? 2 : 0)) & -0)))))));
                        var_22 = ((((((arr_6 [i_1]) / 18670))) ^ ((16 ? (((arr_9 [i_3] [i_1] [i_3] [i_1] [i_1] [i_1]) ? 240 : 8835452422124449003)) : (arr_9 [i_3] [i_3] [i_2] [i_1] [i_1] [i_3])))));
                    }
                }
            }
        }
        arr_14 [i_0] &= (((((-9 ? -1 : (min(5, 21))))) & var_3));

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_23 = (min((1 <= 1), ((var_16 ? 18 : ((45 ? (arr_2 [i_0]) : var_18))))));

            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    arr_23 [i_6] [i_0] = (min((((!(!25)))), (min((((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [16]) ? var_14 : 1)), ((min(var_0, (arr_21 [i_6] [i_4] [i_4] [i_0] [i_0]))))))));
                    arr_24 [1] [i_6 - 1] [i_5 - 1] [i_4] [i_4] [i_0] = (((((-(1 * 242)))) ? (((max((arr_15 [i_0] [i_0]), (!var_15))))) : var_16));
                }
                arr_25 [i_5] [i_5 - 1] [i_4] [i_0] = (((((((var_15 / (arr_16 [i_4])))) & var_18))) && (arr_16 [i_5 + 1]));
                var_24 = (max((arr_11 [i_4] [i_5] [i_4] [i_4] [i_4]), (min((arr_11 [i_4] [i_5 + 1] [i_5 - 1] [4] [i_4]), (arr_11 [i_4] [i_5] [i_4] [i_0] [i_4])))));
            }
            arr_26 [i_0] = (max((1 & 253), (max(((8 ? var_9 : -24761)), (arr_0 [i_0] [i_4])))));
            var_25 = ((min(1, (~-16))));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            arr_29 [i_0] = (var_7 ? 11033 : (arr_10 [i_7 - 2] [i_7 - 1] [i_7 - 2] [i_7 - 2]));
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_26 = (((~var_10) ^ (arr_34 [i_8] [i_7 - 2] [i_8 - 2] [i_7])));
                            var_27 = (min(var_27, ((((arr_35 [i_0] [i_7] [12] [1] [i_10]) || (((var_15 ? -24761 : (arr_5 [i_0] [i_0] [i_0])))))))));
                            var_28 = (min(var_28, (!1)));
                            arr_39 [3] [i_8] [i_8 - 1] [i_8] [i_8] = (((((var_17 ? var_18 : var_5))) + var_9));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        var_29 = (((824466465 / 7) ? (arr_10 [i_11] [i_11] [i_11] [i_11]) : var_14));
        var_30 = (min(var_30, (arr_9 [10] [i_11] [i_11] [10] [i_11] [10])));

        for (int i_12 = 4; i_12 < 10;i_12 += 1)
        {
            var_31 = var_12;
            var_32 = 3610809380759829447;
        }
    }
    /* vectorizable */
    for (int i_13 = 3; i_13 < 17;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    {
                        var_33 = (min(var_33, var_18));
                        arr_58 [i_13] [0] [i_13] [i_15] = (((arr_49 [i_13 - 1]) / (var_12 * 129)));
                        var_34 = var_17;
                    }
                }
            }
            var_35 = ((0 ? var_18 : (arr_57 [i_13])));
        }
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 16;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    {
                        var_36 += (((arr_65 [i_13 - 3] [i_17] [i_13]) < ((~(arr_57 [i_13])))));

                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            var_37 = (arr_68 [i_19] [i_19] [i_18] [i_18]);
                            var_38 = (((((var_14 ? (arr_67 [i_20] [i_19] [i_18 - 1] [i_18] [i_19] [i_13 - 2]) : (arr_56 [i_19] [i_17] [i_19])))) == var_3));
                            arr_69 [i_19] [4] [i_19] [i_19] = (((arr_47 [3]) ? (arr_57 [i_17]) : ((-(arr_65 [i_20] [i_19] [i_20])))));
                            var_39 = 16;
                        }
                        var_40 = (((arr_52 [i_13 - 1]) == ((129 ? -3688 : 18446744073709551612))));
                    }
                }
            }
        }
        var_41 = (((1 ? 1 : 1)));
    }
    for (int i_21 = 0; i_21 < 1;i_21 += 1)
    {
        arr_73 [i_21] = var_12;

        /* vectorizable */
        for (int i_22 = 4; i_22 < 16;i_22 += 1)
        {
            var_42 = var_14;
            arr_78 [i_22] [i_21] [i_21] = ((-(arr_57 [i_22 - 4])));
        }
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 18;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 18;i_24 += 1)
            {
                {
                    var_43 = var_0;
                    /* LoopNest 2 */
                    for (int i_25 = 4; i_25 < 17;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 1;i_26 += 1)
                        {
                            {
                                var_44 = (min((max(12251704033315043144, 412745126)), ((min(6, ((~(arr_55 [i_21] [i_23] [i_24] [i_25] [i_21]))))))));
                                var_45 = -18446744073709551587;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 18;i_27 += 1)
                    {
                        for (int i_28 = 2; i_28 < 15;i_28 += 1)
                        {
                            {
                                var_46 = (arr_47 [i_21]);
                                var_47 &= ((~(((~var_8) & var_15))));
                            }
                        }
                    }
                }
            }
        }
        var_48 = 0;
    }
    var_49 = 8;
    #pragma endscop
}
