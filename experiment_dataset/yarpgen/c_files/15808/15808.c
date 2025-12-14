/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [14] |= (min(170, -9455975646055231461));
                arr_8 [i_0] [i_0] = var_9;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        var_11 ^= ((1871388032 ? 181 : 1871388032));
                        var_12 = var_2;
                        var_13 = (((min((arr_15 [1] [i_4] [i_4]), ((var_1 | (arr_19 [i_2] [i_4] [i_4] [i_5]))))) + (arr_10 [i_3] [i_3])));
                        var_14 |= (!(((~(((arr_17 [i_2] [i_2]) ? var_1 : -7091989927351841812))))));
                    }

                    for (int i_6 = 4; i_6 < 20;i_6 += 1)
                    {
                        var_15 = 13;
                        var_16 = (min(var_16, ((((arr_17 [i_3] [i_2]) & 13)))));
                    }
                    arr_22 [i_2] [i_4] [20] = ((-((48 ? 0 : (arr_11 [i_2])))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_17 = ((-(arr_12 [i_2] [i_3])));
                        arr_27 [i_7] [2] [18] [i_7] = (~1972284880);
                    }
                    arr_28 [i_3] = ((~((~(arr_19 [i_2] [i_2] [22] [i_2])))));
                    arr_29 [3] [3] [3] = (min(((((min((arr_18 [i_2] [i_2] [i_2] [i_7]), (arr_16 [i_2] [i_2] [i_2])))) ? (arr_11 [i_7]) : ((((arr_12 [i_7] [7]) || var_4))))), (((-31 < (arr_10 [i_2] [i_3]))))));
                    arr_30 [i_3] [i_3] = 165790376104385766;
                }
                var_18 = 742723926;
                var_19 *= (arr_21 [i_2] [15] [i_3] [i_3] [i_3] [i_3]);
                var_20 -= max((arr_17 [i_2] [i_2]), ((((arr_23 [i_2] [i_2] [i_2] [i_3]) ^ (arr_23 [i_3] [i_2] [i_2] [i_2])))));

                /* vectorizable */
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    var_21 = (min(var_21, (arr_25 [i_2] [i_3] [i_3] [i_2])));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_22 = (((arr_25 [8] [i_9] [i_10] [8]) >> (var_0 - 60872)));
                                var_23 = (arr_37 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 3]);
                                var_24 = ((~(((!(arr_9 [12] [12]))))));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    var_25 &= ((-1460813587 ? 206 : -31));
                    var_26 = (((max(((((arr_21 [i_2] [i_2] [9] [i_2] [i_2] [i_2]) ? (arr_31 [i_2] [4] [4]) : (arr_34 [i_2] [i_3])))), (min(183, 1779002344039788043)))) + (arr_21 [i_2] [i_3] [i_12] [i_3] [i_2] [i_12])));
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 23;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_27 = ((arr_49 [i_14] [i_14] [i_2] [i_13] [i_12] [i_2] [i_2]) <= (var_10 - 3017778476));
                                arr_50 [i_12] [i_3] = (!61856);
                                var_28 = (max(var_28, (min(2423579239, 3258528539))));
                                var_29 = (max(var_29, ((((18280953697605165850 <= (((0 ? -98 : (arr_15 [i_2] [i_3] [i_13]))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = ((max((((var_10 + 9223372036854775807) >> (var_0 - 60854))), (0 & 415791174))));
    #pragma endscop
}
