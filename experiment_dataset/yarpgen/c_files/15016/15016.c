/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = ((max((arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2]), (arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2]))));
                arr_5 [i_1] [i_0] = ((var_10 ? (((((!201) != ((var_7 ? (arr_2 [i_0] [i_1] [i_0]) : 262143)))))) : (((~55) % ((var_3 ? (arr_3 [i_0] [i_1] [i_1]) : (arr_2 [i_0] [i_1] [i_1])))))));
                var_16 = (((-(1793993066091754934 % 18446744073709551615))));
            }
        }
    }
    var_17 = var_5;
    var_18 = ((min(-3228694522125737328, (((-242194396 ? var_14 : -78))))));
    var_19 ^= var_10;
    #pragma endscop
}
