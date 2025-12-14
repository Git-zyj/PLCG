/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~2019123981);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_0] [i_1 - 2] [i_2] = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = (2019123981 | -var_5);
                                var_14 = (max(var_14, ((((((-7153258726956058087 ? (((var_9 ? var_4 : var_4))) : (max(var_6, var_2))))) ? var_2 : ((~((var_9 ? var_4 : var_11)))))))));
                                var_15 ^= (((-((1 ? var_9 : var_9)))) / ((40 ? 1 : 53)));
                                arr_16 [i_0] [i_3] [i_0] [i_0] [i_0] [1] = (((((40 ? var_3 : (((var_10 ? 10268 : var_4)))))) ? (((!(((1614105962 ? var_3 : var_6)))))) : 10276));
                                arr_17 [i_0] [5] [i_2] [i_3] [5] = 62;
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_2] = ((~((var_3 ? (!var_8) : ((var_5 ? var_10 : 927148586))))));
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_16 = (min(var_16, 1));
                        arr_24 [i_0] = 6;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_17 *= (((var_3 - -107) == var_8));
                                var_18 = (min(var_18, var_9));
                                arr_32 [i_5] [i_7] [i_7] [i_5] = var_3;
                                var_19 -= ((((-var_2 / (~var_3))) <= (((var_10 ? (~var_6) : (var_9 == 5))))));
                            }
                        }
                    }
                    var_20 = (((var_6 == var_5) && ((((!-5274898180921930547) ? var_7 : (var_0 / var_2))))));

                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        var_21 = ((-(max(var_8, 67108608))));
                        var_22 *= (max(var_0, (((((-927148585 ? 5274898180921930546 : 1))) ? ((var_9 ? var_3 : var_1)) : var_11))));
                        var_23 = var_9;
                        arr_35 [i_0] [i_1] [i_9] [i_9] = ((~(((((var_2 ? 6432101208508506721 : var_8))) | 10254964701867428896))));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_24 = (min(var_24, (((((((var_1 > var_0) ^ (7 > var_6)))) ? ((((1 ? var_10 : var_7)))) : var_7)))));
                        var_25 = ((1 ? 3605663176 : 193));
                    }
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                {
                    var_26 = ((var_3 ? ((-(83 * 12604544761350487644))) : (((~((var_7 ? var_11 : var_5)))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_27 *= ((-((~((113 ? var_1 : 216))))));
                                var_28 = ((((67 ? -126 : var_1))));
                                arr_45 [i_1] = ((-((((!12383590942379608924) && -var_4)))));
                            }
                        }
                    }
                    arr_46 [i_11] [10] [10] = ((var_11 - (+-12604544761350487648)));
                    arr_47 [i_0] [i_0] [i_0] = var_11;
                }
                var_29 = ((var_3 ? ((-var_8 + ((var_2 ? var_8 : -460457287542588447)))) : ((((var_6 / var_1) ? var_1 : var_9)))));
                var_30 -= -var_6;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 13;i_16 += 1)
            {
                {
                    arr_57 [i_14] [i_14] = var_2;
                    var_31 *= (var_6 && var_1);
                    arr_58 [i_14] [i_15] [i_14] = var_11;
                }
            }
        }
    }
    #pragma endscop
}
