/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 <= ((27 ? 31457280 : 967))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (arr_1 [i_0] [i_1]);
                var_14 = (arr_0 [i_1] [i_1]);
                var_15 |= ((min(967, (arr_1 [i_1] [i_0]))));
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
