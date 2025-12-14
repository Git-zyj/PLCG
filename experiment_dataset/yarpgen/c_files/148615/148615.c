/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((-(!var_10)));
    var_13 = (min(15, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = ((-(((((arr_0 [i_0]) | var_6))))));
                var_15 += ((+((((min((arr_4 [i_0] [17] [i_0]), var_10))) ? ((-1931609857489854034 ? (arr_2 [i_0]) : var_0)) : (!var_11)))));
            }
        }
    }
    #pragma endscop
}
