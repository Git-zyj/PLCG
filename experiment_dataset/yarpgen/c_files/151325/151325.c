/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = ((((var_10 ? (arr_3 [i_0] [i_1 - 1] [i_0]) : var_0)) + (((arr_0 [i_1 + 2] [i_1 + 1]) ? 32756 : (((arr_2 [i_0]) ? 1 : var_10))))));
                var_13 = (min(var_13, 0));
                var_14 = ((((((1 ? var_2 : -25491))) ? var_1 : -var_5)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_15 ^= -19;
                var_16 = -30999;
            }
        }
    }
    #pragma endscop
}
