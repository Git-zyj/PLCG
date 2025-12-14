/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = 36;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 = ((((1908829081671830563 / ((var_11 ? -1908829081671830563 : 34)))) <= 1));
                    var_20 = ((((((arr_5 [i_1 + 3] [i_1 + 2] [i_1 - 1]) <= 1))) << ((((1 ? ((~(arr_6 [i_0] [i_0] [i_0]))) : 13941)) + 50654))));
                }
                arr_7 [i_0] = ((+(((arr_6 [i_1 + 2] [i_1 + 2] [i_1 - 1]) ? 12 : 51594))));
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    arr_18 [i_3 + 1] [i_4] [i_5] [i_5] = 23691;

                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        var_21 = 255;
                        arr_21 [i_5] = ((51592 ? (arr_1 [i_3 + 1]) : ((211 ? (arr_9 [7] [7]) : 42))));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_24 [i_3] [i_4] [i_5] [i_7] = 3660530679431008027;
                        var_22 = ((+((var_9 ? (arr_12 [4] [i_7]) : (arr_19 [i_3] [i_4] [i_3] [i_7])))));
                        var_23 = ((13961 ? var_8 : -856684251498706004));
                    }
                    var_24 = (arr_16 [1] [i_5] [i_4] [i_3 - 1]);
                }
            }
        }
        arr_25 [i_3 - 1] = (arr_19 [i_3] [i_3] [i_3] [i_3 + 1]);
    }
    var_25 = var_0;
    #pragma endscop
}
