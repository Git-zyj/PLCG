/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (max((!19), (((arr_1 [i_1]) ? ((max(6851, var_7))) : ((var_2 ? 3 : var_2))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, 2740491593899698647));
                                var_14 ^= (min(var_9, ((~(arr_11 [i_0] [1] [i_2] [i_3] [i_4])))));
                                arr_13 [i_0] [i_2] [i_4] = (((min((8388607 - 41), (((113 << (((arr_6 [i_0] [i_0] [i_0] [i_0]) - 82))))))) != (((~(arr_7 [i_4] [i_3] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((-((min(var_0, (min(var_2, var_7)))))));
    #pragma endscop
}
