/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = arr_2 [i_0];

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    var_17 = (arr_0 [i_0] [i_1]);
                    var_18 = 0;
                    arr_8 [i_0] [i_1] [i_0] [i_2 + 2] = ((~((((max((arr_4 [8] [i_1] [i_0]), var_16)) > (arr_2 [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_19 += (((min((arr_6 [i_3] [i_1] [i_0]), var_6))) ? 2147483647 : ((var_8 ? ((0 ? (arr_6 [i_0] [i_1] [i_1]) : var_3)) : ((((arr_2 [i_1]) % 19))))));
                    var_20 = (min(var_20, var_14));
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_21 = (((((var_12 / (arr_15 [i_6] [i_5 - 3] [9] [i_5 - 1] [i_4])))) ? (((arr_7 [i_6] [i_6] [i_5 + 3] [i_1]) ? (arr_15 [i_6] [i_5] [i_5] [i_5 - 1] [i_4]) : var_16)) : (arr_7 [1] [2] [i_5 + 3] [i_1])));
                                var_22 *= (((((var_16 ? var_0 : 0))) * (!61)));
                                var_23 = ((2147483647 << (((((~127) + 145)) - 17))));
                                var_24 = (max(var_24, var_7));
                            }
                        }
                    }
                    var_25 = ((arr_0 [i_0] [i_1]) ? (((((arr_0 [i_0] [i_0]) > (arr_0 [i_0] [i_1]))))) : (min(var_12, 15279757699572557342)));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_21 [i_0] [i_1] [5] = (~var_14);
                    arr_22 [i_7] [i_0] [i_0] [i_0] = var_9;
                }
                arr_23 [i_0] = (i_0 % 2 == 0) ? (((((((((arr_0 [i_0] [i_1]) + 2147483647)) << (((var_0 + 27) - 12))))) < ((5011693229948779478 ? ((119 ? (arr_14 [i_1] [i_0]) : (arr_9 [i_0] [i_0] [i_0]))) : 1))))) : (((((((((((arr_0 [i_0] [i_1]) - 2147483647)) + 2147483647)) << (((var_0 + 27) - 12))))) < ((5011693229948779478 ? ((119 ? (arr_14 [i_1] [i_0]) : (arr_9 [i_0] [i_0] [i_0]))) : 1)))));
                arr_24 [i_0] [9] [i_0] = ((~(arr_15 [i_0] [4] [i_0] [i_1] [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 4; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 18;i_10 += 1)
            {
                {
                    arr_34 [i_8] [6] [i_10] [i_10 - 1] = 16083323396692768198;
                    var_26 += var_9;
                }
            }
        }
    }
    #pragma endscop
}
