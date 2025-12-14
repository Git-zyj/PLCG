/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += 7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (min(var_14, 886049649));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = -410489716;
                                var_16 = (((((((((arr_9 [i_4 + 1] [i_0] [i_2 + 2] [16] [i_1] [i_0]) | (arr_9 [i_0] [i_1] [10] [i_3 + 1] [i_4 + 1] [i_4 - 1])))) ? 124 : ((var_6 << (((arr_11 [i_3 - 4]) - 96))))))) ? ((((arr_9 [i_0] [i_0] [i_2 + 2] [i_3 - 2] [7] [i_3 - 3]) == (arr_9 [i_0] [i_0] [i_4 - 1] [i_0] [i_0] [i_3 - 2])))) : (--32)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
