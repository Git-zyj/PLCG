/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [0] [i_1] [i_0] = (arr_5 [i_1]);
                    var_10 = (arr_1 [i_2 + 1] [i_2]);
                    arr_9 [i_0] [i_1] = ((((min((max(var_5, (arr_1 [i_2] [i_0]))), (((16632 ? var_6 : (arr_6 [i_0] [i_1] [i_1] [i_2]))))))) ? 16618 : (((127 && (arr_1 [i_0] [i_1]))))));
                    arr_10 [i_0] [i_1] [1] = ((~((var_0 ? (arr_1 [i_0] [16]) : (arr_1 [5] [i_1])))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                {
                    var_11 = (min(var_11, ((((arr_12 [3]) + (arr_19 [i_3]))))));
                    var_12 = (~124);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_13 ^= ((((min(var_9, var_2))) ? ((((arr_15 [i_5 - 1] [i_6] [i_7]) >> (((arr_15 [i_5 + 2] [i_6] [i_7]) - 2687920963))))) : (((~var_9) & (arr_12 [i_3])))));
                                var_14 = (max(var_14, ((((--2147483647) ? ((127 >> (((arr_18 [i_3] [2] [i_7] [i_7]) - 819876013)))) : (((658313893779433552 ? 0 : 2147483647))))))));
                                arr_25 [i_3] [i_4] [i_3] [i_6] [i_4] = ((((((-119 ? (arr_24 [i_3] [i_3] [i_3] [i_3]) : (arr_24 [i_3] [i_3] [i_3] [i_3]))))) ? var_9 : (var_3 < -127)));
                                arr_26 [i_3] [i_4] [i_5 + 2] [i_6] [i_7] [11] = (((((-((min(16632, var_0)))))) ? ((-(arr_16 [i_5 - 1] [i_4] [i_5] [i_6]))) : (((!(arr_19 [i_5 - 1]))))));
                                var_15 = 16637;
                            }
                        }
                    }
                }
            }
        }
        var_16 = (min(var_16, ((max(((!(((-909514115210394305 ? -16638 : var_6))))), ((!(!var_5))))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    var_17 = (max(var_17, (arr_12 [7])));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_18 = ((var_0 ? -var_4 : (arr_12 [i_8])));
                        var_19 = var_1;
                    }
                    for (int i_11 = 4; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_3] [i_11] &= (max(((((-2147483647 ? var_0 : var_6)))), var_8));
                        var_20 = (min(var_20, (min(-16638, -25682))));
                    }
                    /* vectorizable */
                    for (int i_12 = 4; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        arr_41 [i_3] [i_8] [i_9] [10] = -9970939176108202444;
                        var_21 = (max(var_21, var_3));
                        arr_42 [i_3] [i_3] [i_3] [i_3] = (arr_23 [i_12] [i_12] [i_12 - 1] [i_12]);
                        var_22 = (((arr_18 [i_9] [i_12 - 1] [i_12] [i_9 - 1]) ? (arr_24 [i_3] [i_12 + 1] [i_12] [i_9 + 1]) : (arr_18 [i_3] [i_12 - 3] [i_12] [i_9 - 1])));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        arr_45 [i_3] [i_8] = (((!-658313893779433555) ? ((((((arr_28 [15] [i_8] [i_8]) + 2147483647)) >> (var_3 - 1379645752)))) : (arr_37 [i_3] [5] [i_3] [i_3])));
                        arr_46 [i_3] [i_8] [i_9] [i_13] = (~var_7);
                        var_23 = (arr_19 [i_3]);
                    }
                    var_24 = (min(var_24, ((((((min(var_6, var_8)))) > (~941868899))))));
                }
            }
        }
    }
    var_25 = max(var_4, ((-114 ? (max(var_1, var_5)) : (var_4 % var_4))));
    var_26 = var_4;
    #pragma endscop
}
