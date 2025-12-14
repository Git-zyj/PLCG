/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 *= (((((((arr_3 [i_1]) << (var_9 - 170))))) * (min((38 / -73), (max(var_5, var_17))))));
                var_22 = (max(var_1, ((((arr_4 [i_0] [i_1] [i_1]) <= (((arr_1 [i_0] [i_0]) ? (arr_3 [i_1]) : var_18)))))));
            }
        }
    }
    #pragma endscop
}
