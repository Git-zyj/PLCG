/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 *= (max(((-7075 ? var_5 : var_2)), var_8));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 &= (22681 == 26665);
                    var_15 -= ((+(((var_4 + 9223372036854775807) << (((arr_1 [i_2]) - 2454101746))))));
                }
            }
        }
        arr_9 [i_0] [i_0] = (((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 2]) : var_11));
    }
    var_16 ^= (max(((((var_7 || 4680804655181454898) || var_0))), ((((max(-24152, var_3))) * ((var_7 ? 25889 : var_0))))));
    #pragma endscop
}
