/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((((((arr_5 [i_2 + 1] [i_2]) ? 2233785415175766016 : 9718))) ? (min((arr_8 [i_2 + 1] [i_2] [i_2 + 3] [i_2 + 1]), (arr_8 [i_2 + 1] [i_2] [1] [7]))) : (!3580973)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 ^= 3580954;
                                var_18 = (max(var_18, ((min(((min((min(-3580973, 3580966)), -3580979))), (min(2359021274960502271, 16)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 -= (!-4019958908329349485);
    #pragma endscop
}
