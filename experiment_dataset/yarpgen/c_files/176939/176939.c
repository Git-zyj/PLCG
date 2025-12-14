/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = -var_10;
        var_17 = (((min((arr_1 [i_0 + 2]), 2712464699)) % (((-8804729714908681791 ? (arr_0 [i_0 + 2] [i_0 + 3]) : -8318)))));
        var_18 &= ((((-(arr_0 [i_0 + 1] [i_0 + 1]))) - ((-2042285822 + (arr_1 [i_0 + 1])))));
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_17 [i_1 - 1] [14] [6] [i_3 - 1] [1] [i_5] = var_2;
                            var_19 += var_5;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_23 [i_1] [10] [i_3] [i_6] [i_7] [i_7] = ((var_3 ? (((arr_3 [i_1]) / 2042285821)) : (!var_4)));
                            arr_24 [i_1] [1] [i_1] [i_1] [i_1] [i_7] [i_1 - 4] = var_4;
                            var_20 = (min(var_20, var_4));
                        }
                    }
                }
            }
            for (int i_8 = 3; i_8 < 17;i_8 += 1)
            {
                var_21 = -2205792217510590517;
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_33 [i_1] [i_2] [i_8] [i_9] [i_8] [i_10] = (((((min(var_8, var_2))) ^ ((89 << (3356703254 - 3356703249))))));
                            var_22 = (((arr_4 [i_1]) == ((min(((max(1, var_8))), (max(1, 13888)))))));
                            var_23 = (arr_8 [i_2] [6] [i_9]);
                        }
                    }
                }
                var_24 = (((!1) ? ((max(var_2, ((var_15 ? (arr_8 [i_8] [i_1 - 4] [i_1 - 4]) : (arr_4 [5])))))) : (((((-(arr_6 [i_1 - 3] [i_8] [i_1 - 3])))) ? 1 : -var_3))));
                var_25 *= ((((var_4 >> (((arr_5 [i_1] [i_1] [i_1 - 2]) - 860615772)))) < (arr_26 [i_1 - 3] [i_1 - 3] [i_8] [10])));
                arr_34 [i_1] [i_8] [i_1] = 2006362041;
            }
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {

                        for (int i_13 = 1; i_13 < 16;i_13 += 1)
                        {
                            arr_42 [i_1] = -2249600790429696;
                            arr_43 [i_1 - 2] [i_2] [i_2] [i_12] [i_2] |= ((((1 ? 8134582730446288144 : 127)) ^ (((-((((arr_10 [i_1] [i_13]) >= 51646))))))));
                        }
                        var_26 = (var_2 != var_7);
                    }
                }
            }
            arr_44 [5] [16] [16] |= 2593241014;
            arr_45 [i_1] [i_1] [i_1] = 1;
            var_27 = (min(var_27, (((~(((!((min((arr_22 [i_1] [1] [i_1 - 1] [i_1 - 3] [i_1 - 4]), (arr_3 [11]))))))))))));
        }
        /* vectorizable */
        for (int i_14 = 2; i_14 < 14;i_14 += 1)
        {
            var_28 = (((arr_10 [i_1 - 4] [i_1 - 3]) | var_1));

            for (int i_15 = 2; i_15 < 15;i_15 += 1) /* same iter space */
            {
                var_29 = 8134582730446288138;
                var_30 = 3356703254;
                arr_51 [i_1] [i_1] [i_15 - 1] [i_15 + 2] = ((arr_29 [i_1] [i_1]) <= var_11);
            }
            for (int i_16 = 2; i_16 < 15;i_16 += 1) /* same iter space */
            {
                var_31 ^= ((!(~var_15)));
                arr_54 [i_1] [i_14 + 4] [i_14] [i_16 - 1] = var_7;
                var_32 = var_0;
            }
            var_33 |= (((!var_7) ? -var_12 : (arr_38 [1] [i_14 - 1] [16] [i_14] [i_14 - 2] [i_1 - 3])));
        }
        arr_55 [i_1] = (arr_30 [i_1 + 1] [i_1] [i_1 - 3]);
    }
    /* LoopNest 3 */
    for (int i_17 = 4; i_17 < 21;i_17 += 1)
    {
        for (int i_18 = 1; i_18 < 21;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                {
                    arr_63 [i_17] [1] [i_19] = (((((~(min(var_7, var_15))))) ? var_3 : (((((min((arr_56 [i_17]), (arr_56 [i_17])))) ? var_13 : (932550086 - var_5))))));
                    var_34 += (((((var_6 + 1) << (((arr_59 [i_18]) - 4053133520)))) / var_2));
                }
            }
        }
    }
    #pragma endscop
}
