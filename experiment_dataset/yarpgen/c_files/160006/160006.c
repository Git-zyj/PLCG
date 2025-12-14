/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!4694495282088108234) / -103));
    var_19 = ((((((~var_8) ? var_4 : var_15))) ? var_0 : ((2711047563 * (-1 / 102)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 -= ((((((arr_4 [i_1] [i_1] [i_1]) & (arr_0 [i_1])))) || ((((arr_4 [i_0 + 1] [i_0 - 2] [i_0 + 2]) ? 0 : (arr_4 [i_0 + 2] [i_1] [i_1]))))));
                var_21 = ((((min(var_5, -1))) ? (((!(arr_2 [i_0 - 2] [i_0 + 2])))) : (!-67)));
            }
        }
    }
    #pragma endscop
}
