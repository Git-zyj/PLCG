/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_2 >> (var_7 + 6988626754116742411)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] = (arr_6 [i_0 + 2] [i_0 + 2] [13] [i_0]);
                    arr_9 [i_0] [i_1] [i_0] = ((var_3 ? (((arr_7 [1] [i_1] [4] [i_0]) ? var_9 : var_8)) : (arr_5 [6] [i_0])));
                    arr_10 [i_0] [3] [3] [i_0] = ((~(arr_5 [i_0] [i_0])));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_12 += ((var_10 >> (-var_7 - 6988626754116742408)));
                        var_13 = (arr_1 [i_1]);
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        var_14 = (((var_7 && var_7) & (-127 - 1)));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_14 [i_0] [20] [12] [i_2] [i_0] [i_0 - 1]) ? (arr_14 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0 - 1]) : 20);
                    }
                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        var_15 *= (arr_7 [i_0] [i_0 - 1] [i_5 + 2] [i_5]);
                        arr_18 [i_0] [4] [i_2] [i_2] = (var_7 >= var_9);

                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            arr_23 [i_6] [i_5] [i_0] [i_1] [i_0] [i_0] [10] = var_8;
                            var_16 = ((arr_14 [i_0 + 1] [i_6 + 1] [i_2] [i_5] [i_0] [i_5 + 1]) ? var_9 : (((arr_11 [i_1] [i_1] [i_0] [i_1]) ^ 106)));
                        }
                        for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_1] [i_5] [i_0] = (((20 ^ var_4) | (arr_7 [i_0] [i_1] [24] [i_0])));
                            arr_28 [i_0] [i_1] [i_2] [19] [i_0] = (arr_0 [i_0] [i_0]);
                        }
                        for (int i_8 = 1; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_17 *= ((127 ? -92 : 1));
                            var_18 = var_7;
                            var_19 = (i_0 % 2 == 0) ? ((!((((-1917647323 + 2147483647) >> (((arr_0 [i_0] [i_0]) + 1341405764))))))) : ((!((((-1917647323 + 2147483647) >> (((((arr_0 [i_0] [i_0]) - 1341405764)) + 201955986)))))));
                            arr_31 [i_0] [i_0] = ((var_1 * (((31 < (arr_14 [i_0 - 1] [1] [i_2] [i_5] [i_0] [i_5]))))));
                        }
                        arr_32 [i_1] |= (arr_30 [i_0] [i_1] [i_2] [i_2] [i_2] [1]);
                    }
                    for (int i_9 = 1; i_9 < 24;i_9 += 1)
                    {
                        arr_36 [i_1] [i_1] &= 7167049024912895659;
                        var_20 += ((!var_7) >= var_0);
                        var_21 = (((arr_35 [i_0 + 1] [i_9 - 1]) || (arr_35 [i_0 - 3] [i_1])));
                    }
                    var_22 &= (((var_4 + var_8) ? ((~(arr_14 [i_0] [i_0] [i_0] [14] [i_1] [i_0]))) : (arr_1 [i_0])));
                }
                arr_37 [i_0] [i_0] = (((var_3 != var_5) | (((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0 + 1]) * (arr_20 [i_0] [3] [i_0] [21] [i_0] [1]))) >> ((((-6053323964310728224 ? (arr_30 [i_0 + 1] [i_1] [i_1] [i_0] [i_0 + 2] [i_0 + 1]) : var_6)) - 2114164244))))));
                arr_38 [i_1] [i_1] &= 7243688087228632448;
            }
        }
    }
    var_23 = ((115 ? 1 : 0));
    #pragma endscop
}
