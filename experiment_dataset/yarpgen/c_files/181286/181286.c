/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = ((((-((1 ? 1 : var_14))))) ? 7936 : ((((max((arr_3 [i_0] [i_0] [8]), (arr_0 [i_0])))) ? var_14 : (arr_2 [i_0] [i_1] [18]))));
                var_16 += (arr_3 [i_0] [i_1] [i_1]);
            }
        }
    }
    var_17 = 2842404252;
    var_18 = -var_9;
    var_19 = (max(var_19, ((((((1 ? var_9 : var_2)) >> ((((max(var_2, 44))) - 182)))) & (((((max(1, var_12)) == var_2))))))));
    var_20 = (((((4611686018393833472 ? var_4 : 1667978025))) ? 1 : ((((!1) && var_10)))));
    #pragma endscop
}
