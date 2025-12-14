/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 = ((((((var_0 != var_8) < (var_3 > var_8)))) <= (1888273632 >= 245)));
                                arr_15 [8] [i_2] [i_2] [13] [i_4] = ((var_5 > (var_7 <= var_4)));
                                var_15 = (min(var_15, (((18446744073709551608 + 18446744073709551591) ? (var_9 != var_12) : ((var_9 ? var_9 : var_3))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_16 = ((((var_7 <= (var_12 < var_2))) ? (((var_3 % var_11) ? var_4 : (var_7 < var_10))) : ((((var_4 != var_0) || var_2)))));
                        var_17 = (min(var_17, ((((var_12 % var_8) / ((((max(var_3, var_8))) ? var_0 : var_9)))))));
                        var_18 = (min(var_18, (((152 >> (-691251140 + 691251143))))));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, (((((var_12 ? var_5 : (min(var_5, var_9)))) % (var_6 <= var_2))))));

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_20 = (((!var_12) >> (((min(var_7, var_4)) - 178))));
                            var_21 = (min(var_21, ((((((var_1 ? var_11 : var_3))) ? var_3 : (var_2 || var_12))))));
                        }
                        var_22 = (var_10 << (((!(((var_1 ? var_2 : var_5)))))));
                        var_23 = (((min(var_0, var_2)) - var_4));
                        var_24 = (max(var_24, 644786851));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        arr_27 [8] [i_2] [2] [i_2] [i_2] [i_8] = ((var_11 ? var_1 : (var_10 / var_0)));
                        var_25 = var_10;
                        var_26 = var_1;
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_30 [i_2] [i_1] [i_2] = ((var_2 ? (max(((var_10 ? var_10 : var_9)), var_1)) : var_6));
                        var_27 = (min(var_27, (((((max((min(var_9, var_6)), -var_4))) ? (((((var_5 || var_0) >= var_5)))) : (~2746071907))))));
                        var_28 *= ((((min(var_3, var_11))) || (~var_3)));
                        var_29 += (18446744073709551608 | 691251118);
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 3; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_30 = -var_5;
                                arr_44 [i_12] [i_10] = (7750099033018922403 || -691251163);
                                arr_45 [i_10] [i_11] = var_5;
                            }
                        }
                    }
                    arr_46 [i_10] [i_10 + 1] [i_12] [i_10] = (((183121099 < 1038701612) ? ((((var_6 / var_12) ? var_8 : ((var_10 ? var_0 : var_12))))) : (((var_0 <= var_1) ? var_9 : (17 % 254)))));
                    var_31 = (((((var_4 ? var_3 : var_1))) ? var_8 : 28238));
                    arr_47 [i_10] = (((!var_0) > ((5649011171770381327 ? 2522664211 : 141))));
                }
            }
        }
    }
    #pragma endscop
}
