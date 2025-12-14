/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = 65535;
        var_11 = 0;
        arr_3 [i_0] = (var_10 * (1968278362 >= 6751080690869723573));
    }
    var_12 = var_7;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [2] = ((~(~0)));
        var_13 = (min(var_13, ((((var_8 && var_10) ? (arr_5 [i_1]) : 127)))));
        var_14 = (min(var_14, 202));
        var_15 *= ((1 ? var_1 : (arr_1 [i_1])));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_9 [2] &= ((!(arr_8 [1] [i_2])));
        arr_10 [i_2] = (min(var_2, (max((!var_3), ((75 ? var_2 : var_9))))));
        arr_11 [i_2] = ((((max(var_4, 225))) ? -85 : ((0 ? var_3 : (arr_4 [i_2])))));

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_16 [i_2] [i_3] = ((((min(8, 239))) - 31));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        {
                            arr_26 [i_2] [i_3] [i_4] [i_5] [i_2] = ((max(202, 18446744073709551615)));
                            arr_27 [i_2] [i_6 - 1] = var_8;
                            var_16 ^= (max((max((934489909 && 52198), var_0)), var_10));
                        }
                    }
                }
            }
            arr_28 [i_2] [i_3] = 17940437277359580686;
            arr_29 [1] [i_3 - 1] &= ((var_1 <= (!var_3)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_38 [i_2] [i_3] [i_2] [i_8] = (var_0 - 15);
                        var_17 = var_4;
                        arr_39 [4] [4] [i_2] [i_7] = ((var_4 <= ((max(var_5, var_8)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 7;i_9 += 1) /* same iter space */
    {
        arr_43 [i_9 + 3] = var_2;
        var_18 = (max(var_18, ((((arr_17 [i_9 + 2] [2]) / (arr_17 [i_9 - 1] [4]))))));
    }
    for (int i_10 = 1; i_10 < 7;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 3; i_11 < 9;i_11 += 1) /* same iter space */
        {
            var_19 = ((~(((arr_48 [2] [i_11 - 2] [i_11 + 1]) & (arr_48 [8] [i_11 - 3] [i_11 - 3])))));
            var_20 ^= (((((arr_18 [i_10] [i_10] [i_11 - 1] [i_11 + 1]) - ((var_1 ? 1 : (arr_24 [i_10] [i_10] [i_10] [i_11] [i_11]))))) / ((1503702145 ? -1 : (var_9 & var_7)))));
            arr_50 [i_10] [1] [1] = ((((1 * (((arr_13 [i_10 - 1] [8]) / var_1))))) ? ((~(((1 < (arr_40 [i_10] [i_11])))))) : ((((var_1 ? 1 : (arr_37 [i_10] [i_10] [i_10] [i_10]))))));
        }
        /* vectorizable */
        for (int i_12 = 3; i_12 < 9;i_12 += 1) /* same iter space */
        {
            arr_54 [i_10] = var_4;

            for (int i_13 = 1; i_13 < 9;i_13 += 1)
            {
                var_21 ^= (((arr_34 [6] [i_12 - 1] [i_13 - 1] [6]) >= var_0));

                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    arr_61 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = var_0;
                    arr_62 [i_14] |= ((1 ? 1 : (arr_0 [i_10 - 1])));
                    arr_63 [2] [i_10] [i_14] [2] [i_14] [i_14] = var_6;
                }
                for (int i_15 = 3; i_15 < 8;i_15 += 1)
                {
                    var_22 = (min(var_22, 1));
                    var_23 = (min(var_23, ((((((23 ? (arr_13 [i_13] [i_15]) : var_0))) ? (((arr_12 [i_10] [i_10] [i_10]) ? 18446744073709551591 : (arr_30 [i_10] [i_10 + 1] [i_10] [2]))) : (arr_57 [i_15] [i_15]))))));
                }
                arr_67 [2] [i_12] [i_12] [i_12] &= ((4294967295 ? 1 : 31116));
                var_24 ^= (arr_49 [i_10] [4] [4]);
                /* LoopNest 2 */
                for (int i_16 = 3; i_16 < 6;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        {
                            var_25 -= (arr_65 [i_16] [i_16] [i_16] [i_16]);
                            var_26 = (min(var_26, (((0 ? 247 : -1)))));
                            arr_74 [i_10 + 2] [i_10] [i_10 + 2] = var_10;
                        }
                    }
                }
            }
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                var_27 = ((var_1 >= (arr_45 [i_10 + 1])));
                arr_79 [i_10] = ((arr_71 [i_10] [i_10 - 1] [i_10] [i_10 + 3] [i_10] [i_10]) ? (arr_22 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10]) : ((((arr_70 [i_10] [i_12 + 1] [i_12] [i_18]) || var_10))));
            }
            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {
                arr_82 [i_10] [i_10] [i_10] = 57030;
                arr_83 [i_10] [i_12 - 1] [i_19] [i_19] = var_0;
            }
            arr_84 [i_10] [i_12] = (((((var_8 ? (arr_48 [i_10] [i_12] [i_12]) : 2908395752))) ? var_4 : (arr_48 [i_10] [i_10 - 1] [i_10 + 2])));
            arr_85 [i_10] = (arr_7 [i_10]);
            arr_86 [i_10] [i_10] = -var_2;
        }
        arr_87 [i_10] = ((var_10 <= (((135 * (max(3769809830, var_9)))))));
        var_28 = 79;
    }
    var_29 = 0;
    var_30 = var_9;
    #pragma endscop
}
