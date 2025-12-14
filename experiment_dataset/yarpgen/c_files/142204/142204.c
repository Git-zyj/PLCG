/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_16 = min((min((!-1475095445), var_5)), (((-17428 && ((max(2147483642, var_15)))))));
        arr_3 [i_0] [i_0 - 4] = (min(((min((3 > var_9), var_12))), (min((((var_1 << (1171544362 - 1171544362)))), (min(var_6, 0))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_3] [i_3] = ((((max(247, var_10))) ? (0 < 2851051040) : (var_5 || var_9)));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] [i_3] [i_4] [8] [8] [i_3] [i_1] = max((min(-1171544362, (var_6 >= 15))), ((((!var_15) < (max(619760738, var_0))))));
                                var_17 = ((-(max(-1171544362, (min(var_5, 1171544355))))));
                            }
                        }
                    }
                    var_18 = (((-9223372036854775807 - 1) ? 164 : 3401747699));
                }
            }
        }
        var_19 = (max(4294967281, (3120810535 <= 32767)));
    }
    var_20 ^= var_8;
    #pragma endscop
}
