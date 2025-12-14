/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-1 ? var_9 : (((var_12 - var_2) ? var_5 : (var_5 & -5844)))));
    var_18 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 &= -543783017;
            var_20 = (arr_3 [i_0]);
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_21 = (max(var_21, (((arr_8 [i_2]) ? var_15 : var_5))));
                        arr_18 [i_0] [11] [i_0] = (((arr_3 [8]) / (((arr_9 [i_0] [i_3] [12]) % -1840410783))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                var_22 = (min(var_22, ((((arr_19 [i_7] [i_6]) - ((-((-7963032448669463279 + (arr_24 [7] [i_6]))))))))));
                var_23 = ((+(((arr_27 [i_7] [i_7] [i_7 + 1]) - (arr_27 [i_7] [i_7] [i_7 + 1])))));
                arr_29 [i_5] [i_6] [i_7] = (min((((!(!-1840410775)))), (arr_24 [i_5] [i_6])));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_24 *= ((-var_3 << ((((~(arr_27 [i_5] [i_5] [i_5]))) - 3877030543743702087))));
                var_25 = (arr_26 [i_5] [i_5] [i_5]);
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                arr_37 [i_9] [19] [i_5] = ((3336172285 % (((-1840410783 ? 1840410783 : -39)))));
                arr_38 [i_6] = (((arr_34 [i_5] [i_5] [i_6] [i_9]) ? 2937072950822965999 : 693452485));
            }

            /* vectorizable */
            for (int i_10 = 2; i_10 < 19;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 17;i_12 += 1)
                    {
                        {
                            arr_46 [i_5] [i_6] [i_10] [i_5] [i_6] [i_12] = (var_9 == (arr_33 [i_5] [i_5] [i_10 - 2] [i_10]));
                            var_26 ^= (((arr_35 [i_5]) == (arr_31 [i_10 - 1] [i_10 - 2] [i_10 - 1] [i_5])));
                            var_27 = (1840410792 + var_5);
                            var_28 |= ((-(arr_27 [i_10 - 1] [i_10 - 2] [i_12 + 1])));
                        }
                    }
                }
                var_29 &= (arr_35 [i_5]);
                var_30 ^= var_1;
                var_31 -= var_4;
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                var_32 = (((arr_26 [i_13] [i_5] [i_5]) == (arr_26 [5] [i_6] [i_5])));
                var_33 ^= ((!(((var_16 ? -14 : var_11)))));
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                var_34 = (min(var_15, ((-(arr_52 [i_5] [i_6] [i_5])))));
                var_35 ^= (arr_44 [i_5] [i_6] [i_6] [i_6] [i_6] [i_14] [i_14]);
                var_36 = 4610560118520545280;
            }
            /* vectorizable */
            for (int i_15 = 4; i_15 < 18;i_15 += 1)
            {
                var_37 = ((693452478 ? (228637041 < 76) : (((var_3 || (arr_42 [i_5]))))));
                var_38 = ((0 || (arr_24 [i_5] [i_15])));
            }
            var_39 = (-5176067488004731621 != (((arr_53 [i_5]) ? (arr_53 [i_5]) : var_6)));
        }
        for (int i_16 = 0; i_16 < 20;i_16 += 1) /* same iter space */
        {
            var_40 ^= (((((1241822980 ? -20007 : var_6))) ? 185 : (min((arr_36 [i_16]), var_3))));
            var_41 = var_3;
            var_42 = (((((~(arr_24 [i_5] [i_5])))) - (arr_58 [i_5] [i_16])));
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            var_43 *= -var_3;
            arr_62 [i_17] [i_5] = 10;
        }
        arr_63 [10] = ((((((arr_26 [i_5] [4] [i_5]) % (arr_26 [i_5] [i_5] [i_5])))) ? ((max((arr_26 [12] [i_5] [i_5]), var_7))) : var_7));
        var_44 = ((arr_51 [i_5] [i_5]) != 218);
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        arr_67 [16] |= ((~(((arr_66 [i_18]) ? (arr_66 [i_18]) : (arr_66 [i_18])))));
        arr_68 [14] &= ((18446744073709551613 ? ((((min((arr_64 [14] [i_18]), (arr_66 [7])))) ? (arr_65 [4]) : (((var_9 ? 186 : (arr_66 [i_18])))))) : (arr_66 [i_18])));
        arr_69 [12] &= 8;
        arr_70 [i_18] [i_18] = (((((min(-4610560118520545263, -2937072950822965986)) < var_7)) ? (min(7633863288287592428, 4610560118520545259)) : var_11));
    }
    #pragma endscop
}
