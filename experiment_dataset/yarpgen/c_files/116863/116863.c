/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, 1730192988));
                                arr_16 [i_0] [i_1 - 4] [i_0] [0] [i_4 - 1] = (!((min(((min(-64, -1))), 64))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1 - 2] = (max((((arr_6 [i_2 + 1] [i_1] [i_1] [8]) ? (arr_11 [i_2 + 1] [i_0] [i_0] [i_0 + 1]) : (min(1660929953, 231)))), ((~(arr_9 [i_0 + 1])))));
                    var_12 = (min(((((((arr_13 [i_2] [i_2] [i_1] [13] [i_0]) ? (arr_5 [i_0 - 1] [i_1 - 2] [i_2]) : 231))) ? (arr_3 [13] [i_0]) : (!63))), (!0)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_13 = (max(var_13, ((1621215775 ? -1660929959 : 1))));

                            /* vectorizable */
                            for (int i_9 = 1; i_9 < 15;i_9 += 1)
                            {
                                var_14 &= (((arr_18 [i_9 - 1]) ? 9223372036854775793 : (arr_19 [i_6 - 2])));
                                var_15 = (min(var_15, (((~(arr_2 [i_7] [i_9 + 1]))))));
                                var_16 = ((arr_11 [i_7] [i_5] [i_7] [i_8]) ? (arr_14 [i_5] [i_5] [i_6] [i_7] [i_8] [i_8] [i_9 + 1]) : (arr_14 [i_5] [i_6] [i_7] [i_7] [i_8] [i_9 - 1] [i_9 - 1]));
                            }
                            for (int i_10 = 0; i_10 < 16;i_10 += 1)
                            {
                                arr_34 [i_10] [i_6] = (min((((!(arr_5 [4] [i_6] [i_5])))), (((arr_3 [i_5] [i_5]) ? 2304540994975095423 : (arr_3 [5] [15])))));
                                var_17 = (~((~(arr_13 [i_6 - 2] [i_6 - 2] [i_6 - 1] [4] [i_6 - 1]))));
                                arr_35 [14] [i_10] [i_8] [i_8] [8] [i_8] [i_8] = (!1660929953);
                            }
                            for (int i_11 = 2; i_11 < 15;i_11 += 1)
                            {
                                arr_38 [i_11] = -1;
                                arr_39 [8] [i_6] [4] [i_8] [i_11] = ((((min((arr_24 [i_5] [i_6 - 1] [i_7] [i_8]), (arr_24 [i_11] [i_8] [i_7] [i_5])))) ? (arr_11 [i_5] [i_5] [i_6 - 1] [i_11 + 1]) : ((min(-1660929954, -546621638)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_18 = ((-((max((arr_40 [i_6 + 2] [i_6] [i_6] [i_6 + 2]), (arr_24 [i_6 + 2] [7] [i_6 - 1] [i_6 + 2]))))));
                            arr_45 [i_5] = 24;

                            for (int i_14 = 0; i_14 < 1;i_14 += 1)
                            {
                                var_19 += ((!((min((arr_6 [i_6 - 1] [i_5] [i_12] [i_13]), ((24 ? 546621637 : 32704)))))));
                                arr_48 [i_5] [i_14] [i_12] [i_13] [i_14] [i_12] = ((((((arr_46 [i_5] [i_5] [i_6] [1] [i_13] [9]) ? (arr_36 [i_14] [i_13] [0]) : (arr_36 [i_13] [i_12] [i_6 - 1])))) ? (arr_36 [i_12] [i_6 + 2] [i_5]) : ((min((arr_36 [i_5] [i_6] [i_12]), (arr_46 [i_14] [i_13] [i_12] [i_12] [i_6] [i_5]))))));
                                arr_49 [i_5] [i_12] [i_13] [i_14] = (arr_32 [i_14] [i_13] [i_12] [i_6] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min((!var_7), (min((!var_1), -var_6))));
    #pragma endscop
}
