/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((-(-4531869512259313951 == -6658224381976151267))) + var_1));
    var_13 = (min(var_13, (((var_5 ? (~var_5) : -11650)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (min(var_6, ((~((var_6 >> (18049942732455512887 - 18049942732455512887)))))));
                var_15 = (((((var_3 ? var_2 : var_6))) && ((!(arr_0 [i_0])))));
                var_16 = 14826589397731005877;
            }
        }
    }
    #pragma endscop
}
