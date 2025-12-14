/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [9] [i_1] [i_1] = (arr_2 [i_0] [i_1]);
                var_14 = (max(var_14, ((~(59351 | 24880)))));
            }
        }
    }
    var_15 = (min(40653, -21911));
    var_16 = (max((min(var_1, var_6)), var_4));
    #pragma endscop
}
