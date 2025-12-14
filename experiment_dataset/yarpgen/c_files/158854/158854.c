/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1379562577;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (arr_4 [19])));
                var_21 = (((~var_2) ? (((arr_2 [i_0]) ? (!var_8) : var_12)) : var_10));

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_22 = (((!var_3) ? (((arr_5 [i_0] [i_0] [i_0]) ? var_16 : var_2)) : (!var_1)));
                    var_23 = (min(var_23, (7068982007550339091 + 1379562585)));
                    var_24 = (min(var_24, ((((arr_5 [i_0] [16] [i_2]) > ((var_2 ? (arr_5 [i_0] [6] [12]) : var_8)))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = var_11;
                        var_25 = (arr_8 [i_0] [i_2 - 1] [2] [i_1] [i_0] [i_0]);
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [9] = (var_14 ? (~-5659202719488102235) : ((((arr_7 [i_0]) ? -44 : (arr_6 [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [i_1] [i_2] [i_0] = (((4622731848364000167 ? 54010 : 1379562577)));
                        arr_16 [i_0] [8] [16] [i_4] = (!var_16);
                        var_26 = -54010;
                        arr_17 [1] [1] [i_2] [i_4] [i_1] [i_0] = ((-(((1770980259 ? 117 : (arr_6 [i_0]))))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_20 [17] [17] [i_0] [17] [i_1] [1] = (max((!40), 2002826084));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_23 [13] [13] [19] [i_5] [i_0] = (((arr_5 [i_0] [i_0] [i_5]) & (arr_18 [i_2 + 2] [i_2] [16] [i_2] [i_2] [i_0])));
                            arr_24 [i_0] [i_2] [i_2] = 16617585690360094893;
                            var_27 = ((~(arr_18 [i_2 + 2] [i_2 + 2] [i_2] [i_2] [i_2 - 1] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_1] [i_2 + 2] [i_5] [i_7] = ((!(((var_5 ? (((var_5 > (arr_19 [i_0] [i_1] [i_2] [i_5] [i_5] [i_5])))) : (max(var_10, var_11)))))));
                            var_28 = -36;
                            var_29 = ((((!((max(2915404698, var_9))))) ? (max(((~(arr_22 [i_0] [i_7] [i_2] [i_0] [i_7] [12]))), 0)) : ((~(~var_10)))));
                            arr_28 [1] [i_1] [i_1] [i_0] [9] = ((var_7 ? var_10 : (max(var_12, var_18))));
                            var_30 = ((var_7 ? (!57649) : var_5));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_0] [i_0] [i_5] [i_5] [i_8] = ((((45 ? 16617585690360094883 : -32001)) % 19088));
                            arr_32 [i_0] [i_0] [11] = (arr_2 [i_0]);
                        }
                        var_31 -= -5659202719488102235;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_32 = (~(arr_8 [i_2 + 1] [i_2 + 1] [6] [i_2 + 1] [i_2 - 1] [i_0]));
                        arr_35 [i_0] [3] [3] [i_0] = -var_18;
                        var_33 = 1860005212;
                        arr_36 [i_0] [3] [i_2] [i_9] = (((arr_10 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_0]) ^ var_5));
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    var_34 = (((((var_16 ? var_7 : 0))) ? (arr_38 [i_0]) : ((var_16 ? var_2 : 7365601316939642045))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 20;i_12 += 1)
                        {
                            {
                                arr_44 [i_0] [10] [i_0] [i_12] = (arr_3 [1] [i_11]);
                                arr_45 [i_12] [i_0] [i_0] [i_0] = 54003;
                                arr_46 [i_0] [i_0] [1] [i_0] [i_12] = ((!(arr_43 [0] [i_1] [0] [i_11] [i_12])));
                            }
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                {
                    arr_49 [i_0] [13] [i_0] = (max(((~(arr_42 [i_0] [1] [i_0] [i_1] [0] [i_13] [i_13]))), ((~(arr_42 [i_13] [i_1] [i_1] [i_1] [i_0] [1] [i_0])))));
                    var_35 += (1379562559 ? var_11 : var_17);
                    arr_50 [1] [i_0] [i_13] = (arr_13 [i_0] [i_1] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
