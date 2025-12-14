/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((min(124, var_2)) >= 16760832)))) != (((var_0 + 124) ? (var_2 >= var_4) : ((var_7 ? var_3 : var_10))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_19 = (max(var_19, (((((min((min(-16760821, var_3)), (1 | 108)))) && ((max((!-16760845), (arr_0 [i_0])))))))));
        var_20 -= arr_1 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_21 = (min(var_21, (arr_6 [i_1] [i_1])));
                            arr_13 [i_3] = 18446744073709551602;
                            var_22 = (!var_1);
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_23 = (max(var_23, (arr_15 [i_1] [i_1] [i_3 - 1] [i_2] [i_6])));
                            var_24 = (((!19365) > ((var_9 ? (arr_17 [i_1] [i_1] [i_1] [i_4] [i_3]) : 3228047567))));
                        }
                        var_25 = var_3;
                        var_26 = ((var_3 ? -var_17 : (((arr_10 [i_3] [i_3]) >> (var_13 + 32331)))));
                    }
                }
            }
        }
        arr_18 [i_1] = (((((arr_17 [i_1] [i_1] [i_1 + 1] [i_1] [14]) > (arr_4 [i_1 - 1]))) ? var_13 : -var_12));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_27 *= ((((((arr_20 [i_9]) & var_1))) ? (((arr_14 [i_7] [i_7] [i_9]) ? (arr_7 [i_9] [i_8]) : ((var_3 ? 234881024 : var_2)))) : (((arr_2 [i_9]) | -var_4))));

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_28 = ((-(arr_20 [i_7])));
                        var_29 = (max(var_29, ((((((945168099 % -16760832) | ((124 + (arr_0 [i_10])))))) ? (((((var_6 ? (arr_20 [i_10]) : 119))) ? ((((arr_0 [i_8]) || var_12))) : (((arr_2 [i_7]) | var_8)))) : var_14))));
                        arr_28 [i_7] [i_8] [i_7] [i_7] [i_10] [i_10] = ((((((min(var_17, 1)) & ((var_13 ? (arr_14 [i_8] [i_8] [i_10]) : (arr_21 [i_7] [i_7] [i_7])))))) ? 1 : var_5));
                        var_30 = (min(var_30, ((-(((((-16760856 - (arr_0 [i_7])))) ? (var_7 / -26637) : -16760832))))));
                    }

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_31 *= (max(var_5, var_17));

                        for (int i_12 = 3; i_12 < 17;i_12 += 1)
                        {
                            var_32 = (arr_9 [i_7] [i_7] [i_7] [i_7]);
                            var_33 = (max(var_33, (arr_16 [i_8] [i_8] [i_9] [i_11] [i_8] [i_9])));
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 14;i_13 += 1)
                        {
                            var_34 = (arr_31 [i_7] [i_13 - 1] [i_13 + 3] [i_11] [i_13] [i_13] [i_13]);
                            var_35 -= (((arr_31 [i_13 - 1] [i_13 + 1] [i_11] [i_11] [i_7] [i_11] [i_7]) ? (arr_31 [i_13 + 1] [i_13 - 1] [i_13] [i_9] [i_13] [i_13] [i_9]) : 1883063331));
                            arr_35 [i_7] [i_7] [i_9] [i_7] [i_7] |= ((var_12 ? ((var_6 ? (arr_3 [i_7]) : var_1)) : (!var_3)));
                            var_36 *= (((-(arr_22 [i_13]))) - ((((arr_11 [i_8] [i_8] [i_9] [i_8] [i_13 + 1]) + (-2147483647 - 1)))));
                            arr_36 [i_7] [i_7] [i_9] [i_7] [i_7] |= ((!((-1 && (arr_19 [i_9] [i_7])))));
                        }
                    }
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        var_37 = (((arr_26 [i_7] [i_7] [i_7] [i_7]) ? (min((((26636 ? 508 : (arr_14 [i_7] [i_9] [i_14])))), ((var_0 ? 0 : (arr_17 [i_7] [i_7] [i_9] [i_7] [i_7]))))) : (!var_8)));
                        var_38 = (min(var_38, ((((arr_6 [i_7] [i_7]) & -16760856)))));
                        arr_39 [i_7] [i_7] [i_7] = var_1;
                        arr_40 [i_7] [i_7] [i_8] [i_7] = (arr_26 [i_14] [i_7] [i_7] [i_7]);
                        var_39 = (((((!(((var_14 ? 19365 : var_16)))))) >> ((-(!15991)))));
                    }
                    for (int i_15 = 1; i_15 < 17;i_15 += 1)
                    {
                        arr_43 [i_7] [i_7] [i_7] [i_15] = (((((16950531122711052802 ? (((16760814 > (arr_11 [i_7] [i_9] [i_9] [i_8] [i_7])))) : var_0))) > (max((arr_17 [i_7] [i_7] [i_7] [i_7] [i_7]), (!var_17)))));
                        var_40 = (min(var_40, (((-(arr_22 [i_7]))))));
                    }
                }
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    var_41 = (max(var_41, ((((((max((arr_5 [i_7] [i_7]), var_8)) | var_8)) | (((var_4 >= ((var_4 ? var_16 : (arr_23 [i_8])))))))))));
                    var_42 = (max(var_42, var_5));

                    for (int i_17 = 1; i_17 < 1;i_17 += 1)
                    {
                        var_43 = (min(var_43, 0));
                        var_44 = ((1 ? 21 : (((16285508924743341573 & var_10) ? -64 : var_5))));
                    }
                }
                arr_48 [i_7] [i_7] = ((!((((((63 ? var_3 : 4294967273))) ? ((max(var_0, var_10))) : var_17)))));
                arr_49 [i_7] = ((((((!(119 < var_10))))) * (((((var_1 ? (arr_8 [i_7] [i_7] [i_8]) : 16760846))) ? (min(1, (arr_22 [i_7]))) : -19344))));
            }
        }
    }
    var_45 *= var_5;
    var_46 = (!var_17);
    #pragma endscop
}
