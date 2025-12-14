/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((-27541 - 27533) >= ((1 ? 1 : 1))));
        arr_3 [i_0] = ((-(1 - 1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 += (min(((var_13 ? ((min((arr_5 [i_0] [i_1] [i_2 - 1]), 1))) : (min(var_11, 192273647)))), (min((!var_8), ((var_0 ? var_11 : var_8))))));
                    var_15 = (max(var_15, (((((((var_8 ? var_0 : var_11))) ? (var_1 * var_5) : var_4))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_16 = (min(var_16, ((min((1 | -188039665), (max(-1298176964, (min(11, (arr_18 [17] [17] [i_5] [i_5]))))))))));
                        arr_19 [i_5] [i_4] [i_3] [13] [i_3] = 0;
                    }
                }
            }
        }
        var_17 = var_3;
    }

    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_18 = ((-31240 * ((-(!var_7)))));

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_25 [i_7] = ((3148563980 ? 64544 : 4294967293));
            var_19 = 1;
            arr_26 [i_7] = (max(-1718046839, (min(var_6, var_1))));
            arr_27 [i_7] [i_7] = -1811276899869188258;
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            var_20 ^= var_11;
            arr_34 [i_9] [i_9] [i_9] = (30645 | 12582912);
        }
        for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
        {
            arr_37 [i_9] = var_13;
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        {
                            arr_47 [i_9] [i_11] [i_12] [i_12] [i_9] = (!32741);
                            var_21 ^= (((((1942647191 ? var_4 : (arr_8 [17])))) ? (arr_6 [i_11 + 1] [i_11 - 2] [i_11 + 1] [i_11 - 1]) : var_7));
                        }
                    }
                }
            }
        }
        for (int i_15 = 2; i_15 < 15;i_15 += 1) /* same iter space */
        {
            arr_51 [i_9] [i_15] [i_9] = var_5;
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    {
                        arr_57 [i_9] [i_16] [i_17] = (arr_7 [i_15 - 2] [i_15] [i_15 - 2] [i_16 - 1]);
                        arr_58 [i_9] [i_9] [i_16 - 1] [1] = (((arr_40 [i_16 - 1] [i_15] [i_15 + 3]) ? (arr_40 [i_16 - 1] [i_16 - 1] [i_15 + 3]) : (arr_40 [i_16 - 1] [i_15] [i_15 + 3])));

                        for (int i_18 = 0; i_18 < 18;i_18 += 1)
                        {
                            var_22 = 2614690241;
                            arr_62 [i_15] [i_15] [11] [9] [i_9] [i_9] [i_15] = (arr_43 [i_9] [i_16] [2] [13]);
                        }
                    }
                }
            }
            arr_63 [i_9] [i_15] = (var_3 ? (arr_41 [i_9] [i_15 - 1]) : var_11);
            arr_64 [i_9] = (arr_53 [i_15 - 1] [i_9] [i_15 - 2]);
            var_23 = (-19077 <= 1);
        }
        arr_65 [i_9] = var_2;
        arr_66 [i_9] = (((!-32750) ? var_2 : (!var_5)));
        var_24 = (((var_0 ? (arr_1 [i_9]) : var_1)));
        arr_67 [i_9] [i_9] = (arr_43 [i_9] [i_9] [i_9] [i_9]);
    }
    for (int i_19 = 0; i_19 < 21;i_19 += 1)
    {

        for (int i_20 = 0; i_20 < 21;i_20 += 1)
        {
            var_25 = (max((((-(arr_6 [i_19] [i_19] [i_19] [i_19])))), ((27519 ? (arr_7 [i_19] [i_20] [i_20] [i_20]) : (max(4294967270, 108))))));
            var_26 = (min((min((arr_14 [i_19] [i_20] [1]), (arr_14 [i_19] [i_19] [i_20]))), (~1)));
            var_27 = (max((+-1), ((var_8 ? ((var_10 ? 30097 : var_9)) : ((var_6 ? (arr_18 [i_20] [i_20] [i_20] [i_20]) : var_5))))));
        }
        arr_73 [i_19] = max((arr_11 [i_19] [i_19]), (-27 + 329020856));
    }
    var_28 = (((var_10 ? 1 : var_6)));

    for (int i_21 = 4; i_21 < 14;i_21 += 1)
    {
        var_29 += -var_8;
        arr_76 [i_21] [i_21] = var_7;
        var_30 = (max(var_10, ((-(arr_55 [i_21 - 3] [i_21 + 2] [i_21 + 2] [i_21 - 2])))));
    }
    for (int i_22 = 1; i_22 < 10;i_22 += 1)
    {
        arr_79 [i_22] = (max((max(1, -14)), (((max((arr_14 [i_22 + 2] [i_22] [i_22]), -3)) - ((1 ? 30 : var_12))))));
        var_31 *= ((((((var_4 ? var_0 : var_2)))) ? (max((~-1671), (((arr_60 [4] [i_22] [11] [4]) ? var_3 : var_12)))) : (!var_12)));
    }
    for (int i_23 = 0; i_23 < 22;i_23 += 1)
    {
        var_32 = (max(var_32, 12582900));
        arr_82 [14] = max(-var_12, (arr_4 [i_23] [i_23]));
        var_33 = (max(((!(((arr_4 [i_23] [i_23]) || (arr_7 [i_23] [i_23] [i_23] [i_23]))))), ((!(!var_10)))));
        var_34 = (min(var_34, (((-((max(1, 31357))))))));
    }
    var_35 |= (max((((((-2147483647 - 1) ? var_12 : var_6)))), (1930164923 / 5)));
    #pragma endscop
}
