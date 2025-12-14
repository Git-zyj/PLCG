/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(((((min(var_3, var_2))) ? ((var_2 ? 9223372036854775807 : var_11)) : (~var_4))), ((((-9223372036854775800 ? var_4 : -2662083452860649371)) & var_4)));
    var_13 = (var_10 ^ 53083);
    var_14 = -9223372036854775800;
    var_15 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = var_5;
                    var_17 = min((max((max(1073610752, var_9)), 43577)), (arr_3 [i_0]));
                }
            }
        }
    }
    #pragma endscop
}
