/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 &= (arr_1 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = (~(((arr_9 [i_2 - 1] [i_1] [i_2] [i_2] [i_4] [i_3 + 1] [i_0]) ? (arr_9 [i_2 + 2] [i_1] [i_2] [i_3 + 1] [i_4] [i_3 - 2] [i_2]) : var_1)));
                                var_14 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((-((((var_2 ? var_9 : 3528046845389380739))))));
    var_16 = ((((min(var_3, ((-3528046845389380738 ? 0 : 51894))))) ? var_0 : var_3));
    #pragma endscop
}
