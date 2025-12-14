/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0] |= var_6;
                        arr_10 [i_0] [i_1 + 1] [i_2] [i_3] = (var_6 >= var_6);
                        arr_11 [i_2] [i_0] = ((-3202093701858190686 ? 18446744073709551612 : var_3));
                    }
                    arr_12 [1] [13] [i_2] = var_3;
                }
            }
        }
    }
    var_10 = (min((var_4 - -116), (max(var_7, (((var_1 ? var_6 : var_5)))))));
    var_11 = (min(var_11, ((min(((~((max(var_8, var_6))))), (min((var_4 & var_9), ((1 ? var_1 : var_2)))))))));
    var_12 += ((!((((-3202093701858190672 < 13) * var_6)))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_5] |= ((((min(-2015765750157985036, -116))) ? (((125 - (arr_17 [i_4] [i_5])))) : ((4294967274 + (((max(110, var_2))))))));

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_27 [i_4] [i_8] [i_6] [i_4] = ((((((!29020) + (arr_20 [i_4] [i_5] [i_5])))) ? (min((arr_8 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7]), (arr_19 [i_7 - 1] [i_4] [i_7 - 1] [i_7 + 1]))) : var_4));
                                arr_28 [i_4] [i_7] [i_6] [i_4] [i_4] = 125;
                                var_13 = (min(var_13, ((((max(((18446744073709551602 || (arr_5 [1] [i_5] [i_6] [i_5]))), (var_0 && var_1))) && (((((min(var_4, var_3))) ? (-123 && 1187464194) : var_5))))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        arr_31 [i_9] [i_5] [i_5] [i_4] &= ((-9223372036854775806 ? 18446744073709551609 : -127));
                        arr_32 [i_4] [i_6] [i_5] [i_4] = (((var_5 + 2147483647) >> (((arr_7 [i_9] [i_6] [i_5] [i_4]) - 1885286133))));
                        arr_33 [i_4] [i_5] [i_6] [i_4] = (((-110 || 3492223722) % var_6));

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_14 = ((var_3 ? (!var_9) : 1452759698));
                            var_15 = var_1;
                        }
                    }
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        var_16 = (min(12238353647995779241, 465984234));
                        var_17 = (arr_4 [i_6] [i_6] [i_5]);
                        arr_39 [i_4] [i_4] [i_4] [10] [i_4] = (arr_19 [i_4] [i_4] [i_6] [i_11 + 2]);
                        var_18 = ((((((-(arr_38 [i_4] [i_4] [i_4] [i_11])))) ? (arr_38 [6] [i_4] [i_4] [i_4]) : ((var_9 ? -3202093701858190681 : var_0)))));
                        arr_40 [i_4] [i_4] = ((((var_7 && ((max(var_8, var_5))))) && (arr_23 [i_4])));
                    }
                    var_19 = (min(var_19, (((117 ? 732869767 : -21543)))));
                    arr_41 [i_4] [i_4] [i_6] [i_4] = (((arr_2 [i_4] [i_5] [i_6]) + (arr_14 [i_6])));
                    var_20 = (max((3165878711051143201 % var_7), (min(890484364576316314, -105))));
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 16;i_14 += 1)
                        {
                            {
                                arr_48 [i_4] [i_4] = var_2;
                                var_21 = (min(var_21, (((!((!(arr_1 [i_14 + 1]))))))));
                                var_22 = (max(var_22, var_9));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 15;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            {
                                arr_54 [i_4] [i_15 + 2] [i_12] [i_5] [i_4] = (~281474439839744);
                                var_23 = var_3;
                            }
                        }
                    }
                }
                for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
                {
                    var_24 = (min(var_24, (((~(-71 / 42330))))));
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 15;i_18 += 1)
                    {
                        for (int i_19 = 2; i_19 < 16;i_19 += 1)
                        {
                            {
                                arr_63 [i_4] [i_4] = var_5;
                                arr_64 [i_19] [i_5] [i_5] [i_4] |= (~-var_8);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
