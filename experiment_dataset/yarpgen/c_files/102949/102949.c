/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [5] [i_2] [i_2] = var_3;
                            arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] = ((!((min(-5166442947858678325, 4294967290)))));

                            for (int i_4 = 1; i_4 < 19;i_4 += 1)
                            {
                                var_10 = (((var_1 & -9223372036854775804) < (((var_8 / var_7) * (((-(arr_9 [i_2] [i_2] [i_1] [i_0] [i_1] [i_1 - 1]))))))));
                                var_11 = ((((arr_9 [i_2] [1] [i_2] [i_2] [4] [i_0]) >= (arr_10 [i_1 - 1] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 1]))) ? (((((arr_4 [i_3] [i_1]) != (arr_0 [i_3]))))) : ((var_5 ? (~var_4) : -5166442947858678325)));
                                arr_15 [i_4 - 1] [13] [i_1] [i_3] [i_2] = (arr_14 [i_2] [i_2]);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_18 [i_5] [i_5] [i_0] [i_0] = var_6;
                    var_12 = (max(((((~var_7) ? (arr_8 [i_0] [i_1] [i_0] [i_1 - 1] [i_5]) : (((max(var_4, var_4))))))), ((((arr_13 [6] [6] [6] [i_0] [i_1]) ^ var_3)))));
                    var_13 = 5166442947858678325;
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 20;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((((var_4 / var_7) && (((var_5 ? var_5 : (arr_2 [i_0] [i_7 + 1])))))))));
                                var_15 = (max(var_15, (((+((var_2 ? (arr_1 [i_6]) : var_4)))))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_28 [i_9] [i_1] [i_1] [i_1] = (((16 * 0) == var_0));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_1 + 1] [i_9] [i_6] [i_9] [i_10] [i_10] = var_5;
                            arr_33 [i_0] [i_0] [i_9] [0] [i_0] [i_0] = (((((((arr_31 [i_0] [i_1] [i_6] [i_0] [i_9]) ? var_6 : var_0)) + 2147483647)) << (((((arr_1 [i_0]) + 5743804098257877136)) - 28))));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_9] [i_9] [i_9] [i_6 - 3] [i_1 - 2] [i_0] [i_9] = (((-(arr_6 [i_9] [i_9] [i_11]))));
                            arr_39 [i_0] [i_0] [i_6] [i_9] [i_11] = (arr_7 [i_0] [i_9] [i_0] [i_0]);
                            var_16 = var_2;
                        }
                    }
                    for (int i_12 = 3; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_17 = var_2;
                        var_18 = ((var_8 | (!var_3)));
                    }
                    for (int i_13 = 3; i_13 < 19;i_13 += 1) /* same iter space */
                    {

                        for (int i_14 = 1; i_14 < 19;i_14 += 1)
                        {
                            arr_47 [i_13 - 1] [i_14 - 1] [i_1 + 1] [i_13] [i_13] [i_6] [i_13] = (-28 || 16);
                            arr_48 [i_14] [i_13] [i_14 + 2] = (((arr_35 [i_1 - 2] [i_1 - 2] [i_13 + 1] [i_14]) ? ((var_1 ? var_8 : var_0)) : (~241)));
                            var_19 = (arr_29 [i_13] [i_14] [i_14 - 1] [i_14 + 2] [i_13] [i_13]);
                        }
                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            var_20 = (min(var_20, (var_6 + var_1)));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13] [i_0] = (((arr_37 [i_6] [i_6] [i_13 - 3] [i_13] [i_13 + 2] [i_13]) | var_1));
                            arr_52 [i_13] [i_13] [i_1] [i_13] [i_1 + 1] = var_1;
                        }
                        arr_53 [i_13] [i_13 - 2] [i_13] [i_13 - 2] [i_13 - 3] [i_13] = var_9;
                    }
                    arr_54 [i_6 - 3] [i_1] [i_0] [i_0] = 5166442947858678304;
                }
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
