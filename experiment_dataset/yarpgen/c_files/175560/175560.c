/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (!var_10);
            var_13 = (((arr_2 [i_0] [i_1]) >> (arr_4 [i_0] [i_0] [i_1])));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_14 = ((~(arr_2 [i_2] [i_2])));
            arr_9 [i_0] = 81;
            var_15 = ((~(((!(arr_7 [i_0]))))));
            var_16 = (min(var_16, (((!((((arr_6 [i_0] [i_0]) ? (arr_7 [i_2]) : (arr_6 [i_0] [i_0])))))))));
        }
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            arr_12 [i_0] = ((0 & (((~(arr_6 [i_0] [i_0]))))));
            arr_13 [i_0] [i_0] [i_0] = (arr_0 [i_3 + 2]);
            arr_14 [i_0] [i_0] [i_0] = (((arr_1 [i_3 + 1] [i_3 + 3]) >> (((arr_1 [i_3 + 2] [i_3 - 1]) - 8175292227713267201))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_17 = ((~(!20)));
                            var_18 = (max(var_18, -var_4));
                            var_19 = ((!(((var_6 ? (arr_0 [i_3]) : (arr_20 [i_6] [i_6] [i_6] [i_6] [i_0] [i_6] [i_0]))))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_20 = (((arr_23 [i_7] [i_7] [i_0]) + (arr_23 [i_7] [i_7] [i_0])));
            arr_25 [i_0] = (arr_0 [i_7]);
        }
        arr_26 [i_0] [i_0] = (((var_10 ? var_0 : var_1)));
        arr_27 [14] &= ((var_6 >> ((((var_1 ? var_12 : (arr_4 [i_0] [1] [1]))) - 64))));
    }
    var_21 = var_9;
    var_22 *= var_0;
    #pragma endscop
}
