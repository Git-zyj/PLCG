/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 ^= (min(((((arr_1 [i_0 - 1] [i_0 - 1]) >> (((arr_1 [i_0 - 1] [i_0 - 1]) - 5962378486453582576))))), 6379464500246349697));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = (arr_0 [11]);
                                var_22 = (min(var_22, (arr_5 [i_0] [4] [i_0] [i_0])));
                                var_23 -= (max(((min(-794500762, 95))), var_18));
                                var_24 = ((min(-95, 0)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 -= var_13;
    #pragma endscop
}
