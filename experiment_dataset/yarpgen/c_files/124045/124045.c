/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (min(178, (((arr_2 [i_0] [i_1] [i_1]) % -716996644))));
                arr_4 [i_0] = ((~var_11) ? (~762645413) : ((var_1 ? (arr_2 [i_0] [i_1] [i_1]) : var_14)));
                arr_5 [i_1] = var_4;
            }
        }
    }
    var_20 += var_13;
    var_21 ^= (~var_16);
    #pragma endscop
}
