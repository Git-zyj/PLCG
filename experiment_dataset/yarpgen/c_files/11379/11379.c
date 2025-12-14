/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((~var_14) ? ((max(var_15, var_15))) : 2514498105008742703));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (~var_7);
                arr_4 [i_0] [18] = ((((max((arr_1 [i_0 + 1]), 75))) ? (max((min(-7980605925988723459, (arr_2 [7]))), (((var_9 || (arr_1 [19])))))) : (arr_2 [i_1])));
                arr_5 [i_0] = (~var_4);
            }
        }
    }
    var_18 += var_13;
    #pragma endscop
}
