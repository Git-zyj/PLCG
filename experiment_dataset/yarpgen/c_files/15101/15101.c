/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((((max(1, -770485727))) + ((var_0 ? var_9 : 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 *= (((arr_8 [10] [i_2] [i_1] [10]) / 1));
                            var_16 = arr_7 [i_0] [i_0] [i_1] [i_2];
                        }
                    }
                }
                var_17 = 1;
            }
        }
    }
    #pragma endscop
}
