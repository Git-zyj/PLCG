/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = max(8699583936531767563, 17373807295188632193);
                arr_5 [i_0] = var_9;
                arr_6 [i_0] [i_0] [i_0] = (!-23);
                var_14 = (((!var_13) ? ((((89 ? var_11 : (arr_1 [i_0]))))) : var_9));
            }
        }
    }
    var_15 ^= ((var_3 ^ (((~(~-7776))))));
    var_16 *= (max(7623736400389196975, (960667338895443440 - var_0)));
    var_17 = var_0;
    #pragma endscop
}
