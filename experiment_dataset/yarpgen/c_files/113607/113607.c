/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 *= (~255);
                                var_21 = (min(((((1 ? 15645609764119637345 : -78)))), (arr_2 [10] [i_0] [i_0 + 1])));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_0] = (!-25944);
                var_22 = ((-1078447901556847859 ? -1 : 72));
            }
        }
    }
    #pragma endscop
}
