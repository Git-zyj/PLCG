/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max((~9223372036854775807), -7183)));
    var_13 = (min(1110549369, var_4));
    var_14 = ((-((((((min(var_3, var_9)))) == 7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                arr_8 [4] |= (18 + 262016);
                var_15 *= -8;
                arr_9 [i_0] [i_1] [i_0] = 4988586392442217802;
            }
        }
    }
    #pragma endscop
}
