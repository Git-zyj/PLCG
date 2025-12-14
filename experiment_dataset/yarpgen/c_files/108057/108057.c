/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((var_0 - (27 ^ -28)));
    var_19 = 7385873502776226795;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~9223372036854775794);
        arr_3 [i_0] [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = (max((95 / 5441840368892703235), 1));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                {
                    arr_11 [i_1] |= (var_10 ? (arr_9 [i_1] [i_1] [i_3 + 2]) : ((~((var_3 ? var_11 : var_10)))));
                    arr_12 [i_1] [i_2] [i_1] = var_5;

                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        var_21 *= (((arr_0 [i_2 - 1]) >= ((var_11 ? (arr_9 [i_1] [4] [i_3]) : var_16))));

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            arr_18 [i_1] [i_2 + 1] [i_3] [i_4] [i_2 + 1] |= (((((((min(var_14, (arr_1 [i_1])))) ? (arr_14 [i_3 + 2] [i_1] [i_5 + 1] [i_5]) : (((arr_16 [i_5 + 1] [i_5 + 1] [i_3 + 1] [i_2] [i_5] [i_2]) ? var_3 : 48))))) ? (arr_10 [i_1] [i_2 - 2] [i_2 - 2] [i_4 + 3]) : (((-28 ? -28 : var_12)))));
                            var_22 = var_17;
                            arr_19 [i_1] [3] [i_3] [i_4] [i_5] = (((arr_7 [i_2 - 1] [i_3 + 1]) / -28));
                        }
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_22 [i_1] [i_2] = (min(var_8, (((65527 ? (min(var_13, var_14)) : var_4)))));

                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            var_23 -= var_11;
                            var_24 = ((~(((arr_6 [i_2 - 1]) ? (arr_6 [i_2 + 1]) : (arr_23 [i_7 - 1] [i_2] [i_2 + 1] [i_2] [i_3 - 1])))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_25 += var_15;
                            var_26 |= (arr_13 [i_2 - 2] [i_3 + 1]);
                            var_27 = ((var_17 ? (arr_1 [i_2 - 1]) : (arr_8 [i_3 + 2] [i_3])));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_30 [i_1] [i_2] [i_1] [i_6] [i_1] = (~1);
                            arr_31 [i_1] [i_1] [0] [i_6] [i_9] = 27;
                            var_28 = (max(var_28, var_11));
                        }
                        arr_32 [i_2] [i_2 + 2] [i_3] [3] [i_2] = var_1;
                        arr_33 [i_1] [i_1] [i_3 - 2] [i_6] [i_6] = ((~(((arr_23 [i_2 + 1] [i_2] [i_2] [i_2] [i_6]) ? (min((arr_23 [10] [10] [2] [i_2] [i_1]), var_15)) : ((var_12 ? (arr_20 [i_1] [i_2] [i_2] [i_6]) : var_15))))));
                        var_29 += ((((min(27, 27))) ? ((~(arr_17 [i_3 + 2] [i_3] [i_3] [i_3 - 1]))) : (~var_5)));
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_30 = (arr_1 [i_10]);
                        arr_36 [i_10] [i_10] [i_3] [i_10] = ((9 ? 9 : 139));
                        var_31 = ((~(arr_17 [i_1] [i_1] [i_1] [i_1])));
                        var_32 = ((~(((arr_35 [i_1] [i_2 - 2] [i_3 + 2] [i_10] [4]) * (arr_35 [i_1] [i_2 - 2] [i_3 + 2] [i_10] [i_1])))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_33 = (min(var_33, (arr_21 [i_1] [i_1] [i_3] [i_11])));
                        var_34 = ((~(arr_17 [i_2 - 1] [i_2 + 2] [i_3 + 2] [i_3 - 1])));
                    }
                    arr_40 [i_1] [4] [i_1] = ((+(((arr_8 [i_2 - 2] [i_2 + 2]) ? (arr_15 [i_2 + 1] [i_2 + 1] [i_3] [i_2 + 2]) : 0))));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        var_35 = (arr_44 [i_12] [i_12]);

        for (int i_13 = 1; i_13 < 16;i_13 += 1)
        {
            var_36 = (max(var_10, 139));
            var_37 = ((~var_9) == (((arr_42 [i_12]) ? (-32767 - 1) : 18446744073709551606)));
        }
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            arr_49 [i_12] [i_14] [i_12] = ((-(max((((var_8 ? 79 : var_12))), (max(var_10, (arr_42 [i_12])))))));
            arr_50 [i_12] [i_14] [i_12] = (min((min(0, 19)), ((min((arr_47 [i_12] [i_14] [i_12]), var_4)))));
            arr_51 [i_12] [i_14] [i_14] = (max((max((arr_1 [i_14]), var_0)), ((((arr_48 [i_12] [i_14]) ? (arr_48 [i_12] [i_14]) : (arr_48 [i_12] [i_14]))))));
            arr_52 [14] [14] [i_12] = (min((min((arr_45 [i_12] [i_14] [i_14]), var_9)), (min((arr_47 [i_12] [i_14] [i_14]), (arr_43 [i_12])))));
        }
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {

            /* vectorizable */
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                var_38 = ((var_2 ? (var_2 + var_13) : (arr_46 [i_12] [i_12])));
                var_39 = var_15;
                var_40 = (arr_57 [i_12] [i_16]);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        {
                            var_41 = ((var_16 + (arr_57 [i_18] [i_18])));
                            var_42 = var_8;
                            arr_63 [i_12] [i_12] [i_12] [i_17] [12] [i_12] = (var_13 ? (arr_43 [i_12]) : 15244629989548230470);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                arr_66 [i_12] [i_12] [i_19] = (((arr_62 [i_12] [i_12] [i_12] [i_19] [i_12] [i_19] [i_15]) < (arr_62 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])));
                var_43 = (arr_62 [i_12] [i_15] [i_12] [i_12] [i_12] [i_12] [i_19]);
                /* LoopNest 2 */
                for (int i_20 = 2; i_20 < 15;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        {
                            var_44 = -1;
                            arr_73 [i_12] = (((arr_41 [i_12]) || (arr_41 [i_12])));
                        }
                    }
                }
            }
            arr_74 [i_12] [i_12] [i_12] = var_1;
            var_45 = (max(var_6, (((var_15 ? var_12 : 255)))));

            for (int i_22 = 0; i_22 < 17;i_22 += 1)
            {
                arr_79 [i_12] = (((arr_0 [i_12]) ^ ((var_16 ? ((max(var_2, (arr_44 [i_12] [i_12])))) : (arr_46 [i_12] [i_15])))));
                var_46 = (max((arr_47 [12] [i_15] [9]), (arr_47 [i_12] [i_12] [i_12])));
                arr_80 [i_12] = var_10;
            }
            /* vectorizable */
            for (int i_23 = 0; i_23 < 17;i_23 += 1)
            {
                var_47 = var_8;
                arr_85 [i_12] = var_2;
                var_48 = 18664;
            }
        }
        /* vectorizable */
        for (int i_24 = 1; i_24 < 15;i_24 += 1)
        {
            arr_90 [i_12] = ((1 ? 24228 : (170525948 | 140735340871680)));
            var_49 = var_13;
            arr_91 [i_12] [i_24] [i_12] = ((~(arr_83 [i_24] [i_24] [i_24] [i_24 + 1])));
            arr_92 [i_12] = (arr_81 [i_24 + 1] [13] [i_24 - 1]);
        }
    }
    /* vectorizable */
    for (int i_25 = 0; i_25 < 23;i_25 += 1)
    {
        arr_97 [i_25] [i_25] = (arr_94 [i_25]);
        arr_98 [i_25] = (arr_95 [i_25]);
        var_50 = var_5;
    }
    #pragma endscop
}
