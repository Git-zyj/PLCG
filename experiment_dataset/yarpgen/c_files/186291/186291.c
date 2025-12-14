/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 ^= (((arr_6 [i_3] [i_3]) == (max(((((arr_11 [i_4] [i_3] [5] [5]) / (arr_15 [i_0] [i_1] [i_4] [i_3] [i_4])))), ((var_11 ? var_7 : (arr_7 [i_3 + 1] [i_1])))))));
                                arr_16 [i_0] [18] [i_0] [22] [i_2] [i_4] [i_4] = (((arr_9 [19] [i_2] [i_3 - 1] [i_0 + 1]) << ((((arr_15 [i_0] [i_1] [i_2] [i_3] [i_4]) ? 4 : (arr_10 [i_0] [i_0] [9]))))));
                                arr_17 [i_4] [i_4] [0] [i_2] [i_4] [i_4] = arr_8 [i_4] [i_3] [i_2] [i_0];
                                arr_18 [i_4] [i_2] [i_4] = (((((((var_10 ? 1 : var_7))) ? ((255 ? var_2 : (arr_9 [i_0] [20] [i_2] [i_4]))) : (((var_3 + (arr_13 [i_4] [i_1] [9] [1] [i_1])))))) | (((min(244, 119))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_26 [i_5] [i_5] = var_8;

                            for (int i_7 = 1; i_7 < 23;i_7 += 1)
                            {
                                arr_31 [i_7] [i_5] [i_5] [i_0] = ((((-76 ? (min(1337084151713322605, 119)) : (((-72 ? 41473 : (arr_25 [18])))))) >= ((((!((min(244, (arr_1 [i_6]))))))))));
                                arr_32 [i_0 - 2] [20] [19] [i_5] [i_5 - 1] = (((arr_20 [i_5] [i_0 + 2] [i_5 + 1] [i_5 + 2]) ? ((((((arr_21 [i_5 + 1]) <= -10))) + ((var_1 ? (arr_0 [i_0]) : -10)))) : (((!(arr_29 [i_0 - 2] [i_5 + 2]))))));
                                arr_33 [i_0] [i_1] [1] [i_5] [i_6] [i_6] [i_5] = ((-((~(!9)))));
                            }
                            arr_34 [i_5] [i_1] [i_5 - 1] [i_6] = (((-10 + 2147483647) << (((1 != 114) - 1))));

                            for (int i_8 = 3; i_8 < 21;i_8 += 1)
                            {
                                arr_38 [i_0] [i_1] [i_5] [i_6] [i_1] = (max((max((max(48, -31977020)), ((24063 >> (var_10 - 14228))))), ((9 ? (114 <= -51) : (((arr_28 [i_6] [i_1] [i_5] [i_1]) ? (arr_20 [i_5] [1] [3] [i_5]) : var_0))))));
                                arr_39 [i_8] [i_5] [i_5] [i_5] [i_0] = ((~(-41473 & 1)));
                                arr_40 [i_0] [i_5] [i_5] [i_5] [i_6] [i_6] [i_8] = (262143 - 87);
                            }
                        }
                    }
                }
                arr_41 [i_0] [1] = ((((116 >= (max(-48, var_2)))) ? 101 : ((min(97, (min((arr_1 [12]), var_7)))))));
                arr_42 [i_0] [i_1] = ((((max((arr_11 [i_0 - 3] [i_0] [i_0] [i_0]), (arr_30 [i_1]))))) & -8493952471199345299);
            }
        }
    }
    var_13 = var_3;
    #pragma endscop
}
