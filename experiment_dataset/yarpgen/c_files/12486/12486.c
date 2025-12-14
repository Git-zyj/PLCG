/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = ((var_8 == ((-(!224)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = ((((min(var_4, (arr_4 [i_0] [i_0])))) - (arr_4 [i_0] [i_1 + 2])));
                var_13 = ((var_7 ? 65530 : (min((((1 ? 4737 : -4737))), (max(-4602560500940450413, 32))))));
                var_14 = (min(-var_3, (arr_0 [i_1 - 1] [i_1 + 1])));
            }
        }
    }
    var_15 -= (((max(var_6, var_3)) > ((((max(var_3, 4602560500940450393)))))));
    #pragma endscop
}
