/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (((((143785498698371342 ? 1 : (~37359)))) ? var_4 : (min(-2559386096235618246, var_9))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 *= (min((min(1, 1)), 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_2] [10] = (((~((14314455515639203176 ? 118 : 1)))));
                    var_12 ^= (((1 ? 1 : 50134)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] = ((1 ? (((!50138) ? ((-1443414196253642370 ? 47165626368130315 : 9223372036854775807)) : (((1 ? 1 : 62))))) : ((((max(1, 21))) ? ((255 ? 1154 : 18399578447341421283)) : (((min(19, 131))))))));
                                arr_14 [i_2] = (min(14, 204));
                                var_13 = (((-1 ? 2 : -91)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
