/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-(((var_10 | var_10) ? ((var_7 ? var_11 : var_11)) : (var_3 * 18))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 -= ((((min((var_11 - 62726551), var_10))) ? (((-((max(-123, -5794)))))) : ((var_8 ? -248 : var_3))));
                                var_15 -= 193;
                                var_16 -= (min(9741, 3827590216));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        var_17 -= var_0;
                        var_18 -= ((var_1 ? ((467377079 ? 54933 : 24)) : (((!(arr_9 [i_1 - 2] [i_1] [i_2] [7] [23] [7] [i_5]))))));
                        var_19 -= ((!((((!(arr_2 [i_0 + 2] [i_0 + 2]))) || (!2854712430)))));
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        var_20 -= ((var_10 ? var_10 : ((((arr_8 [i_1 - 3] [i_1]) == ((-1 ? -8377 : var_9)))))));
                        var_21 -= (~var_8);
                    }

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_22 = ((((((arr_4 [i_7]) ? (arr_1 [i_0]) : var_10))) % ((~(min(var_3, (arr_7 [i_0] [i_2] [i_2] [i_7])))))));
                        var_23 -= (min((((var_2 == var_2) ? (((min(8364, (arr_16 [i_7] [i_7] [i_2] [i_0] [i_0]))))) : ((var_5 ? (arr_12 [i_0] [i_0 + 2] [i_1] [i_1] [i_2] [i_7]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))), var_9));
                        var_24 -= arr_17 [i_0] [i_1] [i_2] [i_2];
                        var_25 -= (((arr_0 [i_1 - 3]) ? ((var_12 >> (((arr_1 [i_0 - 1]) + 2013595283)))) : (~var_7)));
                        var_26 -= (((((arr_11 [i_1] [i_1] [i_1 - 2] [i_1] [i_7] [i_7] [i_7]) || (arr_14 [i_1 + 1] [i_1 + 1] [i_1 - 3] [i_1]))) ? var_0 : -3));
                    }
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        var_27 -= (min(1, (min((arr_6 [i_1 + 1] [i_1 - 3]), -2))));
                        var_28 -= var_5;
                        var_29 -= var_4;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_30 -= (~31);
                            var_31 -= (arr_8 [i_1 - 2] [i_0 + 1]);
                            var_32 -= (((arr_21 [i_10]) % (((arr_5 [i_10] [i_1] [i_1]) ? var_4 : var_9))));
                        }

                        for (int i_11 = 3; i_11 < 22;i_11 += 1)
                        {
                            var_33 -= var_4;
                            var_34 -= ((-(~var_1)));
                            var_35 -= ((1793834239 ? (arr_25 [i_1 + 1] [i_1] [i_2] [i_0 - 1]) : 62726551));
                            var_36 -= (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        var_37 -= var_10;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        var_38 -= var_10;

                        for (int i_13 = 3; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            var_39 -= (arr_24 [i_12] [i_12] [i_12] [i_12] [i_12]);
                            var_40 -= (min((((var_11 < (arr_7 [i_13 - 1] [i_1 + 1] [i_0 - 1] [i_0])))), (max(((var_11 ? var_1 : var_9)), (var_7 / 52213)))));
                            var_41 -= (arr_16 [i_13] [i_12] [8] [1] [i_0]);
                            var_42 -= var_6;
                        }
                        for (int i_14 = 3; i_14 < 21;i_14 += 1) /* same iter space */
                        {
                            var_43 -= (arr_5 [i_0] [i_1] [i_2]);
                            var_44 -= var_11;
                            var_45 -= (max((arr_29 [i_2]), (arr_20 [i_14] [i_14])));
                        }
                        for (int i_15 = 3; i_15 < 21;i_15 += 1) /* same iter space */
                        {
                            var_46 -= ((((max(((((arr_34 [i_2] [i_2] [i_2] [i_2]) || (arr_13 [i_2] [2] [i_2] [i_1] [i_1] [i_0])))), (arr_36 [i_15] [i_12] [i_0])))) ^ (((min(12092165454880339699, var_11)) + var_0))));
                            var_47 -= var_8;
                            var_48 -= 22903;
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            var_49 -= (arr_13 [i_0] [i_0] [12] [i_2] [23] [i_2]);
                            var_50 -= (arr_0 [i_1]);
                        }
                        var_51 -= var_11;
                    }
                    var_52 -= var_3;
                }
            }
        }
    }
    #pragma endscop
}
