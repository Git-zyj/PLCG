/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (1 & ((((~(arr_6 [i_0] [13] [i_0] [i_0]))))));
                    var_20 = (((var_11 / 4294967295) - (arr_1 [16])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_4] [i_4] = (((max((16783835161041938593 + 0), ((min(var_15, 4294967295))))) & ((max(18217, (((254 != (arr_1 [i_1])))))))));
                                arr_17 [i_0] [0] [17] [12] [i_4] [i_0] [i_0] = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, (((1 && ((((~1662908912667613022) ? ((16376 >> (-1266540050 + 1266540054))) : ((var_16 >> (-1817371457744508341 + 1817371457744508354)))))))))));
    var_22 = (!(2147483647 || 47319));
    var_23 &= ((((-579118670 ? ((-22210 ? -702809707 : 16783835161041938603)) : (var_15 + 4774956166909301339))) / -var_8));
    #pragma endscop
}
