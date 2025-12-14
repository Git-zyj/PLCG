/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    var_15 = (max((((((255 ? var_10 : var_11))) ? var_11 : (116 > 1152921504606846976))), (-127 - 1)));
    var_16 = (!var_12);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_17 ^= (arr_0 [i_0]);
                arr_5 [4] [4] &= ((~(((arr_3 [i_0 + 1] [i_0 + 2]) / (arr_3 [i_0 + 1] [i_0 + 2])))));
            }
        }
    }
    #pragma endscop
}
