/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((0 ? var_0 : var_9));
                var_19 = 1;
                var_20 = var_0;
                var_21 = ((((min((((arr_4 [i_1]) ? (arr_5 [i_0] [i_1]) : var_15)), var_15))) ? (arr_5 [i_1] [i_0]) : (arr_0 [i_0])));
                var_22 = (((arr_0 [i_0]) ^ (((arr_0 [i_0]) ? var_3 : (arr_5 [i_0] [i_1])))));
            }
        }
    }
    var_23 |= 27;
    var_24 = var_8;
    var_25 = (max(0, 92));
    var_26 = 50178;
    #pragma endscop
}
