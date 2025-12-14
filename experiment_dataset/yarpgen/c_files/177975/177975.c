/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 *= 57344;
        var_11 *= 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_12 = (var_6 >= 1000553145);
        var_13 = (min(var_13, (~1000553153)));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_14 = (max(var_14, (((var_3 ? (min((arr_10 [i_2]), 9223372036854775808)) : ((((((var_5 >= (arr_10 [2]))) && 1000553145)))))))));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_13 [i_5] [i_4] [8] [2] = (max((var_6 && 1), var_6));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_17 [9] [i_3] [8] [i_3] [6] = ((var_4 + (arr_2 [i_5] [i_6])));
                            var_15 = ((14799030516495840020 ? (arr_8 [i_2]) : (arr_8 [i_4])));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_16 = (min(var_16, (~var_0)));
                            arr_20 [i_3] [10] [i_7] [i_3] [9] [i_3] = ((var_1 ? ((var_2 ? -2 : (arr_9 [i_2] [i_3] [i_4]))) : ((((var_0 ? var_4 : 255)) ^ (~var_3)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_17 = (((arr_9 [i_2] [2] [i_8]) & var_1));

                        for (int i_9 = 4; i_9 < 11;i_9 += 1)
                        {
                            arr_25 [4] [i_3] [i_4] [i_3] [4] [0] [4] &= (var_5 > -1336073764);
                            var_18 = (~1);
                            var_19 = (arr_14 [i_2] [i_3] [1] [i_9]);
                            var_20 -= (1 < var_9);
                            var_21 = (max(var_21, 2214231913867129583));
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            arr_28 [0] [i_8] [i_4] [i_8] [i_10] = ((var_3 ? var_4 : (var_5 | 1224499605)));
                            arr_29 [i_2] [8] [i_3] &= (var_9 && var_4);
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        arr_32 [11] [2] [7] [i_11] [i_2] = var_3;
                        var_22 = (min(var_22, ((((((-(arr_5 [9])))) < ((2017995796 ? 115 : (arr_2 [8] [1]))))))));
                        var_23 = (max(var_23, ((115 / (arr_14 [10] [5] [7] [i_11])))));
                        var_24 = (max(var_24, var_3));
                    }
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        var_25 ^= (((((arr_5 [i_12 + 1]) ? (!var_9) : (max(2214231913867129583, (arr_15 [3] [8] [1] [1] [1]))))) * ((min((!var_1), -3294414141)))));
                        arr_35 [6] [3] [5] [1] [i_12] = (((((arr_11 [i_2] [6] [i_2] [6] [6] [6]) ? 1000553129 : (~var_3)))) ? (min((arr_8 [i_12 + 1]), (arr_8 [i_12 + 1]))) : (((~((~(arr_0 [6])))))));
                        arr_36 [4] [11] [11] = ((!((((arr_19 [i_2] [i_3]) ? (var_8 && 2214231913867129583) : ((1160535495949549813 ? var_0 : var_4)))))));
                    }

                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_26 = 92;
                        var_27 = var_2;
                    }
                    var_28 = (((arr_4 [i_2]) && (((((arr_4 [i_2]) == var_7))))));
                    var_29 = -5808348791445211127;
                }
            }
        }
        var_30 ^= 26;
    }
    var_31 = var_4;
    #pragma endscop
}
