/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 19074;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (~(min(var_11, 16145931162720610065)));
                var_13 &= (((!9223372036854775807) || -2227));
            }
        }
    }
    #pragma endscop
}
