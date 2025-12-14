/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 4193283345;
    var_12 = var_0;
    var_13 = ((((max((min(var_5, var_9)), (4193283323 + var_10)))) ? (!var_5) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_14 = (((((var_2 ^ (arr_3 [i_1 + 2] [i_1 + 1])))) ? (arr_3 [i_1 + 2] [i_1 + 2]) : ((max(8142, 65516)))));
                arr_5 [i_0] = ((max(var_7, var_9)));
            }
        }
    }
    #pragma endscop
}
