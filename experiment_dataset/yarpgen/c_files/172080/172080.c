/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((4294967287 ^ 1) & (((1 | 35) | (0 ^ 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (9 - -462149833);
                var_15 = (((((3572478009 & var_8) ^ (1 | 0))) & ((((var_7 ^ (arr_3 [8] [i_1] [i_0]))) & (75 ^ 1)))));
            }
        }
    }
    #pragma endscop
}
