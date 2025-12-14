/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((18446744073709551615 ? 1 : var_3)))));
    var_19 = var_16;
    var_20 |= (min((~-101), var_13));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min((max(((var_3 * (arr_0 [i_0] [i_0]))), -var_15)), ((min((!255), (max(var_12, 26882)))))));
        arr_3 [i_0] = (-(max(-49194, var_13)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_21 = (max((min(((min((arr_4 [i_1]), var_7))), (max(var_4, 4294967295)))), (!var_6)));
        var_22 |= (!-1);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_23 -= var_9;
        var_24 = ((!(((~(arr_7 [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    var_25 = min(((~(!-2))), (max((!var_6), ((var_9 ? -4 : var_8)))));
                    arr_16 [i_4] [i_2] [i_3] [i_2] = ((!((min((var_3 > 26696), (((arr_12 [i_4]) ? (arr_15 [i_3]) : 1)))))));
                }
            }
        }
        arr_17 [i_2] = var_15;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_26 += (max((min((!var_11), ((~(arr_19 [i_9]))))), -var_8));
                            var_27 = ((22690 && (((((((arr_20 [i_8]) ? 1 : -16))) ? (arr_29 [i_9] [i_8] [i_6] [i_6] [i_5]) : (min(-4, (arr_22 [i_5] [i_6 + 4] [i_7 + 2]))))))));
                            var_28 = var_0;
                        }
                    }
                }
            }
            var_29 = 1;
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            arr_34 [i_5] [i_10] [i_10] = (min(((-(26696 - 254))), ((min(var_12, (min(1, var_17)))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 12;i_12 += 1)
                {
                    {

                        for (int i_13 = 2; i_13 < 14;i_13 += 1)
                        {
                            var_30 -= 3499924719;
                            var_31 = (max(var_31, (((((min((arr_26 [i_5]), ((max((arr_39 [i_10] [i_11] [i_12 - 1] [i_13 - 2]), 255)))))) ? ((max(((max(var_3, (arr_30 [i_5])))), (arr_25 [i_5] [i_10])))) : (((1 * 0) - (arr_36 [i_12 - 2] [i_13] [i_12 - 2] [i_13]))))))));
                            var_32 = ((!(arr_20 [i_12])));
                        }
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_33 = (min((min((arr_38 [i_5] [i_12 - 2] [i_14]), ((0 ? 255 : (arr_35 [i_5] [i_11] [i_12 + 2] [i_14]))))), (((arr_23 [i_12 + 3] [i_12 - 1]) | 4294967042))));
                            var_34 = (((max(((min((arr_32 [i_10] [i_12]), 83))), -1))) ? var_2 : (max((!167), 6659258280188876488)));
                            var_35 = -var_1;
                            var_36 = (arr_44 [i_5] [i_10] [i_11] [i_12 + 1] [i_14]);
                        }

                        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                        {
                            var_37 = ((((!(((-21575 ? var_6 : var_13))))) ? (--0) : (arr_43 [i_12 + 1] [i_12 + 2] [i_12 - 1] [i_12 - 2] [i_12 + 3])));
                            var_38 = 1;
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                        {
                            var_39 = ((((max((max(var_14, var_1)), (!25684)))) ? (((!(arr_39 [i_12] [i_12] [i_12 - 1] [i_12])))) : ((min(254, 16109)))));
                            var_40 = (~var_3);
                            arr_52 [i_16] [i_12] [i_11] [i_10] [i_5] &= ((((min(((4 ? 231 : -2147483625)), 3))) ? ((+(((arr_33 [i_5] [i_5]) ? (arr_33 [i_5] [i_5]) : (arr_41 [i_5] [i_10] [i_11] [i_12 - 1] [i_16]))))) : ((max((arr_51 [i_5] [i_10] [i_11] [i_11] [i_16]), var_4)))));
                            var_41 = var_14;
                        }
                        for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                        {
                            var_42 = (((0 == 6659258280188876472) ^ (min(-2147483625, ((3745 ? var_7 : 0))))));
                            arr_55 [i_17] [i_5] [i_12 + 2] [i_12] [i_10] [i_5] [i_5] &= (min((arr_49 [i_5] [i_5] [i_11] [i_12] [i_17]), var_3));
                            arr_56 [i_17] [i_12 - 2] [i_11] [i_17] [i_17] = (((!var_17) ? ((var_5 / ((min(16380, (arr_46 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))) : var_12));
                        }
                        var_43 = ((~(max(2097024, (arr_40 [i_11] [i_12 + 3] [i_12] [i_12 + 2] [i_12 + 1])))));
                    }
                }
            }
            arr_57 [i_5] [i_5] = ((((~(arr_43 [i_5] [i_5] [i_10] [i_10] [i_10]))) <= (arr_43 [i_10] [i_10] [i_5] [i_10] [i_5])));
        }
        for (int i_18 = 0; i_18 < 15;i_18 += 1)
        {
            var_44 = var_11;
            var_45 = (((min((arr_28 [i_5]), (arr_27 [i_5] [i_5] [i_18] [i_18] [i_18] [i_18]))) * ((((!(arr_22 [i_5] [i_5] [i_18])))))));
            var_46 = 18446744073709551610;
            arr_61 [i_5] [i_18] = (min((((~((var_15 ? 0 : var_17))))), (min((!36328), ((var_1 ? 11875005642683378208 : var_13))))));
        }

        for (int i_19 = 1; i_19 < 14;i_19 += 1)
        {
            var_47 = var_13;
            arr_64 [i_5] = ((~((-(!var_13)))));
            var_48 = (min((((arr_23 [i_19 - 1] [i_19 - 1]) ? 61809 : (arr_36 [i_19 + 1] [i_19 - 1] [i_19 + 1] [i_19]))), (((!(((15740489883128853695 ? 622582204 : (arr_41 [i_5] [i_5] [i_19] [i_5] [i_5])))))))));
        }
    }
    #pragma endscop
}
