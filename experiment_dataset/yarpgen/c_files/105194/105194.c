/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_15 > var_1);
    var_18 = (min(7114308986923989997, ((((min(-30942, 10480))) - 10))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (max(2039771891, 2))));
                arr_4 [i_1] [i_1] [i_0] = (max(2431695372, ((min((arr_0 [i_0 - 1] [i_0 + 1]), 11)))));
                var_20 = (((((((var_3 ? (arr_0 [i_1] [i_0 + 1]) : (arr_0 [i_0] [i_1]))) / var_8))) ? ((min(10, 3528))) : (arr_2 [i_0] [i_0])));

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_21 = var_7;
                    var_22 = (min((!7), (!7833)));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_23 = (arr_5 [i_0] [i_0 - 1]);
                        var_24 = (~8);
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_25 = ((54 >> (1553125808 - 1553125802)));
                        var_26 |= (((((var_7 && (arr_6 [i_0 - 1] [i_0 - 1] [i_2 + 2] [i_4])))) > (((arr_7 [i_2 + 3] [i_0 + 1]) ? var_4 : var_0))));
                        var_27 ^= (arr_1 [i_2 - 2]);
                        var_28 = min((arr_5 [i_2 + 3] [i_0 - 1]), ((max(9, var_7))));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_29 = 22;
                        arr_15 [11] [i_1] [i_1] [i_0] = (min((((arr_2 [7] [7]) ? var_9 : 2721558855)), (arr_2 [i_0 + 1] [i_0 - 1])));
                        var_30 = (var_10 || -31);
                        var_31 = ((-(arr_10 [i_5] [i_2 - 1] [i_0 + 1] [i_0])));
                        var_32 = (min(var_32, ((((65505 || var_6) ? 18866 : (arr_6 [4] [i_1] [i_2 + 2] [10]))))));
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_19 [i_6] [i_6] [i_6] [i_0 - 1] = ((((-45 + 2147483647) << (((var_3 + 118) - 21)))));

                    for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_33 = (!1573408461);
                        var_34 = 242;
                    }
                    for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        arr_24 [i_6] = (((arr_23 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 + 2]) > (arr_22 [i_8 - 1] [12] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8 + 1])));
                        var_35 = ((!(arr_14 [1] [1] [i_8 - 2] [i_8 + 2] [12] [i_8])));
                        var_36 &= (((arr_12 [i_0] [i_1] [i_0 + 1] [i_8 + 2]) ? ((var_16 ? 214 : 2721558821)) : (~121)));
                        var_37 &= 207;
                    }
                    for (int i_9 = 2; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_38 ^= ((1527810586 ? 12 : 3723750699));
                        arr_27 [i_6] = (((~-5691) * (((!(arr_5 [i_0 + 1] [i_6]))))));
                        var_39 = ((((arr_7 [i_6] [13]) ? var_11 : (arr_16 [i_0] [i_0] [i_6]))));
                        var_40 = ((!((var_15 < (arr_22 [i_0 - 1] [i_1] [10] [i_6] [i_6] [i_9])))));
                    }

                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        var_41 = var_7;
                        var_42 = (arr_14 [i_0 - 1] [i_6] [i_10] [5] [i_10] [i_10 - 1]);
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_43 = (((arr_29 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? -5680 : var_5));

                        for (int i_12 = 1; i_12 < 12;i_12 += 1)
                        {
                            arr_36 [6] [i_6] [i_0 + 1] = (arr_7 [i_0 + 1] [i_12 + 2]);
                            var_44 = ((-(!var_5)));
                            var_45 = var_11;
                        }
                        for (int i_13 = 1; i_13 < 11;i_13 += 1) /* same iter space */
                        {
                            var_46 = 7;
                            arr_40 [i_0] [i_1] [i_6] [i_6] [i_13] = ((65535 ? -19 : 19668));
                        }
                        for (int i_14 = 1; i_14 < 11;i_14 += 1) /* same iter space */
                        {
                            var_47 = ((1573408452 ? (!58367) : var_10));
                            var_48 += ((arr_29 [i_11] [10] [10] [10] [i_1] [i_6]) / var_1);
                            var_49 = (((arr_21 [i_14 + 1] [i_14 + 1] [i_14 - 1] [7] [i_14] [i_14]) ? 0 : (arr_21 [i_14 + 1] [i_14] [i_14 + 1] [i_14] [i_14] [i_14])));
                        }
                        var_50 = (((arr_25 [i_0 - 1] [i_0 - 1] [i_0 + 1]) / (arr_16 [i_0 - 1] [i_0] [i_0 + 1])));
                    }
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        var_51 = var_0;
                        var_52 = (arr_17 [2] [i_0] [i_0 + 1] [i_0]);
                        var_53 = (min(var_53, (((2134132355492638196 ? 4 : 7)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
