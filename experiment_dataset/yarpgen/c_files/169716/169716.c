/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((((((+((max((arr_2 [i_0]), -83)))))) ? (max(18373, 1)) : (((arr_6 [i_0]) ? (((!(arr_5 [i_0])))) : (((arr_3 [i_0]) / (arr_3 [9]))))))))));
                var_21 = (min((((((max((arr_5 [0]), var_8))) ? (((var_16 && (arr_2 [1])))) : -var_4))), (min((min((arr_6 [i_1]), var_13)), (((-(arr_0 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((((((-(max((arr_6 [i_0]), (arr_2 [i_2 + 1])))))) && ((min(((min((arr_8 [8] [i_1] [i_2]), var_5))), 10277410524339923317))))))));
                            var_23 += ((47176 ? ((((min(-22, -1699101740303078697))) ? ((max((arr_2 [i_2 - 1]), 11))) : ((~(arr_6 [i_0]))))) : (arr_8 [i_2] [11] [i_0])));
                            var_24 *= ((-(((arr_1 [i_2]) ? ((max(var_18, (arr_2 [i_0])))) : var_4))));
                        }
                    }
                }
                var_25 += (max((((((((arr_12 [i_0] [i_0] [i_0] [i_0]) ? var_2 : (arr_0 [9] [i_1])))) >= (((arr_12 [i_0] [i_1] [i_0] [i_0]) & 18383))))), (min((var_15 ^ var_2), (arr_1 [i_0])))));
                var_26 = (((arr_7 [i_0] [i_0] [i_1]) ? ((max((arr_8 [16] [i_1] [i_0]), ((96 ? (arr_3 [i_0]) : (arr_3 [5])))))) : (((((-2478483436099235463 / (arr_10 [i_1] [i_0])))) ? (((-(arr_8 [i_0] [i_0] [3])))) : (min(var_7, (arr_7 [i_0 + 2] [10] [i_1])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_27 = (min((((arr_11 [i_8] [i_4] [i_6] [i_5] [i_4]) ? ((min(var_6, var_2))) : (max((arr_12 [10] [1] [18] [i_7]), var_2)))), (arr_22 [i_4] [i_4] [i_6] [i_7] [i_4] [3] [i_8])));
                                var_28 += (arr_9 [i_4 - 1] [i_6]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 8;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_29 = (((((~(arr_29 [i_4] [i_4] [i_5] [6] [i_10] [i_9 - 2] [i_9])))) ? (max((((1 ? 34176 : 47153))), var_7)) : var_19));
                                var_30 = ((((max((4095 + -2055858466693481383), ((((-9223372036854775807 - 1) != var_6)))))) ? 60870 : 18379));
                                var_31 = (~var_5);
                                arr_30 [i_4] [i_4] [i_6] [7] = var_12;
                                var_32 = (arr_24 [i_4] [i_5] [i_6] [i_9 + 1] [8]);
                            }
                        }
                    }
                    var_33 = ((-var_19 ? var_9 : (arr_8 [i_6] [i_5] [i_6])));
                }
            }
        }
    }
    var_34 += var_16;
    var_35 = ((var_8 - ((-(max(var_7, var_2))))));
    #pragma endscop
}
