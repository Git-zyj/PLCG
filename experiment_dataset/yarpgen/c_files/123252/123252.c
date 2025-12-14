/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 + 4] [i_0] [i_0 - 1] [i_1] &= arr_7 [i_0] [i_0 - 3] [i_0] [i_3];
                                arr_14 [i_3] [i_3] [i_2] [i_3] = (arr_6 [20] [i_1] [i_2]);
                                var_20 = (arr_10 [15] [i_3] [15] [i_3] [i_4] [i_2] [i_3]);
                                var_21 -= (var_6 - (arr_1 [i_0]));
                                var_22 = -104;
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_0] = ((((((arr_3 [i_0] [i_0 - 4] [i_0 - 4]) / (arr_8 [i_0 + 1] [i_0 + 4] [i_0] [i_0 + 3] [i_0 + 3])))) ? (min((arr_3 [i_0] [i_0 + 4] [i_0 + 1]), -9)) : (arr_0 [i_0 + 2] [i_0 + 2])));
            }
        }
    }
    var_23 = (max((min(var_0, (max(32768, var_4)))), var_15));
    var_24 = ((((((-3 != 32774) >= ((min(var_1, var_16)))))) - -32780));
    #pragma endscop
}
