/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/63
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_9, (var_5 < 1)));
    var_12 = ((!((max((1 - 3050), ((min(var_10, 1))))))));
    var_13 -= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2)
        {
            {
                var_14 = (13248 ? ((((max(var_0, var_1))))) : (min(var_9, var_10)));
                var_15 = (max(var_15, ((((~1) < ((((min(var_5, var_2))) ? var_4 : var_5)))))));
                var_16 = ((+((max(1, -24124)))));
            }
        }
    }
    #pragma endscop
}
