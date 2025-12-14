/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] = ((-(((((var_4 ? (arr_3 [4]) : var_14))) ^ (arr_0 [i_2 - 1] [i_0 - 1])))));
                            arr_11 [i_0] [i_0] [i_2] [18] = (((((-(~var_1)))) ? (!2524928515) : (var_8 == var_13)));
                            var_15 = (((~var_5) ? ((((!(((~(arr_4 [19])))))))) : -8116208743683299150));
                            var_16 = (arr_7 [20] [20] [20] [i_3]);
                            var_17 *= (arr_9 [8] [i_1] [i_1]);
                        }
                    }
                }
                var_18 *= (min(124, (~var_2)));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_19 *= var_14;
                    var_20 = (min(var_20, 4089132550));
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_17 [i_5] [i_5] = 2524928515;
                    var_21 = ((!((((arr_0 [i_5] [12]) ? 1 : (arr_0 [i_0 + 1] [i_1]))))));
                    var_22 += ((~(((((12826662696012407957 ? var_13 : var_1))) ? -var_0 : (((arr_0 [i_1] [i_5]) ^ var_6))))));
                    var_23 += 14697;
                    arr_18 [i_0] [i_5] [7] [i_5] = (!((((arr_9 [i_0 - 1] [i_0 + 3] [i_0 - 1]) ? (arr_8 [4] [i_1] [i_0 + 3] [i_0 + 1]) : 1))));
                }
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    arr_22 [i_6] = (arr_20 [i_0 + 1] [i_1] [i_6 + 1]);
                    arr_23 [i_0] [i_0] [i_6 + 3] = (((((~(arr_6 [i_0 + 1])))) ? (min(2524928515, var_11)) : (~-8192)));
                }
                for (int i_7 = 4; i_7 < 23;i_7 += 1)
                {
                    var_24 = (((((~(arr_2 [i_7 + 1] [i_7 - 4])))) ? ((var_4 ? var_3 : 1906585670475045171)) : (((0 ? (arr_24 [2] [i_7 - 4] [i_0 + 2]) : (arr_24 [i_7] [i_7 - 2] [i_0 - 1]))))));

                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        arr_28 [i_0] [i_1] [i_7] = (((((~var_7) ? var_3 : (~-1906585670475045171))) & ((min(-var_5, (min(var_7, -9)))))));
                        var_25 = (((220 ? (arr_8 [i_0 + 3] [i_1] [i_1] [i_8]) : 1244920596639008871)));
                    }
                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        arr_32 [i_7] = (~var_2);
                        arr_33 [i_0] [i_1] [i_0] [i_7] [18] |= ((~(((((~(arr_4 [i_9])))) ? (~-17765) : 2627))));
                        var_26 = (min(var_26, (~963660892)));
                    }
                    for (int i_10 = 1; i_10 < 23;i_10 += 1)
                    {
                        var_27 = (min(var_27, (1 - 1548119729)));
                        var_28 = (min(var_28, (arr_15 [i_0] [22] [i_7] [i_10 - 1])));
                        arr_38 [23] [i_7] [i_7] = ((((((((arr_19 [15] [0] [i_10]) != 20219))) + (~36))) == var_6));
                    }
                    var_29 += ((~(max((((arr_20 [i_7] [i_0] [i_0]) ? var_1 : 113)), var_12))));
                }
            }
        }
    }
    var_30 = var_13;
    var_31 = var_6;
    #pragma endscop
}
