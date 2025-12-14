/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = (min(var_5, var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = (0 ? (arr_10 [i_0 - 1] [i_0]) : (arr_3 [i_1] [i_3 - 1] [i_3 + 1]));
                                var_16 = (arr_10 [i_0] [i_1]);
                                arr_14 [i_0] [i_1] [i_2] [i_4] = ((arr_9 [i_4] [i_4] [i_4] [i_4]) < (arr_7 [i_0] [i_1] [i_2] [i_4]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                arr_21 [i_5] [i_5] = ((arr_2 [i_6 + 1] [i_0 - 1]) ? var_9 : (arr_2 [i_6 + 3] [i_0 - 1]));
                                arr_22 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] = arr_13 [i_6 - 1] [i_6 - 1] [i_6 + 3] [i_6 + 1] [i_6];
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_17 = ((((((arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1]) ? (arr_23 [i_0 - 1] [i_1] [i_7] [i_8]) : (arr_23 [i_0 - 1] [i_0 - 1] [i_7] [i_8])))) && (arr_10 [0] [i_0])));
                        arr_29 [i_0] [i_1] [i_7] [i_8] [i_0] = (arr_9 [2] [i_1] [i_7] [i_8]);
                    }
                    arr_30 [i_0] [i_0 - 1] [i_0] [i_0 - 1] = (arr_16 [0] [i_7] [i_0] [i_0] [i_7] [10]);
                }
                var_18 = ((((((arr_19 [i_0] [i_0] [i_1] [i_1]) <= var_3))) < ((min((arr_19 [i_0] [i_1] [i_0] [i_1]), (arr_19 [i_0] [i_0] [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
