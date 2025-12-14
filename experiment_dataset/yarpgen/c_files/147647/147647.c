/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (max(10375673757269640642, (80 != var_3)));
                var_14 = (min(var_14, 99));
                arr_7 [i_0] [i_0] [i_0] = (~80);
            }
        }
    }
    var_15 = (((1 >= var_9) ? 71 : var_2));
    var_16 = (max(var_16, (~var_7)));
    #pragma endscop
}
