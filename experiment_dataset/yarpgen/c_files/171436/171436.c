/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 ^= (!323010998);
                arr_6 [i_0] [i_1] = (min((arr_1 [i_0]), (arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 2])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                arr_14 [i_2 - 1] [i_3] [i_2] = (min((arr_12 [8] [i_3]), 1));
                var_16 -= (((1 ^ ((min((arr_1 [i_3]), var_5))))));
            }
        }
    }
    #pragma endscop
}
