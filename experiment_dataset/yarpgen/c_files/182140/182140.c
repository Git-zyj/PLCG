/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = arr_1 [10];

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_21 = ((var_4 ? (arr_0 [i_0] [i_1]) : (((-330398807 && (arr_4 [i_1]))))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_22 = (((arr_2 [i_1]) && var_12));
                            var_23 ^= (((arr_2 [i_1]) ? var_18 : -330398807));
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    var_24 ^= (((arr_8 [i_6] [16] [12]) ? (arr_14 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6] [2]) : (arr_14 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6] [i_6 + 1] [i_6 - 1])));
                    arr_19 [i_1] [i_1] = ((-330398807 ? -83 : 1));
                    var_25 = (arr_12 [i_1] [i_1]);
                    arr_20 [i_1] [i_0] [i_1] [i_1] [i_5] [i_6] = (arr_9 [0] [i_1] [i_5] [i_5]);
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    arr_24 [i_7] [i_7] [i_1] [i_1] [i_1] [i_0] = var_11;
                    arr_25 [i_0] [i_1] [i_5] [i_7] [i_7] = (var_3 - var_5);
                    arr_26 [i_1] [i_5] [i_5] [i_5] = ((var_14 ? (arr_13 [i_0] [i_0] [i_1] [18] [i_5] [i_5] [i_7]) : (arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_7] [i_0])));
                }
                var_26 = ((((var_16 ? 0 : (arr_4 [i_1]))) == (arr_8 [i_0] [i_1] [20])));
            }
        }
    }
    #pragma endscop
}
