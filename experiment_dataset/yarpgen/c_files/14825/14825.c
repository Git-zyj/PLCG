/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_5, -var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = ((((3 ? -403074649 : -24))) * (!6709928914990207881));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_2] [i_4] &= (arr_5 [i_3 - 1] [i_1 - 1]);
                                arr_15 [i_0] [i_1] [i_0] [i_1] [i_2] [i_3] [i_0] = (max(((max((arr_0 [i_3] [i_3 + 2]), (arr_12 [5] [1] [i_1] [1] [i_1] [i_3] [i_3 - 1])))), (((-345814917 > 1) ? (min((arr_9 [i_0] [i_2] [i_3] [i_4]), (arr_4 [i_1]))) : ((min(var_12, (arr_5 [i_3] [i_2]))))))));
                            }
                        }
                    }
                }
                var_19 = (arr_1 [i_0]);
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_20 = 12;
                                var_21 = (~var_10);
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_22 *= ((29150 + (31365 % 345814931)));
                    var_23 = (min((((max(64, (arr_23 [i_1] [i_1] [i_1]))) + ((max(-1155668063, var_9))))), var_0));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_24 = (min(var_24, (((2 ? (((((var_15 > (arr_22 [i_0] [i_0] [i_10]))) ? -3 : ((var_13 ? var_16 : var_1))))) : (((arr_7 [i_0] [i_0]) * 0)))))));
                                var_25 = ((~((-((((arr_29 [i_0] [i_0] [i_0] [i_0]) > var_4)))))));
                                arr_30 [i_0] [i_1 - 1] [i_1] [i_9] [i_10] = (((-124 ? ((var_8 ? (arr_29 [i_10] [i_9] [i_8] [i_0]) : 11736815158719343724)) : (arr_22 [i_1] [i_1] [i_10]))));
                                arr_31 [i_0] [i_1 + 1] [i_1] = (((1890899349 / 18446744073709551608) ? (((arr_27 [i_1] [i_1 + 1] [i_1 + 1] [0] [i_1 + 1]) + (arr_27 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))) : (((arr_27 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]) ? var_9 : (arr_27 [i_1] [i_1 + 1] [i_1 - 1] [9] [i_1 + 1])))));
                            }
                        }
                    }
                    var_26 |= ((min((arr_5 [i_0] [i_0]), (arr_4 [i_0]))));
                    arr_32 [i_0] [i_1] [8] = (((max(6709928914990207881, -4336096175350953785))));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        var_27 = (arr_28 [i_0] [i_1] [i_1] [i_11] [i_12]);
                        var_28 -= 14;
                        arr_40 [i_1] = ((arr_3 [i_0]) ? ((142 ? var_11 : var_14)) : (((arr_6 [i_0] [i_1] [i_0] [i_0]) ? var_12 : -2061890926)));
                        var_29 = (max(var_29, (((var_1 ? ((var_4 ? (arr_17 [i_0] [i_0]) : -18100)) : 3)))));
                    }
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        var_30 = (((((((arr_24 [i_0] [i_1] [i_1] [i_13]) ? (-32767 - 1) : -345814917)))) ? ((32767 ? 345814924 : 2)) : var_10));
                        var_31 = ((((max(134217727, (!9498)))) ? var_5 : (((arr_41 [i_1 - 1]) ? ((-18124 ? var_15 : (arr_11 [i_1]))) : (min(2305843009213693951, -18647))))));
                        var_32 = (((min((~var_6), -87))) ? (((min(var_12, 63)))) : (min(((var_0 ? 0 : var_8)), (~2))));
                        var_33 = 5673174158509674631;
                        var_34 *= (min((((arr_36 [8] [6] [i_1] [i_0]) ? (arr_36 [i_0] [i_1 + 1] [i_11] [i_11]) : (arr_19 [i_0] [0] [0] [i_13]))), 0));
                    }
                    var_35 -= var_12;
                }
            }
        }
    }
    #pragma endscop
}
