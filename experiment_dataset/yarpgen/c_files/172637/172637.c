/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (min(((-1 ? -21512 : 0)), (((~1477866685) ? -46198 : (((arr_1 [18] [i_1 + 1]) ? (arr_2 [i_0]) : 268435455))))))));
                var_12 = (max((min((arr_4 [i_0 - 2]), (arr_0 [i_0 + 1]))), (arr_4 [i_0 - 1])));
            }
        }
    }
    var_13 = (max(var_13, var_8));
    var_14 = var_1;
    #pragma endscop
}
