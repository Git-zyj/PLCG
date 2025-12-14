/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_9 + var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] |= (arr_3 [8]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = (((((-(arr_8 [i_0])))) ? (((arr_8 [i_3]) << (((max(var_5, (arr_0 [i_0] [16]))) - 58)))) : var_0));
                                var_12 |= ((var_1 ? (max(var_3, (var_6 / 1))) : 0));
                                arr_15 [i_4] [i_4] [i_2] [i_4] [i_0] = ((!(((188 ? (((193 - (arr_8 [15])))) : ((var_7 ? 172 : (arr_2 [i_4]))))))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_13 ^= (((arr_10 [i_5]) && -var_3));
        var_14 *= (((arr_5 [i_5]) ? (!var_0) : var_9));
        var_15 |= ((-(arr_14 [4])));
        arr_19 [i_5] = ((var_2 ? (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_5 [i_5])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_16 = ((-(var_0 || 52682)));
        var_17 = var_3;

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_18 = ((var_8 ? 2147483647 : (arr_13 [i_6] [i_6] [i_7] [i_8] [i_9] [i_10])));
                            var_19 = (max(var_19, (arr_3 [i_9])));
                        }
                        var_20 += (3898021153 && var_8);
                    }
                }
            }

            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                var_21 += (arr_10 [i_6]);
                arr_35 [i_6] [i_6] = (arr_30 [i_7]);
                var_22 |= 238;
                var_23 = var_5;
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {
                arr_39 [14] [i_6] [i_12] = (((arr_16 [i_6]) ? 121 : (arr_31 [i_6] [i_12] [i_7] [i_7] [i_6] [i_6])));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_24 *= (arr_42 [i_6] [i_12] [i_12] [3] [i_13 + 1] [i_14] [i_12]);
                            arr_46 [i_14] [i_13] [i_6] [i_12] [i_6] [1] [i_6] = 86;
                            arr_47 [i_6] [i_6] [i_6] [i_13 + 2] [i_14] [i_6] = 65535;
                        }
                    }
                }
            }
            var_25 -= (((arr_41 [i_6] [2] [i_6] [i_6]) - ((~(arr_38 [1] [i_6] [i_7] [i_7])))));
            var_26 -= arr_13 [i_6] [i_7] [5] [i_6] [i_7] [5];
        }

        for (int i_15 = 4; i_15 < 18;i_15 += 1)
        {
            var_27 = (!-var_1);
            var_28 = ((var_5 == (~18446744073709551605)));

            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                arr_54 [i_6] [i_6] = ((55 ? var_1 : ((var_0 ? (arr_29 [i_6] [i_15] [i_16]) : var_5))));

                for (int i_17 = 0; i_17 < 20;i_17 += 1) /* same iter space */
                {
                    var_29 = (max(var_29, (arr_0 [i_6] [i_6])));
                    arr_58 [i_6] = ((var_9 > (((var_3 >> (var_5 - 69))))));
                }
                for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
                {
                    arr_61 [0] &= ((18446744073709551605 ? 1 : 6693220234154739252));
                    var_30 = ((-(arr_30 [i_15 - 3])));
                }
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    arr_64 [i_6] [i_6] [i_16] [i_6] = ((((-(arr_24 [i_6] [i_15] [i_19]))) >= 162));
                    var_31 = (arr_18 [i_6]);

                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        var_32 = -1;
                        var_33 = -923566228;
                    }
                }
            }
            arr_67 [i_6] = var_9;
        }
        for (int i_21 = 0; i_21 < 20;i_21 += 1)
        {
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 20;i_23 += 1)
                {
                    {
                        var_34 = (arr_27 [i_6] [i_6] [i_22]);
                        var_35 = (arr_51 [i_6] [i_21] [i_22] [i_23]);
                        arr_74 [10] [10] &= (~9096146147381877600);
                        arr_75 [i_6] [i_6] [i_6] [i_6] = (-10323 < 939524096);
                    }
                }
            }
            var_36 -= ((10347 >> (((arr_48 [i_6]) - 436059581))));
            arr_76 [i_6] [i_6] [i_6] = (((((var_5 - (arr_60 [i_6] [i_21] [i_21] [i_6] [i_6] [i_6])))) & ((var_1 * (arr_26 [i_6] [i_6] [i_21] [i_6])))));
            var_37 = (1710008768 % var_4);
        }
        for (int i_24 = 0; i_24 < 20;i_24 += 1)
        {
            var_38 = (max(var_38, var_0));
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 20;i_26 += 1)
                {
                    {
                        var_39 += (10299 * var_9);
                        arr_85 [i_6] [i_6] [i_6] [i_6] [9] = 176;
                        var_40 = ((10304553344538564444 / (arr_83 [i_25] [i_25] [i_25] [i_26])));
                    }
                }
            }
        }
        var_41 ^= ((arr_33 [i_6] [i_6] [10] [i_6]) + (arr_33 [i_6] [i_6] [14] [4]));
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 20;i_27 += 1) /* same iter space */
    {
        var_42 = (min(var_42, (((((!(arr_63 [6] [6]))) ? (var_5 * var_7) : 1909947069)))));
        var_43 = (((!var_9) == ((9 ? var_2 : (arr_80 [i_27] [i_27])))));
        var_44 = (((~var_4) ? var_3 : ((((arr_38 [i_27] [i_27] [i_27] [i_27]) == 65524)))));
    }
    var_45 &= (-2147483647 - 1);
    var_46 = max((((var_9 <= (((max(var_2, 1))))))), (((9098116309862770423 || var_7) & (min(var_8, var_7)))));
    #pragma endscop
}
