/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((13279352514367869814 ? var_12 : ((min(-89668369, 7455))))) == var_6));
    var_14 = ((!(((((-1531149487 ? -7455 : var_2)) + 1)))));
    var_15 = (max(var_15, var_11));
    var_16 = (min((((!(((1 ? -22823 : 8454909850415847976)))))), 159));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = 20;
                var_17 ^= ((var_4 * (19186 & 0)));
            }
        }
    }
    #pragma endscop
}
