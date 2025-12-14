/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((~(min(var_1, var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] = (((+((195 ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_0]))))));
                    arr_8 [i_0] [i_0] [i_0] [16] |= 4294967295;
                }

                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_15 *= (((((var_0 == (arr_9 [i_0] [i_0]))))) < (min(1944698325, var_1)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_16 = (((((min(var_2, 448257870)) ? (((min((arr_0 [i_4]), (arr_10 [i_1] [i_0] [i_5]))))) : (max(var_1, 217993236))))));
                                var_17 = ((((min((arr_6 [i_0] [i_3] [i_0] [i_5]), 1379))) ? (arr_3 [i_0] [i_0] [i_0]) : (((arr_5 [i_4] [i_1] [i_3] [i_3]) | 1830165386))));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_18 &= 562949953421311;

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_19 = ((((((((var_9 ? (arr_15 [i_0] [i_0]) : var_13))) ? (min(1040187392, -576460752303423488)) : var_13))) ? (min((var_8 / 4294967295), 98)) : (((((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : 1)) >= ((16 ? (arr_0 [i_7]) : (arr_15 [i_1] [i_0])))))))));
                            var_20 = (((((~((min(var_5, (arr_15 [i_0] [i_0]))))))) ? (max((((arr_11 [i_1] [i_1] [i_1] [i_7] [i_8] [i_6]) ? (arr_14 [i_0] [i_1] [i_6] [i_7] [i_8]) : var_9)), ((max(12, (arr_16 [i_0])))))) : -1356));
                        }
                    }
                    var_21 = (((arr_0 [i_6]) ? ((min((arr_5 [i_0] [i_0] [i_1] [i_6]), (arr_5 [i_1] [i_1] [i_1] [i_1])))) : (((((~var_6) + 2147483647)) << (1 - 1)))));
                    arr_25 [i_0] [i_0] [i_0] [i_0] = (min((max(((var_2 ? -576460752303423463 : 1)), var_11)), -576460752303423472));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    var_22 = ((-(((((var_8 - (arr_17 [i_9] [i_1] [i_0])))) ? 47800 : (!89)))));
                    var_23 = max((max((min((arr_17 [i_0] [i_1] [i_9]), 576460752303423448)), (!var_9))), (arr_23 [i_0] [i_0] [i_0]));
                    var_24 = (min((min((((var_9 + 9223372036854775807) >> var_5)), (((1 ? (arr_21 [i_0] [i_0] [i_9] [i_1] [i_0]) : 4394))))), 79));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_25 += (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        var_26 = (((var_11 - var_2) <= 448257893));

                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            var_27 = (max(var_27, (arr_27 [i_11 + 2] [i_11 + 1] [i_11 - 1])));
                            arr_33 [i_11] [i_0] [i_9] [i_1] [i_1] [i_0] [i_0] = (-7129885462243983799 || -114);
                        }
                        var_28 *= (((arr_18 [i_9]) ? var_13 : var_4));
                        var_29 = (((arr_18 [i_0]) ? var_3 : (arr_18 [i_0])));
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_30 = arr_11 [i_12] [i_9] [i_9] [i_0] [i_1] [i_0];
                        arr_36 [i_0] [i_1] [i_0] [i_0] [i_12] = var_10;
                    }
                }
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    var_31 = (arr_17 [i_0] [i_0] [i_0]);
                    var_32 = ((((min(var_2, (min(-1356, 1944698311))))) ? (min((~1032192), var_7)) : 1));
                    var_33 = min((arr_27 [i_0] [i_0] [i_0]), (min(1944698338, var_13)));
                }
                var_34 = (49575593 == 13);
                var_35 = ((((min((191 - 7264596592356729849), (((-14583 ? (arr_16 [i_0]) : 1)))))) ? (((((min(var_1, (arr_17 [i_1] [i_0] [i_0]))) + 9223372036854775807)) << (((-4394 + 4424) - 29)))) : (((((2365829547 ? (arr_34 [i_1]) : var_13))) ? (((var_1 ? (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]) : 1))) : (min((arr_28 [i_1] [i_1] [i_1] [i_1]), -1389424563))))));
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            {
                                var_36 = var_6;
                                arr_48 [i_0] [i_1] [i_14] [i_14] [i_0] [i_16] = ((~((~(min((arr_41 [i_0] [i_1] [i_15] [i_16]), (arr_17 [i_16] [i_1] [i_1])))))));
                                var_37 = (arr_42 [i_0]);
                                var_38 = (((min(var_6, (arr_37 [i_0] [i_1] [i_1] [i_1]))) ? (min(var_9, var_13)) : (((((arr_37 [i_0] [i_14] [i_1] [i_0]) < 3818703698))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
