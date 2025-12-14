/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [18] [i_1] [i_2] [i_3] [i_3] [i_0] = ((3377699720527872 / (max(0, (arr_9 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1])))));
                        var_19 ^= (((((var_9 + (arr_1 [i_3 + 1] [i_3 - 1])))) ? (((arr_1 [i_3 - 1] [i_3 + 1]) ? (arr_1 [i_3 + 1] [i_3 - 1]) : var_5)) : ((-35 ? (arr_1 [i_3 - 1] [i_3 + 1]) : (arr_1 [i_3 + 1] [i_3 + 1])))));
                        var_20 ^= ((((var_2 ? (((var_16 <= (arr_4 [i_0] [i_0])))) : (var_2 * var_16)))) ? ((((max(var_6, (arr_4 [i_1] [i_1])))) ? (-594971463 / 17364) : (594971463 != var_15))) : (max(var_11, (max(var_13, var_12)))));
                        arr_12 [i_3] [1] [i_3] = ((((29179 ? (arr_10 [i_0] [i_0] [i_3 + 1] [i_3]) : 2118947755333858133)) | ((~(((arr_7 [i_0] [i_1] [i_2]) ? var_9 : var_7))))));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_21 ^= ((!((((arr_5 [i_4] [i_2] [i_0]) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_5 [i_0] [i_0] [i_0]))))));
                        arr_15 [i_1] = ((((((arr_13 [i_4]) ? (arr_2 [i_1]) : 18446744073709551609))) && ((((arr_2 [i_0]) - 43609)))));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_22 = (((((var_10 ? 3849012068414073995 : (28 || 1)))) && ((max(var_11, 18050450031192187773)))));
                            arr_22 [i_0] [i_0] [22] [i_0] [i_6] = 9506206125028827384;
                            arr_23 [i_0] [i_0] [3] [i_0] [i_6] = 45707;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_23 = ((((((var_8 ? var_7 : 850217146)) >= ((var_10 ? var_13 : var_9)))) ? ((-1606028343 ? (arr_9 [i_0] [i_0] [i_7] [i_5] [i_7] [i_7]) : (arr_5 [i_1] [i_1] [i_7]))) : ((-44 & ((215 ? var_11 : -32767))))));
                            var_24 *= var_9;
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] = (19 ? var_5 : (((((1 << (((((-2147483647 - 1) - -2147483636)) + 15)))) == var_10))));
                            var_25 = (((((arr_16 [i_0] [i_1] [i_5]) ? (arr_16 [i_0] [i_2] [i_7]) : (arr_16 [1] [i_2] [11]))) / (((arr_16 [i_0] [i_0] [i_0]) ? (arr_16 [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_1] [i_5])))));
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_26 = (max(var_26, (((((((((var_13 ? (arr_29 [i_0] [2] [i_2] [7] [i_2] [2]) : (arr_6 [i_0] [i_0] [i_0])))) ? 11964861117869981034 : ((((arr_20 [i_0] [i_1] [i_2] [i_0] [i_8]) & (arr_9 [i_8] [20] [i_2] [i_0] [i_1] [i_0]))))))) ? ((var_11 ? (-127 - 1) : (var_18 ^ var_3))) : var_14)))));
                            arr_30 [i_8] = var_16;
                        }
                        arr_31 [i_0] [i_1] [i_2] [i_5] = (arr_19 [i_0] [i_1] [i_1] [i_2] [i_1]);
                    }
                    arr_32 [i_0] [i_2] = var_9;
                    var_27 = (min(var_27, 70));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 22;i_13 += 1)
                        {
                            {
                                arr_46 [i_10] = 201326592;
                                var_28 ^= (((var_12 != (arr_45 [i_13 + 1] [i_13 - 1]))));
                                var_29 += (max((max(var_10, var_9)), ((((arr_43 [i_13 + 2] [16] [6] [i_13 + 2] [i_13 + 2] [i_13 + 2]) ? (max(-1786473975, -1)) : 35)))));
                            }
                        }
                    }
                    var_30 = (arr_41 [i_9] [i_10]);
                }
            }
        }
    }
    var_31 = ((~((((var_14 & -586925302) == var_0)))));
    var_32 |= var_0;
    #pragma endscop
}
