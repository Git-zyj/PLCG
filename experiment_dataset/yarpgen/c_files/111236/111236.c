/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_5;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_20 = ((((var_2 ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 2]))) ^ ((65 ? var_0 : 1))));
        arr_4 [2] [i_0] = (((arr_2 [i_0 + 1]) + (arr_2 [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_21 = ((var_10 >> (((((arr_7 [i_1]) << (var_13 - 663319726540148422))) - 851937))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_22 -= arr_9 [1] [i_2] [2];
                    var_23 += ((var_9 / (arr_8 [i_1])));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_3] [i_4] [i_4] = var_0;
                        var_24 = ((var_9 ? (arr_7 [i_1]) : ((1 ? 1 : 122))));
                        var_25 = 0;
                    }
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        arr_18 [i_1] [1] [3] [i_5] = (!102);
                        arr_19 [i_1] [i_3] [i_2] [i_1] = (((arr_7 [i_1]) ? 0 : ((((arr_8 [i_3]) < (arr_5 [i_1]))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                var_26 = (min(var_26, (arr_22 [i_6] [i_7])));
                var_27 = (min(var_27, ((!((((var_18 && (arr_22 [i_6] [i_7])))))))));
            }
        }
    }
    #pragma endscop
}
