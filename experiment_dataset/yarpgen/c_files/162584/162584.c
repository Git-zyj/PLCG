/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 12319));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_15 = var_7;
            arr_6 [i_0] [i_0] [i_1] = var_4;
            arr_7 [i_0] [i_0] = ((((4462233644374861838 ? (((arr_3 [i_0] [i_0] [i_1]) / 4462233644374861838)) : -8810397760750067146)) / var_10));
            arr_8 [i_0] [i_1] [13] = ((-4462233644374861827 ? (((5 * (arr_5 [i_0] [i_1])))) : ((-4462233644374861827 ? -4462233644374861838 : var_11))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_16 = ((~(max((arr_5 [i_1] [i_3 + 1]), (arr_14 [i_4 + 1] [i_4 - 2] [i_4] [i_4] [i_4 + 2] [i_4 - 2])))));
                            var_17 = (max(var_17, -49));
                            var_18 += (((4462233644374861827 / (max(var_3, 4462233644374861833)))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] = (((max(-4462233644374861840, 4462233644374861844)) & (((arr_13 [i_0] [i_5] [i_5]) / var_9))));
            var_19 = ((~(arr_0 [i_5])));
            var_20 = (min(var_20, 1));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_23 [i_0] = ((-79798897 ? 4462233644374861838 : 25947));
            arr_24 [i_0] [i_0] = (max(-79798897, ((((arr_20 [i_0] [i_0] [i_0]) > (arr_20 [i_0] [i_0] [i_0]))))));
            var_21 += 79798896;
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                {
                    arr_32 [i_0] [i_0] [i_0] [i_0] = (((min(var_9, (arr_4 [i_7 + 1]))) & (((~(arr_16 [i_0] [3] [i_0] [i_0] [1]))))));
                    var_22 = ((~(!-4462233644374861844)));
                    arr_33 [i_8] = (min(((((arr_12 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]) & (arr_12 [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1])))), ((1 * (arr_14 [i_8] [i_8] [i_7] [i_7] [i_7] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
