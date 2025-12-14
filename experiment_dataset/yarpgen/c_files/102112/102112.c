/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_18 >> (var_17 - 29271)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 = ((0 < ((((((arr_0 [i_4] [i_1]) << (var_10 - 16130)))) ? 1746 : 920044430))));
                                var_22 = (min(var_22, (!var_17)));
                            }
                        }
                    }
                    var_23 = (arr_3 [16] [i_1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
