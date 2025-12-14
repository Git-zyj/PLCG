/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_1] [0] = 128;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = 111;
                                var_16 ^= -var_6;
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_2] [i_2] = (max((arr_13 [i_0] [0] [i_2]), 128));
                }
            }
        }
    }
    var_17 ^= (+-127);
    #pragma endscop
}
