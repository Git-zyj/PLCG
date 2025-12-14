/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = ((~((~(arr_0 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_15 = (((arr_3 [i_0]) ? (max(var_2, ((-9170544703994829484 ? var_12 : var_5)))) : ((0 ? (arr_1 [i_1] [i_0]) : (arr_3 [i_0])))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] = (((min((arr_6 [11] [i_3] [i_4]), ((max(1, 52)))))) ? 1 : ((var_7 * ((max(240, 2016))))));
                            var_16 = (min(15, 218));
                            var_17 = min((((var_1 ? (arr_7 [i_0] [i_3] [i_0] [i_0]) : var_10))), 3047649313);
                            var_18 = var_12;
                            var_19 = (max(var_19, (((18446744073709551591 >> (-2017 + 2071))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {

            for (int i_6 = 4; i_6 < 21;i_6 += 1) /* same iter space */
            {
                arr_21 [i_0] [i_5] [i_0] [i_5] = (((arr_9 [i_6] [21] [i_6 - 4] [i_6] [22] [i_6]) == 11));
                var_20 = (~var_3);
                var_21 = (max(var_21, ((((arr_12 [i_6] [i_6] [i_6 + 2] [i_6 + 2] [10] [i_6 - 2]) ? 108 : (arr_6 [i_6] [i_6] [i_6 + 2]))))));
            }
            for (int i_7 = 4; i_7 < 21;i_7 += 1) /* same iter space */
            {
                arr_25 [i_0] [i_5] [i_0] = (((arr_23 [i_7 - 2] [i_7 - 3] [i_7 + 2]) ? (arr_23 [i_7 - 2] [i_7 - 3] [i_7 + 2]) : 201));
                arr_26 [i_0] [i_0] [i_7 - 1] = ((!(((2704622442420837238 ? 127 : -7473688371169379129)))));
            }
            for (int i_8 = 4; i_8 < 21;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_22 += ((((var_8 ? 1170547579832340357 : var_4)) - (arr_32 [i_10] [i_8 - 4] [i_8 - 4] [i_0] [i_10])));
                            var_23 = (min(var_23, (arr_19 [i_10])));
                        }
                    }
                }
                arr_35 [i_0] [0] = -229;
                var_24 = (arr_6 [i_8] [i_8] [i_8]);
            }
            var_25 = 196;
            var_26 -= 96;
        }
    }
    for (int i_11 = 2; i_11 < 22;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
        {
            var_27 = var_6;
            arr_43 [i_11] = 52;
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
        {
            var_28 -= 248;
            var_29 = ((((min((104 <= 28), var_6))) ? ((-17281341131650356398 * (!var_5))) : (((min((arr_40 [i_11] [i_13] [i_11]), (arr_42 [i_11 + 1] [i_11] [i_13])))))));
            var_30 = var_3;

            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                var_31 *= ((~((min((arr_36 [i_11 + 2] [i_11 + 1]), var_5)))));
                var_32 = (max(((max(0, 0))), 7473688371169379129));
                arr_49 [i_11] [i_11] = (min(var_10, var_1));
            }
            /* vectorizable */
            for (int i_15 = 2; i_15 < 22;i_15 += 1)
            {
                var_33 *= 11;
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 23;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        {
                            arr_57 [i_11 + 1] [i_13] [i_11 + 1] = (32767 * 18273522439743490970);
                            var_34 = (((arr_37 [i_17]) ? -7473688371169379147 : (arr_55 [i_16 + 1] [i_16] [i_16 - 1] [i_16 - 1] [1])));
                        }
                    }
                }
            }
            for (int i_18 = 0; i_18 < 24;i_18 += 1)
            {
                var_35 = ((-(arr_58 [2] [5] [i_11 - 2])));
                var_36 &= ((((((((arr_46 [i_11 + 2] [i_11] [i_11 - 2]) && var_2)) ? (arr_56 [i_11 - 1]) : (65535 || 0)))) ? 218 : var_10));
                var_37 = ((((((arr_47 [i_11 + 2]) ? 2530603759 : (arr_47 [i_11 - 1])))) && 0));
            }
            /* LoopNest 2 */
            for (int i_19 = 3; i_19 < 23;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        arr_66 [i_11] [i_19] [i_19] = 26;
                        arr_67 [i_19] [i_13] [i_13] [i_13] [i_20] = (3604279104 / -8906078049954920177);

                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 24;i_21 += 1)
                        {
                            var_38 = (arr_56 [i_13]);
                            var_39 = var_12;
                            var_40 = ((var_8 ? var_7 : (arr_63 [i_13] [i_13] [i_19])));
                        }
                        for (int i_22 = 2; i_22 < 23;i_22 += 1)
                        {
                            arr_72 [i_11 - 2] [i_13] [i_13] [i_22] [i_19] [i_19] = (arr_70 [i_19 - 2] [i_13] [i_19 + 1]);
                            var_41 = 239;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 24;i_23 += 1) /* same iter space */
        {
            arr_75 [i_23] [1] = var_1;
            arr_76 [i_23] [i_23] = -var_0;
            var_42 ^= -196;
            arr_77 [i_11] [i_11] [7] = -0;
        }
        var_43 = (((~var_8) ? ((-(arr_56 [i_11 + 1]))) : 62207));
    }
    /* vectorizable */
    for (int i_24 = 2; i_24 < 16;i_24 += 1)
    {
        /* LoopNest 2 */
        for (int i_25 = 1; i_25 < 17;i_25 += 1)
        {
            for (int i_26 = 2; i_26 < 16;i_26 += 1)
            {
                {
                    arr_86 [i_26] [i_26 - 2] [14] [i_26] = ((!(arr_52 [i_24 + 2] [3] [i_26])));
                    arr_87 [i_24] [i_24 - 2] = (((arr_48 [i_24] [i_25] [i_26] [i_25 + 1]) <= var_5));
                    arr_88 [i_25 - 1] [8] &= (40 + 72);
                    var_44 = (min(var_44, (((60 % (arr_53 [i_25 + 1] [i_25 + 2] [i_25] [12] [i_25]))))));
                }
            }
        }
        var_45 *= var_2;
    }
    var_46 = (max(var_46, ((max((((var_7 ? var_12 : 4116463180074054111))), (var_9 + 6))))));
    #pragma endscop
}
