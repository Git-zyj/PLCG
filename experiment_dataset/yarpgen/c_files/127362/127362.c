/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = ((arr_1 [i_0]) ? (arr_1 [i_0]) : 40334);
        var_15 = (((arr_1 [i_0]) ? 40330 : (arr_0 [i_0])));
    }
    var_16 = (max(var_13, 12987210201528867033));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_10 [i_2 + 2] = arr_1 [i_1];
                        var_17 = (((arr_5 [i_2 + 1] [i_2]) != (arr_5 [i_2 + 1] [i_2 + 2])));
                        var_18 = ((((arr_0 [i_1]) ? var_7 : (arr_7 [i_1]))));
                        var_19 = (((arr_6 [2] [2] [i_1]) ? 74007008906088172 : (arr_4 [i_3] [i_2] [i_3])));
                        arr_11 [i_2] [i_2] [i_3] [i_4] [i_2 + 1] = (((arr_7 [i_1]) ? 74007008906088172 : ((((arr_1 [i_1]) ? var_2 : (arr_0 [i_2 + 2]))))));
                    }
                    var_20 = ((arr_7 [i_2]) ? ((((!(arr_5 [i_2 - 2] [10]))))) : ((74007008906088170 ? (arr_3 [i_3]) : (arr_4 [i_1] [i_2 + 2] [i_3]))));
                    var_21 = (arr_4 [i_1] [i_2] [i_1]);
                }
                var_22 = ((var_9 ? var_5 : (arr_2 [i_2])));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_23 = (arr_14 [i_5 + 1] [i_2 - 2] [i_5] [i_6] [i_5 + 1]);
                                arr_19 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] = ((min((arr_15 [i_5 - 1] [i_2] [i_2 + 2] [i_7 + 2] [i_2]), (arr_15 [i_5 + 2] [i_5 + 2] [i_2 - 2] [i_7 + 2] [i_7 + 2]))));
                                arr_20 [i_6] [i_6] [i_5] [i_6] [6] |= (min((((arr_18 [i_1] [i_1] [i_1] [8] [i_1]) - (((min((arr_14 [i_6] [i_1] [i_2] [i_2] [i_1]), var_10)))))), ((min((min(var_5, 1344047977)), ((min(10497, var_13))))))));
                                arr_21 [i_5] = var_8;
                                var_24 = arr_6 [i_7 - 1] [i_5 - 1] [i_2 - 1];
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((var_11 <= (min((max(21553, var_0)), var_13))));
    #pragma endscop
}
