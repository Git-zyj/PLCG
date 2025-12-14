/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 22544;
    var_20 = var_10;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 |= ((((!(arr_1 [9]))) ? var_17 : 1));
        var_22 = (min(var_22, -0));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_23 = 208;
                    var_24 = (~((~(arr_3 [i_1] [i_1]))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_25 = (max(var_25, (arr_7 [i_1] [i_2] [i_1] [i_4])));
                        arr_11 [i_4] [i_4] = ((1 * ((var_6 ^ (arr_1 [i_1])))));
                        var_26 |= (((arr_8 [i_1] [i_2] [i_3] [i_1] [i_4]) ? (arr_2 [i_2]) : 611755994));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_27 = ((((!(arr_15 [i_6] [i_6] [i_6]))) ? (!43277) : ((var_11 ? var_4 : (arr_15 [i_6] [i_5] [i_6])))));
                    var_28 = (((min(-49, (arr_1 [i_5])))));
                    var_29 &= (arr_5 [i_1]);
                    var_30 *= max((arr_16 [i_1] [2] [i_6]), (((arr_16 [i_1] [4] [i_6]) ? (arr_16 [i_1] [0] [i_6]) : (arr_16 [i_1] [1] [i_1]))));

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_21 [i_7] [i_5] [i_6] &= ((var_6 ? -var_7 : ((+(min((arr_0 [7]), var_10))))));
                        var_31 = (arr_9 [i_1] [i_5] [i_6] [i_6] [i_7] [i_6]);
                    }
                }
            }
        }
        var_32 = (((arr_9 [i_1] [i_1] [5] [i_1] [i_1] [i_1]) ? var_15 : (((arr_4 [i_1]) % (arr_18 [i_1] [i_1] [i_1] [i_1])))));
        arr_22 [i_1] = (!((max((((arr_14 [1] [i_1]) ? 611755993 : (arr_1 [i_1]))), (arr_13 [i_1] [i_1])))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                var_33 = (max(var_33, ((max((((!((max(var_6, (arr_26 [i_10] [i_8]))))))), (max((((arr_25 [i_8]) ? var_7 : 0)), var_4)))))));
                arr_33 [i_9] [i_10] = ((~(arr_24 [i_8])));

                for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_34 |= (!var_1);
                        var_35 = (min(var_35, var_7));
                        arr_39 [i_9] [i_9] [i_10] [i_10] [i_11] [i_12] = (arr_26 [i_8] [i_9]);
                    }
                    var_36 = (min(var_36, var_17));
                    var_37 *= arr_23 [i_8] [i_8];

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_38 ^= ((((max((max(1, var_8)), (((-(arr_37 [i_8]))))))) ? (((~(((arr_30 [i_8]) ? var_0 : var_15))))) : var_2));
                        var_39 = ((!(arr_24 [i_9])));
                        var_40 *= (((((~(arr_26 [1] [1])))) ? (((~(1 ^ -32659)))) : (((((65535 ? (arr_41 [i_13] [i_13] [i_13] [13] [1]) : var_11))) ? var_8 : 1))));
                        arr_42 [i_13] [i_9] [20] [i_9] [i_8] = ((((min(var_15, 1))) >> ((((~(arr_31 [i_8]))) + 4263))));
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        var_41 = (min(var_41, (((-(arr_26 [5] [5]))))));
                        var_42 = (min((arr_36 [i_8] [i_8] [i_8] [i_8] [i_8]), var_3));
                    }
                }
                for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
                {
                    var_43 = (min(var_43, ((((max(((22544 <= (arr_47 [i_8] [i_10] [1] [i_8]))), (arr_25 [i_8]))) ? ((((arr_44 [i_8] [i_15]) * (arr_26 [i_8] [i_9])))) : (max(var_18, ((-22544 ? 2127911255998715671 : var_1)))))))));
                    var_44 *= ((~(~18446744073709551610)));
                    var_45 ^= ((1 ? ((((-(arr_47 [i_8] [i_15] [16] [i_15]))) * (arr_24 [0]))) : (arr_34 [1] [i_9] [i_15] [i_10] [12] [i_15])));
                    var_46 = (max(var_46, ((((((max(var_2, -50)) - (((max((arr_45 [i_9] [i_9] [i_15] [i_9]), -30)))))) <= (((var_8 ? ((max(var_14, 9))) : (arr_26 [i_15] [3])))))))));
                }
                for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
                {
                    var_47 = max((((var_8 < (arr_49 [i_8] [i_9] [i_8] [i_16] [18] [i_16])))), -var_5);

                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        arr_55 [i_8] [2] [18] [14] [i_16] [1] |= (max(((((var_11 ? var_18 : var_10)))), (~var_2)));
                        var_48 -= (((((var_7 ^ ((min(var_18, var_7)))))) && 1));
                        var_49 = (max(var_49, ((((((!((max(1152921504606846976, (arr_51 [i_8] [i_16]))))))) | ((1 / (arr_35 [i_9] [i_10] [i_16] [i_17]))))))));
                        var_50 = -var_15;
                        arr_56 [i_8] [i_10] [i_16] |= (arr_48 [i_16] [i_9] [i_9] [i_9]);
                    }
                }
            }
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                arr_59 [i_18] [i_9] [i_18] |= ((9 ? ((~(!1))) : (max(((~(arr_30 [i_8]))), ((~(arr_46 [i_8] [i_8] [7])))))));
                arr_60 [i_9] [i_9] [7] [i_18] = (arr_30 [i_8]);

                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    var_51 = (((((((((arr_30 [i_8]) ? (arr_62 [i_8] [i_8] [i_8] [i_19]) : (arr_41 [i_9] [i_9] [i_18] [10] [i_18])))) & ((var_12 ? (arr_46 [i_8] [i_18] [i_19]) : (arr_50 [i_9] [i_18] [1] [i_19])))))) ? ((((((arr_28 [i_9]) ? var_9 : (arr_28 [i_9])))) ? (!var_8) : ((-14678 ? (arr_61 [3] [12] [i_9] [i_19] [i_9]) : var_5)))) : ((-((min((arr_62 [13] [i_18] [i_18] [21]), (arr_61 [i_8] [i_8] [i_9] [i_18] [8]))))))));
                    var_52 = -var_0;
                    arr_63 [i_9] [i_18] [i_18] [i_9] [i_18] [i_9] = ((var_13 ? ((max((arr_23 [i_19] [i_19]), (max((-32767 - 1), var_3))))) : var_3));
                    arr_64 [i_9] [i_9] = (arr_31 [i_19]);
                    var_53 = (arr_47 [i_8] [i_9] [i_8] [i_8]);
                }
            }
            var_54 = (min(var_54, ((((max((arr_51 [i_8] [i_9]), (((arr_29 [18] [i_9]) > 0)))) ? ((((((arr_50 [i_8] [i_8] [i_9] [2]) ? var_17 : var_0))) ? ((~(arr_49 [i_8] [i_8] [i_8] [1] [13] [2]))) : 35234)) : var_9)))));
            arr_65 [6] |= (min(((((((arr_29 [6] [6]) - var_6)) == var_15))), (var_15 - var_12)));
            var_55 = ((((-((var_7 ? var_5 : var_4))))) == (max((!9), ((var_10 ? 18446744073709551615 : var_18)))));
        }
        arr_66 [1] &= (min(((min(var_11, (arr_48 [10] [10] [10] [i_8])))), (min(((((arr_34 [i_8] [i_8] [1] [i_8] [1] [i_8]) ? 1 : var_1))), ((var_7 ? (arr_38 [12] [i_8] [i_8] [i_8] [12]) : var_2))))));
    }
    var_56 = var_17;
    #pragma endscop
}
