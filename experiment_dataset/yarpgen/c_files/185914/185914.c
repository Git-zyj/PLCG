/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((var_9 / 114), var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_13 &= (((min((min(var_11, var_10)), (13447795051477349594 | 61988))) ^ ((~(max(var_5, 13447795051477349593))))));
                    var_14 = (((((!((((arr_1 [18]) ? (arr_4 [i_1] [i_0]) : (arr_2 [i_1] [i_0]))))))) << ((((var_7 ? var_7 : (arr_5 [i_2] [i_1]))) + 111))));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_14 [i_3] [i_3] [i_3] [i_3] = 13447795051477349594;
                        arr_15 [i_1] [i_3] = ((255 && (((17036 ? (arr_10 [i_0] [i_0] [i_3] [i_0]) : 49)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_1] [i_3] [i_5] [i_5] = (((((!(arr_9 [i_0] [i_1] [i_3] [i_5])))) == 250));
                        arr_19 [i_5] [i_3] [i_0] [i_1] [i_5] = (((((arr_5 [i_1] [i_1]) + 2147483647)) >> (((arr_5 [i_1] [i_0]) + 107))));
                    }

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        arr_24 [10] [i_1] [i_3] [i_1] &= (((((arr_21 [i_0] [i_1]) ? 6 : (arr_13 [i_0] [i_0] [i_0] [i_6] [i_6]))) != (arr_6 [i_6] [i_6 - 1] [i_6] [i_6 - 1])));
                        var_15 *= (((arr_23 [i_6 - 1] [i_6] [i_6] [i_6]) == (arr_23 [i_6] [i_6 - 1] [i_6] [i_6 - 1])));
                        var_16 = (min(var_16, (((arr_22 [i_0] [i_0] [i_1] [i_6 - 1] [i_1]) ? (arr_22 [i_1] [i_1] [i_3] [i_6] [i_3]) : 237))));
                        var_17 ^= 68;
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_18 *= min(((17048 ? 18312552317586128943 : 24)), (((((var_3 / (arr_25 [i_1] [i_0] [i_1] [i_0]))) * (-6 / var_4)))));
                        var_19 = -45;
                        arr_28 [i_0] [i_1] [i_0] [i_7] |= ((((((((arr_27 [i_0] [i_0] [i_0]) | (arr_25 [i_7] [i_3] [i_1] [i_0]))) | ((~(arr_10 [i_0] [i_1] [i_3] [i_3])))))) ? (arr_20 [i_3]) : ((min(1149348256, 1753460331917824288)))));
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        arr_32 [i_3] [i_8] [i_3] [i_8] = ((min(var_3, 127)));
                        arr_33 [i_8] [i_1] [i_1] [i_0] = ((((37984 | (4998949022232202024 | 32768))) >= var_3));
                        arr_34 [i_8] [i_1] [i_1] [i_0] = -1;
                    }
                }
                var_20 &= 45965;

                /* vectorizable */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    var_21 = (max(var_21, ((((-40 ? 124 : 2733)) != (((arr_22 [i_1] [i_1] [i_0] [i_1] [i_1]) + var_11))))));

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_22 = (var_5 | -32767);
                        arr_39 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = (((((arr_29 [i_0] [i_0] [i_0] [i_0] [1]) ? var_6 : (arr_37 [i_10] [i_1] [i_10]))) == var_11));
                        var_23 = (((arr_36 [i_0] [i_0]) ? (arr_36 [i_0] [i_1]) : (arr_36 [i_1] [i_9])));
                        arr_40 [i_10] [i_1] [7] [2] = (~var_8);
                        var_24 *= (43926 || 32768);
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {

                        for (int i_12 = 3; i_12 < 19;i_12 += 1)
                        {
                            arr_46 [i_0] [i_0] [i_0] [i_11] [i_12] = var_5;
                            var_25 = (48500 && var_8);
                        }
                        arr_47 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                        arr_48 [i_11] [i_11] [i_0] [i_0] [i_0] |= -15027;
                        var_26 *= ((!(arr_42 [i_11] [i_9] [i_1] [i_0])));
                    }
                }
            }
        }
    }
    var_27 = ((21610 | (((((var_1 ? var_6 : 1))) ? ((min(17053, var_7))) : (((var_5 + 2147483647) >> (127 - 124)))))));
    #pragma endscop
}
