/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((-(((arr_3 [i_0]) ? var_2 : (arr_2 [i_1] [9]))))));
                var_16 ^= (max((((arr_3 [i_1 - 3]) * var_5)), ((((arr_1 [i_1 + 3]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 2]))))));
            }
        }
    }
    var_17 = ((var_7 ? var_5 : var_0));
    var_18 = var_6;
    #pragma endscop
}
