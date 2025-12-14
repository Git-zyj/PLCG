/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (max(var_13, 32767));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_20 |= 2147483648;
        arr_2 [0] [i_0] = var_0;
        var_21 = ((~(arr_0 [i_0 - 2])));
        arr_3 [10] = ((701013176074224750 ? 32751 : -32751));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] [i_2] [i_3] [i_1] [i_2 + 2] [i_2] [i_1] = 15724254541971798979;
                                arr_20 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] = (min(((max((~-4472875324562746669), ((min((arr_17 [i_1] [i_1] [i_1] [2] [i_1]), 0)))))), (min(((12729939299133328586 >> (52138 - 52127))), 8416960874354543058))));
                            }
                        }
                    }
                }
                var_22 ^= (max(var_5, ((((arr_4 [i_2 + 3]) << (var_15 - 4669280075847383739))))));
                var_23 = (min(((min((arr_7 [3] [i_1]), var_18))), 12729939299133328586));
                var_24 = (max(((-var_17 ? (((-(arr_4 [i_1])))) : 12729939299133328586)), var_18));
            }
        }
    }
    var_25 += -6100;
    #pragma endscop
}
