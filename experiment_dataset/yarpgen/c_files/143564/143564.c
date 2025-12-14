/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);
        var_19 = ((85 ? 10932745 : 234199268));
    }
    var_20 = (max(var_20, (((max(var_0, ((max(var_1, 53256)))))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                var_21 += (((arr_3 [i_1]) > (1 | 126976)));
                var_22 = (max((max(11, 65535)), ((((!243) && ((min((arr_5 [i_2] [i_2]), (arr_1 [i_1])))))))));
            }
        }
    }
    var_23 = (max(12, 63));
    var_24 = ((var_7 * (1 / 18)));
    #pragma endscop
}
