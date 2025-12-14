/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(28996, (max((var_0 + var_11), var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (max(((-(arr_2 [i_1]))), (arr_2 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = (-9223372036854775807 - 1);
                            var_17 ^= ((-((min(((max(var_6, (arr_3 [19] [i_1] [i_2])))), (arr_5 [i_3]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
