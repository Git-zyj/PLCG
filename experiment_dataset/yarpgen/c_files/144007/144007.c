/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_12 *= ((((min((arr_4 [i_0] [i_0 - 1] [i_1 + 1]), (arr_4 [i_0] [i_0 - 1] [i_1 - 1])))) ? (arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 1]) : (min(var_4, ((-1585797548 ? var_10 : var_5))))));
                var_13 = ((((((arr_3 [i_0]) * var_2))) ? (min((arr_0 [i_0]), var_3)) : (((!(!var_7))))));
            }
        }
    }
    var_14 = var_0;
    #pragma endscop
}
