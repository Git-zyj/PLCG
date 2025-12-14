/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_17;
    var_20 = (((((1023 ? ((0 ? 1 : 0)) : ((max(0, 1)))))) ? ((var_0 << (((~10453135313253734695) - 7993608760455816883)))) : (((min(1, 65535))))));
    var_21 = 35184372088831;
    var_22 = 18;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [5] = var_15;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] = 7993608760455816921;
                        arr_12 [3] [3] [i_0] [i_3] [i_3] [i_3] = 1;
                        arr_13 [i_0] [i_1] [i_1] [i_0] [i_0] = ((((var_8 ? 1 : 131070))) ? (((arr_6 [i_2] [i_3]) | -5082890132700958486)) : (arr_3 [i_0] [i_3] [i_2]));
                    }
                }
            }
        }
    }
    #pragma endscop
}
