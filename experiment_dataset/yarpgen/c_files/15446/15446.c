/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = (min((((((arr_3 [i_0] [i_1] [i_0]) ? (arr_0 [i_0]) : 77)))), (min(18, (arr_3 [i_0 - 2] [i_0] [i_0 + 1])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_12 = ((33898 ? (arr_1 [i_2] [i_1 + 2]) : ((0 ? (arr_5 [i_0]) : 246))));
                    arr_8 [i_0] = ((1 ? (((arr_1 [i_2] [12]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0]))) : 1));
                    arr_9 [i_0] [i_0] [15] = (arr_4 [1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 ^= (((arr_4 [i_0] [i_1]) > (~55702)));
                                var_14 = ((arr_1 [i_0 + 1] [i_0 + 1]) ? (arr_1 [i_0 - 2] [i_0 - 2]) : var_1);
                                var_15 = (min(var_15, (((((1 ? 30185 : 0))) ? -1367444523 : ((var_5 ? (arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : var_5))))));
                            }
                        }
                    }
                }
                var_16 = arr_5 [i_0];
            }
        }
    }
    var_17 = (((var_9 + var_5) | var_6));
    #pragma endscop
}
