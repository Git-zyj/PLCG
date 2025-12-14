/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1864896968;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_21 += (~5749);
                    var_22 ^= var_13;
                }
            }
        }
        arr_6 [i_0] = (((32 - -7441012501738594301) >= -9223372036854775805));
    }
    var_23 -= var_15;
    #pragma endscop
}
