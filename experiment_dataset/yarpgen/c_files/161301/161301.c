/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_9);
    var_17 = (min(((((min(217, 120))) ? 1 : 9641575316606557153)), 9641575316606557172));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = 32891;
                                var_18 = (~16620);
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_1] = 15495;
            }
        }
    }
    #pragma endscop
}
