/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = ((var_8 ? (0 << 1) : ((68 & (((max(var_8, 106))))))));
                    var_12 = var_0;
                }
            }
        }
    }
    var_13 = (!var_11);

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_10 [i_3] = (max((min(var_7, -0)), ((min((min(var_7, 2094867047)), var_7)))));
        var_14 = (max(var_14, (((((-1905772079 ? (arr_8 [i_3]) : var_5)) & var_9)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_15 = (((((max(-2094867050, 2094867048)))) ? 206 : var_9));
                                arr_22 [i_7] [i_4] [i_5] [i_6] [i_7] [i_6] = (var_1 / 49);
                                arr_23 [i_7] [11] [20] [21] [i_7] = (((((121 * 121) ? var_7 : (arr_19 [i_4] [i_5] [i_5 - 2] [i_5 - 2] [14] [23] [i_5 + 1]))) >= (((var_2 < var_6) * (((!(arr_21 [i_3] [i_3] [i_5 - 2] [16] [i_7]))))))));
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((((((min(8191, var_8)) & 132))) ? (((min(var_8, var_7)))) : (((min((arr_8 [i_6]), var_8)) >> ((((var_2 ? var_10 : -121)) - 4213911789894958344))))));
                            }
                        }
                    }
                    arr_25 [i_5] [18] [i_5] [i_5] = (+-3810);
                    arr_26 [i_3] = max((arr_8 [i_5 - 1]), (((arr_20 [i_5 + 2] [4] [i_5 - 1] [i_5 + 1] [14] [i_5 + 1] [i_5]) ? (min(var_4, var_3)) : var_11)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_31 [i_3] [i_4] [i_5] [i_4] [i_9] = (((-(~var_9))));
                                var_16 = (max(var_16, ((((((!var_2) && var_4)) ? 35495 : 1)))));
                            }
                        }
                    }
                    arr_32 [i_3] = (((min((max(var_4, 1)), -2094867047))) ? (max(var_2, (arr_8 [i_5 + 1]))) : (((((arr_16 [i_3]) ? var_2 : var_4)) / (((121 ? var_1 : var_0))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    var_17 = 3;
                    arr_40 [i_10] [i_10] = (!var_10);
                }
            }
        }
        arr_41 [i_10] = 4503599627370495;
        arr_42 [i_10] [i_10] = ((-var_10 - ((var_3 ? var_11 : var_10))));
    }

    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        var_18 = (max(var_18, ((max((var_9 < var_4), (max((arr_13 [i_13] [i_13] [17]), 247)))))));
        var_19 = 127;
        var_20 = (max((((-((-114 ? -2094867047 : 1))))), var_5));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 15;i_16 += 1)
                {
                    {
                        arr_56 [i_13] [i_13] [i_13] = (((231 / var_7) && ((min((-2094867051 & var_9), (arr_43 [i_15]))))));
                        var_21 = ((((((arr_54 [i_13] [i_14] [i_15 + 3] [1]) ? (!2094867038) : (arr_51 [i_15 + 4] [i_15 - 1] [i_15 + 1] [i_16 - 1])))) & (min(((7272159760593231583 << (1 - 1))), (16391398681427624188 && var_4)))));
                        arr_57 [11] [11] [14] [11] [i_14] = ((min(1, var_0)));
                    }
                }
            }
        }
        var_22 = (min(var_22, var_2));
    }
    #pragma endscop
}
