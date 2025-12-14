/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (min(var_0, var_3));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_0;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
            {
                var_11 = (arr_0 [i_1]);
                var_12 = -7515874815214122328;
                arr_9 [i_2] [19] [i_1] [i_0] = (((((10205674607837065685 ? -24 : 1035518585360922680))) ? var_5 : (arr_1 [4] [4])));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                arr_13 [i_3] [i_1] [i_0] = (((arr_4 [i_0] [i_1]) > (arr_4 [i_3] [i_3])));
                var_13 = var_9;

                for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [i_3] [i_4] [i_0] [i_4] = (arr_1 [i_4] [i_3]);
                    var_14 = (min(var_14, var_8));
                    arr_17 [i_4] = (((arr_0 [i_0]) ? var_6 : (arr_0 [i_4])));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    var_15 = ((!(((var_0 ? 24 : (arr_6 [i_1]))))));
                    arr_21 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = (arr_12 [i_0] [3] [i_0]);
                    var_16 = var_5;
                    var_17 = (((arr_19 [i_0] [i_0] [16] [13]) <= (arr_19 [i_0] [i_1] [i_3] [i_5])));
                    var_18 = var_9;
                }
                arr_22 [i_0] &= var_6;
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                arr_26 [i_0] [i_0] [i_0] [i_0] = (arr_24 [i_6] [i_1] [i_0] [i_0]);
                var_19 = ((~(arr_6 [19])));
            }
            var_20 = (-52 > -30);
            arr_27 [i_0] [i_1] [5] = (!var_0);
            var_21 -= (arr_1 [i_0] [i_1]);
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            var_22 = (arr_14 [i_7] [i_7] [i_7] [i_7]);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_23 &= var_2;
                        var_24 = max(((((min((arr_0 [i_9]), 84))) ? (arr_14 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0]))), ((min(((((arr_5 [i_0] [i_0] [i_8]) && (arr_30 [i_9] [i_9])))), ((-9223372036854775796 ? -105 : var_5))))));
                        var_25 = ((-(((((arr_6 [i_9]) ? 373977618021141330 : 34359736320)) - (arr_31 [i_0] [i_7] [i_7])))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        arr_38 [i_7] |= (((min(2544652493565133378, (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [9]))) | (min(2, 16938740943858072746))));
                        var_26 |= -221198649403924921;
                    }
                }
            }
        }
        var_27 ^= -106;
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
    {
        var_28 = (((240 ^ 9263234320001312195) > (((arr_36 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) ? 146 : (min(34359736320, 34))))));
        arr_41 [i_12] = 17;
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                {
                    var_29 -= ((-1601155232 ? 67 : (arr_11 [i_13] [i_13])));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            {
                                var_30 = (min(17, 206));
                                arr_54 [i_15] [i_15] [i_15] [16] [i_15] [22] = ((((arr_20 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) && (arr_11 [i_14] [i_15]))));
                                arr_55 [i_12] [i_13] [i_14] [i_12] [i_16] [i_16] = (arr_20 [17] [i_13] [i_13] [19] [i_15] [9]);
                                var_31 = (((max(((min((arr_40 [i_16]), var_3))), (min(1508003129851478881, -1)))) + ((((!((max(-7919247366784690330, var_0)))))))));
                                var_32 = (min((max((min((arr_29 [9] [0] [i_14]), (arr_35 [i_13] [i_14] [i_16]))), ((((arr_40 [i_16]) ? var_3 : var_4))))), (((((((arr_25 [i_12] [i_13]) != var_7))) == (((var_7 < (arr_45 [i_16] [i_15] [i_13])))))))));
                            }
                        }
                    }
                    var_33 = (arr_23 [i_12] [i_12]);
                }
            }
        }
    }

    for (int i_17 = 0; i_17 < 15;i_17 += 1)
    {
        arr_60 [i_17] [i_17] = (0 * (min(149, (arr_19 [i_17] [i_17] [i_17] [i_17]))));
        arr_61 [i_17] [i_17] = (max(((var_2 * (arr_59 [2] [i_17]))), (arr_59 [i_17] [i_17])));
        var_34 = (max((arr_7 [i_17] [i_17]), -var_0));
        arr_62 [i_17] = (-848010240186002616 / var_4);
        arr_63 [i_17] [i_17] = var_6;
    }
    for (int i_18 = 0; i_18 < 13;i_18 += 1)
    {
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 13;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 13;i_22 += 1)
                        {
                            {
                                var_35 = ((arr_37 [i_18] [i_19] [i_19]) - 18446744073709551615);
                                var_36 = (max(var_36, ((max(var_2, (arr_8 [i_20]))))));
                                var_37 = (((arr_68 [i_22] [i_21] [i_20]) ? (arr_66 [i_18]) : (!40)));
                                var_38 = ((arr_72 [i_18]) / (~229));
                            }
                        }
                    }
                    arr_77 [i_18] [i_18] [i_18] [i_18] = ((!((((arr_71 [i_18] [i_20]) ? (arr_67 [i_18]) : -373977618021141308)))));
                    var_39 = (((((min(5, (arr_11 [i_19] [i_19])))) + (2 | 2688257731331085810))));
                }
            }
        }
        var_40 = (((min((!139), ((var_8 || (arr_8 [i_18]))))) ? 187 : (((var_0 && (arr_36 [i_18] [i_18] [i_18] [13] [i_18] [i_18]))))));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 14;i_23 += 1)
    {
        var_41 = ((~(arr_59 [i_23] [i_23])));
        var_42 = (((arr_35 [i_23] [i_23] [i_23]) || (arr_36 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])));
    }
    var_43 += (((!var_3) ? (((var_7 ? var_0 : var_4))) : ((((1515279532231707283 != var_6) >= -var_4)))));
    #pragma endscop
}
