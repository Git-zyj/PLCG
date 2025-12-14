/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_4 [i_1]);
                arr_7 [i_1 - 2] [i_1] = ((((max(((min(3781894664, 7231232090580244415))), (arr_1 [i_1 + 4] [i_1 - 1])))) ? ((((arr_1 [i_1 + 3] [i_1 + 3]) <= var_9))) : ((var_11 | (!-3116048751522284404)))));
                arr_8 [i_0] [i_0] = (((((((max(6, var_10))) ? ((0 ? var_9 : (arr_3 [i_1] [i_0]))) : (arr_4 [i_1 - 1])))) <= var_3));
                arr_9 [7] [i_1] [i_0] = ((0 ? -3116048751522284404 : ((((min(-3116048751522284404, var_11))) | (min((arr_0 [i_1]), var_6))))));
            }
        }
    }
    var_12 = ((((max(var_6, 1))) ? (((-((var_4 ? var_8 : var_0))))) : ((var_7 ? var_8 : var_6))));
    #pragma endscop
}
