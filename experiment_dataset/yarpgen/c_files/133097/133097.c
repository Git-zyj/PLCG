/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((63918 / var_9) ^ (((!var_8) * var_6))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = ((~(arr_2 [i_0])));

        for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_14 = (min(var_14, 1617));
                var_15 ^= (arr_3 [i_1 - 1] [i_1 + 1]);
                arr_9 [i_0] [i_1 + 1] [i_2] |= (arr_4 [i_1 - 2] [i_2]);
            }
            arr_10 [i_0] [i_0] [i_0] = (((((var_8 ? var_5 : 1630))) ? 63918 : (arr_5 [i_1 - 3])));
            var_16 = (min(var_16, (((63932 ? (arr_3 [i_1 - 2] [i_1 - 3]) : 1)))));
            arr_11 [i_1] = 3800875449;
        }
        for (int i_3 = 3; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_0] = (((arr_3 [i_3 - 2] [i_3 - 3]) ? var_8 : var_11));

            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
            {
                arr_19 [i_4] = (!0);

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_17 ^= (1621 ^ 11172650243972759081);

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_18 = (((arr_22 [i_3 - 1] [i_3 - 3]) ? (arr_15 [i_3 - 1] [i_3 - 3]) : 494091864));
                        var_19 = (max(var_19, ((((((102 ? var_7 : -232846016))) / var_1)))));
                    }
                }
                arr_26 [i_4] [3] [i_4] [i_4] = (-(1 & -27));
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_33 [i_8] [i_8] = 14987395272991357607;

                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_8] [i_3] [i_0] |= (((494091840 % 24) >> (var_5 - 71)));
                        var_20 = var_0;
                        var_21 = 46688;
                        var_22 = (arr_13 [7] [i_3 + 1] [i_3]);
                        arr_38 [1] [i_8] [1] [i_8] [i_8] [1] = (((var_8 * 63918) ? ((28 ? 0 : var_3)) : 1006632960));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        var_23 *= var_2;
                        arr_42 [i_0] [i_3 - 3] [i_0] [i_0] [i_8] = 1006632949;
                        var_24 = ((-18 % ((-71 + (arr_8 [i_0])))));
                    }
                }
                for (int i_11 = 2; i_11 < 23;i_11 += 1)
                {
                    var_25 = (max(var_25, 10));
                    arr_47 [i_0] [i_0] [i_0] [i_0] [17] [17] = ((-1 ? 32640 : (arr_25 [23] [i_3 + 1] [i_3 + 1])));
                    var_26 = ((var_6 ? var_4 : (arr_41 [i_0] [i_0] [i_7] [i_3] [i_3 + 1])));
                }
                for (int i_12 = 1; i_12 < 23;i_12 += 1)
                {
                    var_27 ^= ((((var_7 ? var_4 : (arr_2 [i_7]))) / (arr_23 [i_0] [i_12 + 1] [i_3 + 1] [i_0])));
                    arr_52 [i_7] = ((~(arr_21 [i_0] [i_3] [i_7] [i_7])));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    arr_55 [i_13] [i_13] [i_7] [i_3 + 1] [i_3 + 1] [i_0] = var_10;
                    arr_56 [i_13] [i_3] = ((17404 ? (arr_24 [i_0] [i_3 + 1] [i_7] [i_7] [i_3 - 2] [i_7]) : 1));

                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        var_28 = var_11;
                        arr_59 [i_0] [i_0] [i_7] [i_13] [i_14] = (arr_58 [i_0] [i_3 - 3] [i_3] [i_3 + 1] [i_3 - 3]);
                        var_29 = 0;
                        var_30 += (((arr_15 [i_3 - 3] [i_3 + 1]) ? var_5 : var_11));
                        arr_60 [5] [i_3 - 2] [i_3] [i_3] [i_3] = (arr_28 [i_3 - 1] [i_7] [i_14]);
                    }
                    arr_61 [i_0] [i_0] [5] [i_0] = (arr_23 [i_0] [i_3] [i_7] [i_13]);
                }

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    arr_65 [i_0] [i_3] [i_7] [i_15] = ((-70209260 ? (arr_25 [i_0] [i_3] [i_0]) : (arr_24 [20] [i_3 - 3] [14] [i_3] [i_3] [i_3 - 2])));
                    arr_66 [i_0] [i_0] [i_0] = (arr_22 [i_0] [i_0]);
                    var_31 -= 31;
                }
            }
            for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
            {
                arr_69 [i_0] [i_0] [i_0] [i_16] = (((((63929 ? -71 : 73))) || 80));
                arr_70 [i_16] [i_3] [i_16] = (((((1 ? 91 : 128855959))) ? (arr_15 [i_3] [i_3]) : (arr_23 [i_16] [i_3] [12] [i_16])));
            }
            var_32 = (min(var_32, (((1 ? 1 : var_11)))));
            var_33 = (max(var_33, ((((3605369697164809444 ? 1 : 3840367612))))));
            arr_71 [i_0] = arr_41 [i_0] [i_0] [14] [i_3] [i_3 - 1];
        }
        for (int i_17 = 3; i_17 < 23;i_17 += 1) /* same iter space */
        {
            arr_74 [i_17] [i_17 - 2] = 0;
            var_34 = (min(var_34, (((var_11 ? (~63) : (~var_0))))));
        }
    }
    for (int i_18 = 0; i_18 < 23;i_18 += 1)
    {
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                {
                    var_35 = (max(var_35, (arr_44 [i_18] [i_18] [i_19] [i_20] [i_19])));
                    arr_84 [i_18] [i_18] [i_19] [i_18] = ((-(arr_21 [10] [i_19] [i_18] [10])));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 23;i_22 += 1)
                        {
                            {
                                arr_89 [i_18] [i_18] [i_20] [i_18] [i_18] = ((var_0 ? (arr_81 [i_22]) : -200725093));
                                arr_90 [18] [18] [i_20] [i_21] [i_22] |= ((251 ? 3173669803 : 176));
                                arr_91 [i_22] [i_19] [i_20] [i_21] [i_22] [i_18] [i_18] = (~63);
                            }
                        }
                    }
                    arr_92 [i_18] [8] [i_20] = (arr_45 [i_18] [i_18] [i_18] [i_18] [i_18]);
                }
            }
        }
        var_36 = 45;
    }
    #pragma endscop
}
