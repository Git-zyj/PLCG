/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        var_18 *= ((((((arr_1 [i_0 + 1] [i_3 - 3]) ? (arr_0 [i_3 - 4]) : (arr_0 [i_3 - 2])))) ^ ((((((arr_1 [i_2] [i_1]) | var_13))) ? (((arr_6 [i_0] [i_0] [i_0 - 1] [i_0 - 1]) ? var_11 : (arr_5 [i_0] [i_0] [i_1] [i_0]))) : (~var_8)))));
                        var_19 = (arr_1 [18] [i_1]);
                    }
                    arr_9 [i_0] [i_0] [i_1 - 4] [i_1 - 4] = (((arr_6 [i_0] [i_1] [i_0 + 1] [i_1 + 1]) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : var_15)) : (((max((arr_0 [18]), (arr_0 [i_0])))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                {
                    var_20 = ((-((((min(var_0, (arr_18 [i_4] [i_4] [i_4] [8])))) ? (arr_11 [i_5 + 2]) : ((var_10 ? var_14 : var_4))))));

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        var_21 ^= (arr_2 [i_7]);
                        arr_21 [i_4] [i_4] [i_4] [i_7] [i_4] [i_4] = var_16;
                        var_22 = (var_13 + var_13);
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_23 = (min((min((arr_15 [i_6 + 3] [i_4] [i_6]), var_6)), (max((arr_15 [i_6 + 3] [i_4] [i_6]), (arr_15 [i_6 + 3] [i_4] [i_6])))));
                        var_24 = (min(var_24, (arr_0 [i_6])));
                        arr_25 [i_4] [i_4] [14] [8] [12] [i_6] = (((((arr_20 [i_4] [i_5 + 2] [i_6 + 2] [i_4]) ? (arr_15 [i_4] [i_4] [i_6 - 1]) : (arr_20 [i_4] [i_5 - 2] [i_6 - 1] [i_8]))) / (((arr_15 [i_4] [i_4] [i_6 + 2]) ? (arr_15 [3] [i_4] [i_6 + 1]) : (arr_15 [i_4] [i_4] [i_6 + 1])))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                var_25 = ((+(((arr_29 [i_9 + 1]) ? (arr_29 [i_9 + 1]) : (arr_29 [i_9 - 1])))));
                var_26 = max(((((((var_13 ? (arr_26 [16]) : var_6))) ? (arr_29 [i_9 + 1]) : var_16))), (max((arr_28 [i_9] [i_9 + 1]), (arr_29 [i_9 - 1]))));
            }
        }
    }
    #pragma endscop
}
