/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 *= (min((min(-var_0, var_2)), (~var_8)));
                            arr_9 [i_1 + 1] [i_1] [i_1] [i_0] = (min(var_2, (((!((max(var_18, var_15))))))));
                        }
                    }
                }
                var_21 = ((-(min(((min(var_0, var_5))), (min(var_14, var_16))))));
                var_22 = (min(var_22, ((min(((~(min(var_6, var_7)))), (max(var_0, (min(var_4, var_9)))))))));
                arr_10 [i_1] = var_10;
            }
        }
    }
    var_23 ^= (min((min(var_17, var_19), (max(var_16, var_18)))));
    var_24 = (min(var_24, (((~(max((min(var_8, var_11)), (min(var_17, var_0)))))))));
    #pragma endscop
}
