/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2139095040;
    var_21 = ((((var_6 <= var_16) ? var_17 : ((max(var_7, var_15))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_22 = ((!((min((((arr_4 [4] [4] [4]) / (arr_3 [i_1] [i_2]))), ((-(arr_4 [i_0] [i_1] [i_2 - 3]))))))));

                    for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_1] = 31550;
                        arr_11 [10] [i_1] [i_2] [10] |= ((6613540988456156605 <= (((max(2155872255, 5599834439471868657)) % (((((arr_2 [i_0] [i_1]) >= (arr_8 [i_0] [7] [3] [i_0])))))))));
                        arr_12 [i_0] [i_1] [0] [i_1] = (arr_9 [i_3 - 1] [i_3] [6] [i_1]);
                    }
                    for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_18 [i_1] = (max(((max(23202, (max((arr_5 [i_2] [10] [i_2]), 22023))))), (arr_0 [3])));
                            arr_19 [i_0] [i_1] [i_0] [i_1] [i_5] = (((31 + 4668) <= (~127)));
                        }
                        arr_20 [i_1] [i_4] [i_4 - 2] = (((((arr_5 [8] [i_1] [i_2 - 1]) >> (((arr_5 [i_1] [3] [i_2 - 2]) - 81)))) == (((arr_5 [6] [i_1] [i_2 - 1]) >> (((arr_5 [7] [i_2] [i_2 + 3]) - 98))))));
                    }
                }
            }
        }
        arr_21 [4] = -4242634003;
        arr_22 [i_0] |= ((((((arr_3 [6] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))) ? 22009 : (min(((((arr_3 [i_0] [i_0]) * -4668))), (((arr_14 [1] [i_0] [10] [4] [i_0] [1]) ? (arr_14 [i_0] [9] [i_0] [i_0] [i_0] [i_0]) : var_19))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_23 = (!var_15);
                            var_24 = ((~((((arr_38 [i_6] [i_7 + 1] [7] [10] [7] [i_10] [i_10]) <= 2139095028)))));
                        }
                        for (int i_11 = 4; i_11 < 9;i_11 += 1)
                        {
                            var_25 = (min(var_25, (~132)));
                            arr_42 [i_6] [6] [9] [i_6] [5] [i_7] = ((-(arr_36 [1] [10] [10] [i_8] [2] [i_9] [4])));
                        }
                        var_26 = (min(var_26, (((arr_5 [i_7] [i_7 - 1] [i_8 + 1]) ? 4294967295 : (arr_8 [6] [i_7] [1] [7])))));
                        var_27 ^= 21998;
                    }
                }
            }
        }

        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            arr_46 [6] [6] = (arr_38 [i_6] [6] [i_12] [0] [i_6] [4] [i_12]);
            var_28 -= ((((arr_23 [5]) ^ (arr_39 [i_6] [i_6] [i_6] [10] [7]))));
            var_29 = (max(var_29, (arr_39 [i_12] [i_12] [i_6] [i_6] [i_6])));
        }
        for (int i_13 = 1; i_13 < 10;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 9;i_15 += 1)
                {
                    {
                        var_30 = (arr_13 [i_15] [i_15] [i_15] [i_15 - 2]);
                        arr_56 [i_13] [i_13] [i_13] = ((!(arr_54 [i_14] [i_15 + 2] [i_14] [i_13 + 1])));
                        var_31 = (max(var_31, ((((arr_50 [i_15 + 2] [i_15 + 2] [i_13 - 1]) ? (arr_14 [i_6] [i_13] [i_13] [i_14] [i_14] [i_15]) : (arr_55 [i_13 - 1] [i_13 - 1] [2] [i_15] [i_15 - 1]))))));
                    }
                }
            }
            var_32 *= ((!(130 >= var_17)));
        }
        for (int i_16 = 1; i_16 < 10;i_16 += 1) /* same iter space */
        {
            arr_61 [i_6] [i_16 + 1] = ((240 ? 6 : 255));
            arr_62 [i_6] [9] [i_16] = ((-533 ? ((((arr_38 [i_6] [2] [i_16] [i_16] [i_16] [i_16] [7]) > (arr_30 [i_6] [i_16 + 1])))) : ((var_16 ? 21640 : var_5))));
            arr_63 [i_6] [i_6] [4] = ((255 + (arr_49 [i_16] [i_16 + 1] [i_16 + 1])));
        }
        var_33 = ((arr_17 [i_6]) * (arr_17 [i_6]));
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        for (int i_18 = 3; i_18 < 16;i_18 += 1)
        {
            {
                var_34 = (~528055564);
                var_35 = 51473;
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 17;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 18;i_20 += 1)
                    {
                        {
                            var_36 = (min((((!((max((arr_69 [i_18] [12] [1]), 49728)))))), (arr_68 [i_17] [i_18])));
                            var_37 *= (min(var_18, (min((arr_69 [i_18 - 3] [i_18 - 1] [i_18 - 1]), (arr_69 [i_18 - 3] [10] [i_18 - 1])))));
                        }
                    }
                }
                var_38 -= (min((((((153 ? var_12 : -5831))) ? (min(-418245519, var_19)) : (arr_65 [i_18 - 2]))), (arr_70 [i_18 - 1] [i_18 - 1] [1] [i_17])));
                arr_74 [9] = (((min((arr_70 [i_18 - 3] [i_18 + 1] [i_18 - 1] [16]), (arr_73 [i_17] [i_18 + 1] [i_18] [i_18]))) == ((-11 | ((max((arr_67 [i_17] [i_17] [i_17]), (arr_65 [i_18]))))))));
            }
        }
    }
    #pragma endscop
}
