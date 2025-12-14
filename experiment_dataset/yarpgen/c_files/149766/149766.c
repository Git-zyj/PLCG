/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_13 % (max(var_0, var_13))))) ? var_4 : (max(72, 989729968696453226)));
    var_21 = (min(var_21, -var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_22 *= (((var_11 ? (arr_3 [i_0] [i_0] [i_0]) : -72)));
                arr_6 [i_0] [i_1] = (((arr_0 [i_1 - 1]) ? -85 : (arr_3 [3] [i_1] [i_0])));
            }
        }
    }
    #pragma endscop
}
