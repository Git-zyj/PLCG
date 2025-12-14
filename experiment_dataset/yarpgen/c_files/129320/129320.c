/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((var_5 ? var_6 : (var_5 / var_6))) >= var_2)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 = (((var_0 ? (arr_1 [i_0] [i_0]) : (arr_5 [i_0] [4] [i_2]))));
                    var_15 = var_8;
                    var_16 = (max(var_16, (arr_2 [i_0])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_17 = -245;
                        var_18 += -1;
                    }
                    var_19 = arr_9 [i_0] [5] [i_4] [i_3 - 1];
                }
            }
        }

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_17 [i_0] [i_0] [i_6] = var_7;
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 8;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 7;i_8 += 1)
                {
                    {
                        arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] = ((((var_11 ? -1 : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6]))) <= (((arr_5 [i_0] [i_0] [i_0]) ^ var_3))));
                        arr_26 [i_0] [i_6] [i_0] = (((arr_23 [i_7] [i_6] [i_7] [i_7 - 1] [i_8 + 2] [i_7]) ? ((~(arr_24 [i_0] [i_8] [i_6] [i_6]))) : (((!(arr_20 [i_0] [i_0]))))));
                        var_20 = (min(var_20, ((((arr_19 [i_7 - 1] [i_7 - 2] [i_0]) < (1428699008 - var_2))))));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_21 = var_12;
            var_22 += ((var_8 != (arr_10 [i_0] [i_9] [i_9] [2])));
        }
    }
    #pragma endscop
}
