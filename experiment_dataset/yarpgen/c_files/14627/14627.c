/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (((max(var_1, (min(var_2, 4794235856004105919)))) < ((min((~var_0), var_6)))));
    var_11 = var_5;
    var_12 = ((((var_5 ? -1291 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 0;i_4 += 1)
                            {
                                var_13 = ((min((arr_6 [i_0] [i_0] [i_2] [i_2]), var_3)));
                                var_14 = (arr_11 [i_0] [i_1] [i_2] [7] [i_3] [i_3] [i_3]);
                            }

                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                arr_15 [i_0] [i_0 - 2] [i_0] [i_0] [i_5] = var_4;
                                arr_16 [i_0] [i_0] [i_0] [6] [i_0] [i_5] [6] = ((((var_6 / var_0) != (arr_14 [i_0] [i_2] [1] [i_3] [i_0]))));
                                var_15 = ((-(((arr_2 [i_0]) | (arr_3 [i_0 - 1])))));
                                var_16 = (min(var_16, (((-(((!((min((arr_7 [i_1]), var_1)))))))))));
                            }
                        }
                    }
                }
                var_17 = ((((125829120 == (arr_5 [i_0] [i_1] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [i_6 - 2] [i_0] [i_7 - 1] = (((((arr_21 [i_0 - 2] [i_1] [i_6] [i_7]) ? (arr_11 [i_0] [i_1] [i_0] [1] [i_7 + 2] [5] [i_1 + 1]) : var_3)) / var_0));

                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 10;i_8 += 1)
                            {
                                var_18 = -var_4;
                                arr_25 [i_0] [i_8] [i_7 - 1] [i_7] [i_6] [i_1 + 1] [i_0] = ((arr_20 [i_0] [i_1]) | ((((arr_14 [1] [i_1 + 3] [i_1] [1] [i_1 + 1]) ? 154 : var_1))));
                                var_19 = ((var_7 != ((((arr_4 [i_0]) < 7344434277163763896)))));
                                arr_26 [i_1] [i_1 + 1] [i_6] [i_7] [i_1 + 1] |= (((arr_23 [i_0] [i_6 - 2] [i_1]) <= (arr_6 [i_1] [i_0 - 2] [i_1 - 4] [i_7 - 1])));
                            }
                            arr_27 [i_0] [i_0] = (((!(arr_0 [i_0]))) ? ((-(((var_3 != (arr_5 [0] [1] [i_0] [i_7])))))) : (max(((var_7 ? 1 : var_2)), (arr_6 [i_0] [2] [i_6] [i_7]))));
                            arr_28 [i_0] [i_0] = ((var_7 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((max((arr_10 [i_7] [i_0] [i_0] [i_0]), var_4)) | (min(1913149469, var_7))))));
                            arr_29 [i_0] [i_1] [4] [i_0] [i_7 - 1] = ((((var_5 != (arr_20 [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
