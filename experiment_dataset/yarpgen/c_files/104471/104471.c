/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(2199023255551, var_3))) ? (((((max(var_4, 2199023255551))) ? ((var_7 ? var_2 : var_5)) : 0))) : (((((var_1 ? 2494278092220767510 : 99480720))) ? -var_9 : var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (~-12912);
                arr_4 [i_0] [i_0] = (max(2494278092220767510, 153));
            }
        }
    }
    #pragma endscop
}
