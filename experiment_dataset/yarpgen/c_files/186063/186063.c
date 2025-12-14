/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((((((((1 ? 35 : 0)) != 1))) ^ ((((~var_7) == (arr_2 [i_0 - 1] [i_0 - 1])))))))));
                var_16 = (var_4 ^ var_14);
                var_17 ^= ((+(max((arr_5 [i_0 + 1] [i_0 - 1]), (arr_0 [i_0 + 1])))));
                arr_6 [13] [13] = (~(max((max(1, var_11)), (arr_3 [i_0 + 1] [i_0 + 1]))));
            }
        }
    }
    var_18 = (var_8 ? var_1 : ((1 ? 1 : var_3)));
    #pragma endscop
}
