/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (((max((((0 ? (arr_3 [i_0] [i_0]) : var_2))), ((var_2 ? 1 : var_19)))) <= ((((arr_1 [i_0] [i_0 - 1]) ^ (arr_1 [i_0 - 1] [i_0 - 1]))))));
                var_21 = (arr_2 [i_0] [i_1] [i_0]);
            }
        }
    }
    var_22 = ((max(var_10, ((max(1, var_7))))));
    var_23 = var_6;
    #pragma endscop
}
