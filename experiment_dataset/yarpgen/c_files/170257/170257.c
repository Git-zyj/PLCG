/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [15] [9] [i_2] [i_0] = (((((((max(0, -2060357019))) ? (max(18446744073709551615, (arr_6 [i_0] [12] [i_2]))) : var_2))) ? (~-1) : (((arr_4 [i_0] [i_0 - 1] [0]) ^ (arr_5 [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_1] [i_2] [i_3] &= (((max(((~(arr_12 [6] [i_1] [i_1] [i_2] [i_3] [i_3] [i_4]))), (arr_13 [i_0 + 2] [i_0] [i_2] [i_2] [i_4]))) | ((((1306455146 ? (arr_2 [i_0]) : 0))))));
                                var_14 ^= ((((min((arr_3 [i_0 + 2] [i_0 + 2]), 8966592449033891744))) ? ((0 ? (arr_4 [i_0 + 2] [i_0 + 2] [i_0 - 1]) : (arr_1 [i_0 + 2]))) : (-1 && 1306455146)));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_4] = ((16396 && (arr_4 [i_1] [i_3] [i_4])));
                                var_15 = (max(var_15, (~1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 ^= -20;
    var_17 = var_4;
    var_18 ^= (((min((!-1306455147), (!var_4))) ? var_13 : var_5));
    #pragma endscop
}
