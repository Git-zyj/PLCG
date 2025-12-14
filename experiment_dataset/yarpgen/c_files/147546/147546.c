/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1525299227754562356;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = 1525299227754562352;
                    var_19 -= 3478511865;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [0] = (((arr_8 [i_0] [i_2 - 1] [i_4 + 4]) || -3478511865));
                                arr_15 [i_0] = (1 << 1);
                                var_20 = (min(var_20, ((((max((arr_11 [i_2 + 1] [i_1] [i_2 - 1] [i_3] [i_4 - 1] [i_3]), 65530)) % ((((1525299227754562356 ? var_0 : var_6)) >> (((max(2403878729443552591, var_14)) - 2403878729443552579)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
