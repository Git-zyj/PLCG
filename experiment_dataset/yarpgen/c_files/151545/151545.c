/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0 - 4] [i_0] = (max(((((arr_1 [i_0 - 3] [i_0 - 3]) <= 15644))), (arr_1 [i_0 - 3] [i_0 + 1])));
        arr_3 [i_0] [i_0 - 2] = var_1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 *= (((((max(var_10, 178)))) ? 193 : ((max((max(21850, 204)), 64)))));
                                var_18 = ((var_12 >> (((((arr_11 [i_0] [i_0] [i_0 - 3] [i_0 - 2]) + 13245394925162877480)) - 13245394925162877499))));
                            }
                        }
                    }
                    arr_14 [i_2] [i_2] [i_0 - 3] = (max(14, -63));
                }
            }
        }
        var_19 -= (!11);
    }
    var_20 = (var_5 ? (var_9 * 77) : (((221 % var_16) ? var_7 : (77 & 178))));
    var_21 = ((2147483647 ? ((min((max(21850, 35)), var_11))) : ((~(max(2147483647, 215))))));
    #pragma endscop
}
