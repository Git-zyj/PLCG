/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_9);
    var_11 = var_7;
    var_12 = 75;
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [0] [i_1] [i_1] = 50822;
                    var_14 = min((arr_2 [i_1 - 1]), (((((29 ? 18446744073709551609 : 1))) ? (0 / 18446744073709551614) : 0)));
                }
            }
        }
    }
    #pragma endscop
}
