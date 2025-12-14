/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_4 > 9223372036854775807);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((((((((((-9223372036854775807 - 1) - (arr_0 [i_2]))) + 9223372036854775807)) + 9223372036854775807)) >> (((arr_0 [i_2]) ? (arr_0 [i_2]) : (arr_0 [i_2]))))))));
                    var_19 ^= (2989571344752536273 * -16315);
                    var_20 = (arr_5 [i_0] [i_1] [i_1] [i_1]);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_21 = (max(var_9, (((arr_2 [i_0] [i_1] [i_2]) + (arr_10 [i_0] [i_0] [i_2] [i_3])))));
                        var_22 = (i_0 % 2 == 0) ? (((~(((((((arr_9 [i_0]) + 9223372036854775807)) << (53500 - 53500))) | (((var_3 ? (arr_3 [i_0] [2]) : (arr_3 [i_0] [i_1]))))))))) : (((~(((((((((arr_9 [i_0]) - 9223372036854775807)) + 9223372036854775807)) << (53500 - 53500))) | (((var_3 ? (arr_3 [i_0] [2]) : (arr_3 [i_0] [i_1])))))))));
                        var_23 = -27291;
                    }
                    var_24 = var_2;
                }
            }
        }
    }
    var_25 = 9248;
    #pragma endscop
}
