/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = ((((((arr_3 [i_0] [i_0]) ? (-14054 >= 0) : -18))) || (((((((arr_0 [i_0] [i_1]) ^ 254))) ? (((!(arr_2 [8] [5])))) : (((arr_5 [i_1]) * -1)))))));
                var_14 = (max(var_14, ((((((-12 ? ((min(-2, -6248))) : -14031))) ? 155 : (arr_5 [i_0]))))));
            }
        }
    }
    var_15 |= (((~4664593770495041760) & (min(var_11, (((var_7 ? var_6 : var_6)))))));
    #pragma endscop
}
