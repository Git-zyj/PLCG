/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (-32767 - 1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_15 = 5304;
                            var_16 = 21702;
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_2] [i_1] = -27591;
                            var_17 = 32767;
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_18 += 437;
            arr_17 [i_5] [i_4] = 32757;
        }
        var_19 |= -23776;
        var_20 = 23795;
    }
    var_21 = -6631856819497745552;
    #pragma endscop
}
