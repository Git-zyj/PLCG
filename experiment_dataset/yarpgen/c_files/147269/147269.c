/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (~(!63));
                var_10 *= (((+-16422) | (((arr_0 [i_0 - 1]) | (arr_5 [i_0] [i_1 - 4])))));
                var_11 = (min(var_11, (((((~((var_5 << (((var_7 + 1635278043) - 11)))))) ^ (~-2537))))));
            }
        }
    }
    var_12 ^= var_5;
    #pragma endscop
}
