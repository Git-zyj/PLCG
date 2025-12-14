/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (((-8113 ? (arr_0 [i_0 - 1]) : ((-8113 ? 8113 : var_7)))));
                var_21 = (((-2147483647 - 1) ? 0 : (!-8115)));
                arr_4 [i_1] = (max((arr_1 [i_0 - 1]), var_2));
                arr_5 [i_1] = ((((var_5 ? (52 && var_1) : 8188049885725003182)) / (((((var_1 < var_18) || -4307882833991326335))))));
                var_22 = -0;
            }
        }
    }
    var_23 = (~var_5);
    #pragma endscop
}
