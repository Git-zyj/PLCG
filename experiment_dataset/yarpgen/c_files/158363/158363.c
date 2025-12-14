/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = (min(var_17, var_8));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((35923 ? 6644818659922268723 : 6644818659922268723));
                                var_18 = (arr_11 [i_4] [i_3] [19] [i_1] [i_0]);
                            }
                        }
                    }
                }
                var_19 = (min(var_19, (arr_11 [i_1] [i_0 - 4] [9] [i_0] [i_0 - 4])));
                arr_13 [i_0] [i_1] [i_1] = (arr_5 [i_0]);
                arr_14 [i_0] [i_0] [i_1] = 35942;
            }
        }
    }
    #pragma endscop
}
