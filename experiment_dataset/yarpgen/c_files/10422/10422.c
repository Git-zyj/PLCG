/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_6 ? (((~(~0)))) : 6005111169531531314);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (-467891213 == 1);
                var_12 = (((((var_6 ? ((min(6389, -70277109))) : ((18446744073709551600 >> (((arr_0 [5]) - 21554))))))) ? (((((arr_0 [i_0 - 2]) <= (min(-474143297, var_6)))))) : (((arr_1 [i_0 - 1] [i_0 - 2]) | var_6))));
            }
        }
    }
    var_13 = (((0 == 1) << (((min(var_8, ((var_3 ? var_4 : 1)))) - 6871137947558948841))));
    var_14 = var_0;
    #pragma endscop
}
