/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((var_6 ? (((var_16 ? var_11 : 35))) : (min(2498885329043728475, 1747655840601543846)))), ((~((var_11 ? 41340 : var_19))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [24] = (min((363221021 / -19045), (arr_1 [i_0])));
        arr_5 [i_0] = ((363221021 ? 30055 : 35496));
        arr_6 [i_0] = (((((var_8 ? ((max(30032, -11))) : (3240725973 && 35474)))) & ((-((19036 * (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_9 [19] [19] = (var_6 / ((1650988372 ? -2349235297536760629 : -25762)));
        arr_10 [i_1] [i_1] = ((162 ? 1 : 12795));
        arr_11 [i_1] = 6084647341253079566;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_20 [i_1] [i_2] [i_3] [i_1] = (((((arr_3 [i_1]) ? (arr_0 [i_1]) : (arr_3 [i_1]))) - ((((arr_13 [i_2]) ? 2147483647 : (arr_3 [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_25 [i_1] [i_1] [i_3] [i_4] [i_1] = ((!(arr_22 [i_1] [15] [i_1] [i_1] [i_1])));
                                arr_26 [i_1] = (((((arr_8 [i_1] [i_1]) ? (arr_13 [i_2]) : 2147483645)) << ((((((var_10 ? 1650988373 : (arr_19 [i_1]))) | (max(3660298678, (arr_19 [i_1]))))) - 4201364983))));
                                arr_27 [i_1] [i_2] [i_4] &= (197 || 12803);
                            }
                        }
                    }
                    arr_28 [i_3] [i_2] [i_2] [i_1] = (arr_12 [i_1] [i_2]);
                }
            }
        }
        arr_29 [i_1] [i_1] = (((((((30040 ? (arr_23 [i_1] [i_1]) : (arr_19 [i_1]))) + (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) + 9223372036854775807)) >> (((min((arr_7 [i_1]), var_14)) + 5720557216141354264)));
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 9;i_7 += 1)
        {
            {
                arr_34 [i_6 + 1] [i_6] [i_7] = ((1650988372 ? 0 : 30026));
                arr_35 [i_6] [i_7] [i_6] = ((((((arr_12 [8] [i_7 - 1]) ? ((1441065988 ? var_12 : 363221017)) : (arr_31 [i_6])))) ? 2825 : 2349235297536760628));
            }
        }
    }
    #pragma endscop
}
