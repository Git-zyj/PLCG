/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_9;
    var_12 &= (min((((!var_8) & var_9)), var_7));
    var_13 *= ((((min(((var_0 ? var_0 : var_5)), (var_0 && var_4)))) ? ((((var_5 > -25164) != (((var_3 + 2147483647) << (var_6 - 4012)))))) : ((var_4 ? var_0 : var_6))));
    var_14 = (min((-var_2 - var_3), var_2));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1 - 4] [i_1] = ((-((min(61803, (min(var_0, (arr_6 [i_0 + 1] [i_0] [i_0] [i_0 + 2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] [1] [i_4] [i_0] = (min((((((var_5 ? (arr_2 [i_3]) : var_7))) ? 61803 : var_3)), ((((var_1 << (var_1 - 115)))))));
                                arr_17 [i_0] [i_0] = var_1;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        var_15 = (-95 - 0);

                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            arr_23 [i_5] [i_0] = ((var_1 | (var_5 != 0)));
                            var_16 *= ((var_3 ? (arr_6 [i_0] [i_1 - 4] [i_2] [i_6]) : var_3));
                            var_17 = ((var_8 / (arr_1 [i_5 + 2])));
                            var_18 ^= ((((var_9 ? (arr_20 [8] [i_1] [8]) : (arr_4 [1]))) & ((((arr_20 [8] [i_2] [12]) ? var_1 : (arr_21 [i_0] [11] [i_2] [13] [i_6] [i_2]))))));
                            arr_24 [i_2] [i_1] [2] [i_5] [i_0] [i_5] [i_0 + 1] = (((15 - 247) ? 17933104346713085397 : var_7));
                        }
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_2] = -17217;
                            var_19 -= ((var_7 ? (arr_19 [6] [i_1 - 4] [i_1 + 3]) : (arr_19 [10] [i_1 - 4] [i_1 + 3])));
                        }
                        arr_31 [2] [i_0] [i_2] [i_2] [1] = var_5;
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_34 [i_0] [i_1] [i_2] [i_0] = (var_0 > var_4);
                        var_20 -= ((134 ? 1 : 7));

                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            arr_37 [i_2] [i_0] [i_2] [i_0] [i_0] = (min(((var_7 ? var_4 : var_9)), var_4));
                            arr_38 [i_0] [i_9] [i_2] [i_1] [i_0] = (min((((1221579148 != ((var_4 ? (arr_12 [i_2] [i_2]) : (arr_36 [i_0] [i_0])))))), (min((-95 - 200), var_5))));
                            var_21 = var_1;
                        }
                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            var_22 = (min(31637, 1023));
                            arr_41 [i_0] = var_5;
                        }
                        for (int i_12 = 3; i_12 < 18;i_12 += 1)
                        {
                            arr_44 [i_0] [i_0] [i_0] [i_0] [15] [i_0] [i_0] = -2147483628;
                            arr_45 [i_0] [i_0] [6] [i_0] [11] [11] [i_12] = ((((((~var_0) & (var_8 | -13988)))) ? var_10 : (2 | -4334408308896135135)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
