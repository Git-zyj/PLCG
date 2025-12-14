/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((-(-4724 != var_0))) - var_5));
    var_15 = (min(var_15, (((4708 < (((~33) ? (~var_13) : var_12)))))));
    var_16 = (2147483647 != 9223372036854775807);
    var_17 = (((~var_8) ? ((((~-4724) / var_2))) : (var_3 + var_12)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 *= -var_7;
        var_19 = 3636247297;
        var_20 = (((((arr_1 [i_0]) & ((~(arr_0 [4] [i_0])))))) ? -4724 : var_4);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((-(((arr_4 [i_1]) / var_5))));
        var_21 *= (((!var_6) < ((var_10 ? var_6 : 33))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_19 [i_3] [i_3] = var_12;
                            var_22 = ((~var_8) ? var_8 : var_6);
                            var_23 = ((((var_11 ? (arr_12 [i_1] [i_2] [i_2] [i_4] [5] [i_5]) : var_1)) < 17559));
                        }
                    }
                }
                arr_20 [i_1] [i_2] [i_3] = 246;
                var_24 = (min(var_24, ((-(arr_14 [i_3 + 2] [i_3 + 2] [i_3] [i_3 - 1])))));
            }
            for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
            {
                arr_23 [i_1] [i_1] [i_1] [i_1] = var_3;
                var_25 *= (arr_6 [7] [i_1] [i_1]);
            }
            for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        arr_33 [i_1] [i_1] = (!var_8);
                        arr_34 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] = ((((1778304890 == (arr_15 [i_2] [i_7] [i_2]))) ? var_5 : (var_1 & 12443732766472558614)));
                        var_26 = ((~(~var_6)));
                        arr_35 [i_9] = var_1;
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_1] [i_1] [i_1] [i_1] = (((arr_26 [i_7 + 2] [i_7 + 2] [i_7 - 1]) - (arr_12 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_8 - 1] [i_8 + 1] [i_8 + 1])));
                        var_27 = (((arr_4 [12]) >= ((((arr_15 [i_7 + 2] [i_7] [i_7]) != var_10)))));
                        var_28 = (max(var_28, var_6));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        var_29 ^= 34;
                        var_30 = (((arr_31 [i_8] [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_8] [i_8]) | (arr_31 [i_2] [i_8 - 1] [i_2] [i_2] [i_2] [i_2] [i_2])));
                        var_31 |= (((var_5 | var_2) ? (var_6 ^ -8834) : (var_6 != var_3)));
                    }

                    for (int i_12 = 4; i_12 < 14;i_12 += 1)
                    {
                        arr_43 [2] [2] &= var_4;
                        var_32 = (max(var_32, var_12));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_33 = var_13;
                        var_34 = ((var_8 - (arr_41 [i_1] [12] [i_8 - 1] [i_8] [i_8 - 1])));
                    }
                    for (int i_14 = 2; i_14 < 13;i_14 += 1)
                    {
                        arr_49 [i_14] [i_2] [1] [i_2] [i_1] = (((arr_40 [12] [i_14 - 1] [i_8 + 1] [10] [i_14] [i_14]) != var_1));
                        arr_50 [i_14] [i_8 - 1] [i_7] [i_2] [i_1] = (((15612977719870917737 ? var_6 : var_4)));
                        arr_51 [i_14] [2] [1] [2] [2] = var_9;
                    }

                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        arr_54 [i_1] [i_2] [i_7] [5] [5] = (165 % 56);
                        var_35 = -var_7;
                        arr_55 [i_1] [i_8] [i_15] = var_6;
                        arr_56 [i_15] [i_8] [i_1] [12] [i_1] = ((~(~var_6)));
                        arr_57 [i_15] [i_2] [i_1] [i_2] [i_1] = (arr_9 [i_1] [i_2] [i_7]);
                    }
                    arr_58 [i_8] [i_2] [i_7] [i_7] [i_7 + 1] [2] = (var_0 || (~var_11));
                    var_36 = ((((var_2 ? (arr_16 [i_8] [i_7] [i_7 + 2] [i_8] [0] [i_7]) : var_6)) > var_4));
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        {
                            arr_65 [i_1] [i_1] [i_1] [i_1] [i_17] = (~var_0);
                            var_37 += (((arr_12 [i_7 + 2] [i_2] [i_2] [i_16] [i_17] [i_7]) - (arr_12 [i_7 + 2] [i_2] [i_2] [i_16] [i_16] [i_1])));
                            arr_66 [i_1] [i_2] [i_7] [i_16] [i_17] [i_16] [i_16] |= ((+((34 ? (arr_17 [i_1] [i_2] [i_2] [i_1] [i_16]) : var_0))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    {

                        for (int i_20 = 2; i_20 < 13;i_20 += 1)
                        {
                            var_38 = (max(var_38, (((((0 ? (arr_53 [8] [i_19] [i_18] [i_2] [i_2] [i_1]) : 104)) ^ (var_7 == 2516662406))))));
                            arr_76 [i_1] [i_2] [i_2] [i_18] [i_2] [i_19] [i_20] &= (-(arr_75 [i_20 - 2] [i_20 - 2]));
                        }
                        for (int i_21 = 1; i_21 < 1;i_21 += 1) /* same iter space */
                        {
                            arr_79 [6] [i_1] [i_2] [i_1] = ((var_13 == (((((arr_24 [9]) < (arr_77 [i_1] [i_1] [i_18] [i_19])))))));
                            var_39 = (max(var_39, var_6));
                            var_40 = (~var_9);
                        }
                        for (int i_22 = 1; i_22 < 1;i_22 += 1) /* same iter space */
                        {
                            arr_82 [i_22] [i_19] [i_18] [i_18] [i_2] [i_1] = ((var_6 ? ((var_6 % (arr_17 [i_1] [i_1] [3] [i_1] [i_1]))) : (((arr_67 [i_22] [i_2] [i_18] [i_19]) ? 1 : var_2))));
                            arr_83 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 25730;
                            var_41 = ((-(var_1 % 22218)));
                        }
                        for (int i_23 = 1; i_23 < 1;i_23 += 1) /* same iter space */
                        {
                            var_42 = ((var_7 % (~var_2)));
                            arr_88 [i_23 - 1] [i_1] [i_19] [i_1] [i_2] [i_1] [i_1] = (((((arr_13 [i_1] [i_19] [i_1] [i_1] [i_1]) || var_11)) ? (var_12 > var_6) : (~var_8)));
                            arr_89 [i_1] [i_2] [i_1] [i_19] [i_23] = (((var_1 % var_1) > ((var_10 ? var_7 : 32767))));
                        }
                        var_43 |= (var_5 / var_12);
                        var_44 = ((-var_12 ? ((var_3 ? var_13 : -43)) : -var_1));
                    }
                }
            }
        }
        for (int i_24 = 0; i_24 < 15;i_24 += 1)
        {
            var_45 += (~var_7);
            arr_92 [i_1] [i_24] [i_24] = (((((var_7 ? var_0 : var_13))) ? ((32767 ? 34 : -1280470986)) : var_0));
            var_46 = (min(var_46, (~var_2)));
        }
        for (int i_25 = 0; i_25 < 15;i_25 += 1)
        {
            arr_97 [i_1] [i_1] &= (((arr_28 [i_1] [i_25] [i_25]) ? var_12 : var_6));
            arr_98 [i_1] [i_25] [i_25] = ((var_4 ? (!1062189207) : (((arr_53 [i_25] [i_25] [i_1] [i_1] [i_1] [i_25]) ? (arr_18 [i_1] [i_1] [i_1] [i_25] [i_25] [i_25]) : 11))));
            var_47 = (2516662413 + (-9223372036854775807 - 1));
        }
    }
    #pragma endscop
}
