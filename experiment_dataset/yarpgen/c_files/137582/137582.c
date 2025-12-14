/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_13 -= (min((((arr_0 [i_1 + 2]) ? (arr_3 [i_1 + 1] [i_1 - 2]) : (arr_0 [i_1 + 1]))), 63));
                var_14 = (arr_2 [i_1 + 1] [i_1 + 3] [i_1 - 1]);
                var_15 = (min((~var_5), ((((arr_0 [i_1 - 2]) << 1)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_11 [i_2] = (arr_6 [i_3]);
                var_16 *= (((62 & 805306368) * var_1));
            }
        }
    }
    #pragma endscop
}
