/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 += arr_3 [10];

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_4] = ((((min((arr_4 [i_2 + 1] [i_3 + 1] [i_3 - 1]), (arr_4 [i_2 - 1] [i_3 - 1] [i_3 - 1])))) ? ((-(arr_3 [i_0]))) : (~1)));
                                var_15 = ((((min(3969834957, 241)) > (max(3, 3969834957)))));
                            }
                        }
                    }
                    var_16 *= (max((arr_5 [8] [i_0] [i_1] [i_2]), 1122860518111633787));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_16 [i_0] [i_1] [i_0] = ((min(3, (min(241, 140737488355327)))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_17 = (min((min(var_8, (max(3969834945, var_1)))), ((((arr_1 [i_0] [i_6 + 1]) ^ 11680)))));
                                var_18 = (arr_0 [i_0]);
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((arr_5 [i_0] [i_1] [i_7 + 2] [i_7]) & (arr_5 [i_0] [i_5] [i_7 + 3] [i_7]))) >> ((87907400 >> (1806594402 - 1806594380)))));
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] = (max(((((arr_15 [i_0] [i_0] [i_5] [i_5]) > (((arr_0 [i_0]) ? var_5 : (arr_13 [i_0] [i_0] [i_0])))))), ((1 ? (min(3239636459060337380, (arr_3 [i_0]))) : var_0))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_25 [i_0] [i_0] [i_0] = -1439864146;
                    arr_26 [i_0] = (18446603336221196266 < 4294967289);
                }
            }
        }
    }
    var_19 = (min(-var_6, var_6));
    #pragma endscop
}
