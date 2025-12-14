/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = (!1926595523);
                            var_14 = ((~(-8619 + 5020518122141309594)));
                            var_15 = (((8101 ? 61 : 1869562331)));
                        }
                    }
                }
                var_16 = (((-var_3 | 8112949112740082320) ? (((((max((arr_9 [i_1] [i_0]), (arr_5 [i_1] [i_0]))) <= ((var_8 ? (arr_7 [i_1]) : (arr_2 [i_0 + 1] [i_0]))))))) : (arr_5 [i_0] [i_1])));
                arr_11 [i_1] = (((arr_10 [i_1] [13] [i_0] [i_0]) ? 12126 : var_0));
            }
        }
    }
    var_17 = ((min((max(2098051005, var_3), 474141124))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_18 = (((arr_12 [i_4]) >= var_9));
        arr_15 [i_4] [i_4] = ((~(arr_10 [i_4] [i_4] [i_4] [i_4])));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_24 [i_7] [i_5] [i_6] = ((~(arr_18 [i_5])));
                        arr_25 [i_4] [i_7] [i_7] [i_4] = ((((arr_18 [i_7]) ^ -2827899818925380090)));
                    }
                }
            }
        }
    }
    var_19 &= var_0;
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                var_20 = (min((arr_27 [i_8] [i_8]), ((~(arr_27 [i_9] [i_8])))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_21 = (((arr_4 [i_11] [i_8 + 1]) > -7));
                            arr_34 [8] [i_9] [i_8] [i_11] [i_11] = (3 >= 130023424);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
