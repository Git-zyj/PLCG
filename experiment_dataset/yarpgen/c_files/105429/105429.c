/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_16, (((var_8 >= var_15) << (var_19 / 139583291)))));
    var_21 = (((var_1 + 8160) / var_14));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0 + 4] = 32765;
                var_22 = 8150;
                var_23 = (9223372036854775807 / 3);
                var_24 = (~9223372036854775790);
            }
        }
    }
    #pragma endscop
}
