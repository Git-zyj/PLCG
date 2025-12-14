/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 ^= (min((arr_2 [11]), ((-((~(arr_8 [i_2] [i_1] [i_1] [i_3])))))));

                            for (int i_4 = 3; i_4 < 15;i_4 += 1)
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (arr_2 [i_4 - 3]);
                                var_14 ^= (min(-14, ((-14 ? (((arr_8 [i_2] [i_3] [i_3] [i_3]) & -163589864)) : (14 > 115)))));
                            }
                        }
                    }
                }
                var_15 = 250;
            }
        }
    }
    #pragma endscop
}
