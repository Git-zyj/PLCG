/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_12 = (((arr_6 [i_0] [i_1] [6] [i_3]) ? var_6 : ((((~22187) ? ((max(var_0, 78))) : (arr_2 [i_1] [i_2] [i_3]))))));
                        var_13 += (min(((((min(1484661038, var_2))) ? var_2 : var_6)), ((((arr_1 [i_1]) ? var_3 : (max(var_11, (arr_1 [3]))))))));
                    }
                }
            }
        }
        arr_10 [i_0] [14] = ((arr_4 [i_0] [i_0] [i_0]) ? (max((arr_7 [i_0] [i_0] [13] [i_0]), (var_7 - 177))) : var_10);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {

                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        var_14 = (min(var_14, (((((((63 ? (arr_16 [i_0] [i_4] [i_5]) : (arr_4 [i_5] [i_4] [i_0]))))) ? (arr_16 [15] [3] [i_5]) : (arr_11 [i_4] [2] [i_6]))))));
                        arr_19 [i_0] [i_0] [i_4] [i_5] [i_6] [i_6] = var_1;
                        arr_20 [i_6] [i_5] = ((+(((arr_5 [i_6 - 1] [i_6] [i_6 + 1] [i_6]) ? 17 : (arr_6 [i_5] [i_5] [i_6 + 1] [i_6])))));
                        var_15 = (min(var_15, (((4294967295 ? var_9 : ((((((arr_15 [i_5] [i_4]) < 115))) ^ 138)))))));
                    }
                    var_16 = ((((((arr_4 [i_0] [i_4] [i_5]) + -12470))) ? (arr_0 [i_5] [i_0]) : var_2));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] = ((!((max(((~(arr_0 [16] [i_8]))), (!var_7))))));
                                var_17 = (max(var_17, (((177 | ((-(arr_18 [i_0] [i_0] [i_7 - 1] [i_0]))))))));
                                var_18 = var_11;
                                arr_28 [i_7] [i_4] = ((~(arr_1 [i_7 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_31 [i_9] [i_9] = ((((((!-22187) ? var_6 : (arr_30 [i_9] [i_9])))) ? (max(var_11, -var_8)) : var_2));
        var_19 = ((+((var_11 ? (arr_30 [i_9] [i_9]) : (arr_30 [i_9] [i_9])))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 19;i_12 += 1)
                {
                    {
                        arr_40 [i_9] [i_9] [i_10] [i_11] [i_12 - 2] [i_12] = ((((max(var_3, (arr_38 [i_9] [18] [i_10] [i_9] [i_12 - 1] [i_12])))) / (((arr_30 [i_9] [i_9]) % var_1))));
                        var_20 = -1989;
                        var_21 = ((~(min((~var_9), ((var_8 ? var_4 : var_5))))));

                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            arr_43 [i_13] [i_9] [i_11] [i_11] [i_9] [i_9] = ((-((-(((arr_37 [i_10]) | (arr_36 [i_11] [i_11])))))));
                            arr_44 [i_10] [i_10] [2] [i_11] [i_9] [i_13] [i_11] = var_0;
                            arr_45 [i_9] [i_11] [i_9] = ((var_1 ? ((((min(30908, var_11))) ? ((1963 ? var_10 : (arr_37 [i_9]))) : ((max(1, (arr_37 [14])))))) : (((!((((arr_32 [i_9] [i_11] [i_9]) ? var_3 : 32762))))))));
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_22 = (max(var_6, ((min(var_4, 0)))));
                            arr_48 [i_9] [i_14] [i_11] [i_12] [i_10] [i_11] = var_2;
                        }
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            arr_52 [i_9] [i_11] [i_11] [i_11] [i_11] [15] [i_11] = var_1;
                            arr_53 [i_9] [i_9] [i_9] [i_9] = ((!(((var_8 ? (arr_37 [i_9]) : (arr_37 [i_12 - 2]))))));
                        }

                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            var_23 *= (((arr_49 [i_10]) ? ((((!(arr_51 [i_12 + 1] [i_12 - 2] [i_12 + 1] [i_12] [i_11]))))) : (min((min(var_6, (arr_32 [i_9] [i_10] [i_11]))), var_11))));
                            arr_56 [i_9] [i_9] [i_9] [i_9] = var_0;
                            arr_57 [i_9] [i_16] [16] [i_11] = (((((!(arr_38 [i_12] [i_12 + 1] [i_12] [i_12 - 2] [i_12 - 1] [i_12 + 1])))) != var_1));
                        }
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            arr_60 [i_17] [i_9] [i_17] [1] [i_11] [i_9] [i_9] = var_6;
                            var_24 *= (!(((((min(var_5, (arr_58 [i_10] [i_11])))) ? -1047682890 : (((arr_42 [i_9] [i_10] [i_11] [i_11] [i_12 + 1] [i_17]) ? (-127 - 1) : (arr_36 [i_9] [i_10])))))));
                            var_25 = (max(var_25, 0));
                        }
                    }
                }
            }
        }
    }
    var_26 = (max(var_26, ((((var_1 ? 9223372036854775807 : var_6))))));
    var_27 = var_6;
    var_28 |= var_7;
    #pragma endscop
}
