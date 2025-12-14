/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 ^= (((arr_1 [i_1]) < ((~(arr_0 [i_0] [0])))));
                var_12 *= (arr_6 [i_0 + 3]);
                var_13 = (max((((arr_4 [i_0]) & 5593)), (!-81)));
                var_14 = (max(var_14, ((((~(22178 ^ var_4)))))));
            }
        }
    }
    var_15 &= var_7;
    #pragma endscop
}
