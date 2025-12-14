/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max((255 <= 221135459910424720), (min(58030, -1496816431)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((max(((max((1 && 37), var_2))), -1)))));
                arr_4 [i_0] [i_0] [i_1] = ((((((0 / 1059215523) ? ((((arr_0 [i_1]) ? (-127 - 1) : var_0))) : ((4222630938 ? (arr_3 [i_0] [i_1]) : var_3))))) ? (max((arr_0 [i_0 + 3]), 0)) : var_7));
            }
        }
    }
    var_12 -= var_1;
    #pragma endscop
}
