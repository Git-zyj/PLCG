/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((min(0, ((-(arr_5 [i_1]))))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    var_19 = ((var_5 / ((3 ? 1850469578 : 235))));
                    var_20 = -61;
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_21 = ((-(arr_3 [i_0] [i_0])));
                    var_22 &= (arr_0 [i_0] [i_0]);
                    var_23 = (((((arr_4 [i_0]) ? var_15 : var_9)) + (arr_4 [i_1])));
                    var_24 = ((!(((var_14 ? 4294967295 : 43)))));
                }
                var_25 = ((var_4 ^ (min((((arr_4 [i_0]) & (arr_2 [i_0]))), ((((arr_9 [1] [1] [18] [18]) & (arr_10 [i_0]))))))));
                var_26 *= (max((min(52, ((var_2 ? var_13 : (arr_8 [20] [i_1] [i_0] [i_0]))))), ((-(!232)))));

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_27 = (min(var_27, ((min(-13, 1373988743369051306)))));
                    var_28 = -16;
                    var_29 = ((((min(-105, ((min((arr_11 [i_0] [i_1] [i_4]), var_3)))))) - (max(8091365792204684108, 105))));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_30 = ((56 * ((((max(-43, 56))) / -123))));

                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_31 = (min(var_31, (((!((min(var_9, (arr_1 [i_6 + 3])))))))));
                            var_32 = -21511;
                        }
                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            var_33 = var_14;
                            var_34 = (((253 || 36999) | ((92 / (min(var_6, var_14))))));
                            var_35 = (arr_10 [i_0]);
                            var_36 = (max((max(((min(188, -2126560196))), (max(2660285372, 341490542)))), (((!((min((arr_9 [i_1] [i_1] [i_6] [i_8]), -34))))))));
                            var_37 = (((((((min(-117, -1481580457))) ? (-127 - 1) : 92))) ? (2797689884 + 1373988743369051295) : 0));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_38 = ((var_3 ? ((1531717704 ? var_16 : -8880794213708552779)) : (arr_13 [i_5] [i_5] [5])));
                            var_39 = var_0;
                        }

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_40 = ((-((-(arr_17 [i_0] [i_1] [i_6] [i_6])))));
                            var_41 = (((!1) * (((-23 / -61) - (arr_25 [i_6 + 2] [i_1])))));
                            var_42 &= (((((-(!var_1)))) ? (max(1048575, (arr_4 [i_6 - 1]))) : -5125));
                        }

                        for (int i_11 = 2; i_11 < 19;i_11 += 1)
                        {
                            var_43 = (((min(1744537333, (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))) >= -209933667));
                            var_44 &= 1373988743369051291;
                        }
                        for (int i_12 = 2; i_12 < 21;i_12 += 1)
                        {
                            var_45 *= (arr_34 [i_0]);
                            var_46 = (~1373988743369051306);
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_47 = (max(((max((((arr_29 [1] [i_1] [1] [i_1] [i_1] [i_1] [8]) & 2753364745)), ((((-21511 + 2147483647) >> (1541602556 - 1541602555))))))), (arr_3 [i_0] [i_1])));
                            var_48 = (arr_27 [14] [i_5]);
                        }
                        var_49 = (((!(((arr_24 [i_0] [i_6] [i_5] [i_1] [i_0] [i_0]) || (arr_3 [i_5] [i_6]))))));
                    }
                    var_50 = (max(var_50, (((min((((!(arr_2 [i_0]))), (((((arr_21 [i_0] [i_0] [i_0] [14] [2]) + 2147483647)) >> (((arr_2 [i_1]) - 1066219049)))))))))));
                }
            }
        }
    }
    var_51 -= (((~11324) ^ ((1541602556 ? (-100 % 6) : (-2147483647 - 1)))));
    var_52 = var_7;
    var_53 = (min((((!2147483647) ? 2836143586 : (460370167 == var_15))), (!var_14)));
    #pragma endscop
}
