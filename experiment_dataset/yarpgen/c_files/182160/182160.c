/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_14 [i_1] [i_2] = var_3;
                        arr_15 [i_0] [i_0] [i_0] [i_0] [11] [i_0] = ((2617927443 | (arr_4 [i_0] [i_0] [i_0])));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_18 [i_0] [i_4] = var_0;
                            var_11 = (((((var_3 ? var_1 : 7))) ? ((((!(arr_10 [1] [i_1] [i_0] [i_4]))))) : -var_9));
                        }
                        var_12 = (min(var_12, (((var_9 ? 118 : (arr_0 [i_1]))))));
                        arr_19 [i_3] [i_2] [i_1] [i_0] [i_0] = ((1732837329 / (arr_8 [i_0] [i_2] [i_3])));
                    }
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_1] [i_0] = (((arr_0 [i_1]) ? (arr_5 [i_5 + 1] [i_1] [1]) : (arr_0 [i_1])));
                        var_13 = 127;
                        arr_25 [i_2] [i_2] = 9682;

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_14 = (max(var_14, var_10));
                            var_15 = 123;
                        }
                        var_16 = (arr_22 [i_5 - 1] [i_5] [7] [12]);
                    }
                    var_17 = (arr_12 [i_0] [i_0] [0] [i_2]);
                    var_18 = (~4016260403);
                }
                arr_28 [i_0] = min(var_0, (min((arr_11 [16] [i_0]), var_7)));
            }
        }
    }

    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        arr_31 [i_7 + 1] [i_7] = -9682;
        var_19 |= (((var_8 + 2147483647) >> (((arr_29 [10]) - 42499))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_20 = (((arr_30 [i_8]) ? (arr_10 [5] [1] [i_8] [i_8]) : ((-69 ? var_0 : 2035244605819464672))));
        arr_34 [i_8] [i_8] = arr_11 [i_8] [20];
        arr_35 [i_8] = (!(arr_12 [i_8] [i_8] [i_8] [i_8]));
        arr_36 [i_8] [1] = arr_2 [i_8] [i_8];
    }
    #pragma endscop
}
