/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_8;
    var_20 = var_9;
    var_21 *= ((var_5 ? var_12 : (~var_8)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((18582 || (((var_2 ? (arr_0 [12] [i_0]) : var_4))))) || (((((((arr_0 [i_0] [i_0]) ? var_5 : var_6))) ? (((arr_0 [i_0] [i_0]) ? var_16 : var_12)) : (arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] |= ((-(min((arr_4 [i_2 - 1] [i_2] [i_2]), (arr_7 [i_3] [i_2 - 1] [i_2] [i_2 - 1])))));
                        arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] = (((((max(3730, 117)))) * (arr_0 [i_2 - 1] [i_2 - 1])));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = ((((((((10155744630656266951 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : var_8))) ? var_13 : (arr_8 [4] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0]))) : ((((((arr_5 [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [20] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0])))) ? ((var_15 ? (arr_7 [6] [22] [i_0] [i_0]) : 7435647029470705639)) : ((((-5048394864391736023 + 9223372036854775807) << (((arr_6 [0] [i_0]) - 1060542527)))))))));
        var_22 = (max(-32765, 121));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_18 [i_0] [i_4] [i_4] [i_4] = (arr_15 [i_0] [i_4]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_23 = (((arr_4 [i_0] [i_0] [i_0]) < (((max((arr_24 [i_5] [i_7 + 1] [i_4] [i_7 - 1] [i_7]), var_10))))));
                                var_24 = (min(((~(arr_4 [i_7 + 1] [i_7 - 1] [i_7 + 1]))), ((-(arr_4 [i_7 - 1] [i_7 + 1] [i_7 - 1])))));
                            }
                        }
                    }
                    arr_25 [i_0] [i_5] [i_0] |= (min(var_5, (((!(arr_3 [3] [i_4]))))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_40 [i_11] [i_9] [i_10] [i_10] [i_9] [i_8] = (arr_26 [i_8]);
                        var_25 *= ((-(((~0) ? (arr_39 [i_8] [i_8] [i_9] [i_10] [i_10] [i_11]) : (arr_31 [i_10])))));
                        var_26 *= (((((max((arr_28 [i_9]), (arr_35 [i_10] [i_10] [i_9]))))) & (arr_34 [i_10] [i_9] [i_10] [i_11])));
                        arr_41 [i_9] [i_9] [i_10] [i_11] = 29648;
                        arr_42 [i_9] [i_9] [i_9] [i_8] = ((+((((arr_7 [19] [i_9] [16] [19]) == (arr_16 [i_8] [i_8] [i_9]))))));
                    }
                }
            }
        }
        arr_43 [i_8] = ((~((-19240 ? (arr_37 [i_8] [i_8] [i_8] [i_8]) : ((0 ? 2335183334346911460 : var_7))))));
        arr_44 [i_8] [0] = (min((((-(((arr_7 [i_8] [i_8] [i_8] [i_8]) ? var_17 : var_0))))), (max(8191, (min(1, 3486943124))))));
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
    {
        var_27 = (max(var_27, (((-(~var_1))))));
        arr_48 [i_12] = (arr_30 [i_12]);
        var_28 ^= ((-(+-0)));
    }
    #pragma endscop
}
