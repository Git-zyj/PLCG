/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (min(((((min(1841247614, 2453719668))) ? (max(var_1, (arr_3 [i_0] [i_1]))) : (arr_2 [i_0] [i_0] [8]))), -7843606588537854326))));
                var_14 = var_6;
            }
        }
    }
    var_15 = var_5;
    #pragma endscop
}
