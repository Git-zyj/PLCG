/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_14;
    var_19 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] [i_3] [i_4] = ((-(arr_2 [i_0])));
                                var_20 *= ((~((~(min(0, var_5))))));
                            }
                        }
                    }
                }
                var_21 = var_14;
                var_22 = (var_9 ^ 345296338);
            }
        }
    }
    #pragma endscop
}
