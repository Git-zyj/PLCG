/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 = var_9;
    var_15 = ((var_3 % (((var_3 ? 124 : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = -8101434425172436372;
                arr_6 [i_1] [i_1] [i_0] = ((((((((-8241 ? var_12 : (arr_3 [i_1] [i_0] [i_0])))) ? (((arr_4 [i_0]) ? 1 : (arr_3 [i_1] [i_1] [i_1]))) : (~123)))) ? 152 : ((min(((((arr_1 [i_0]) > var_5))), (arr_0 [i_1] [i_1]))))));
                arr_7 [i_0] [i_0] [i_1] = var_8;
            }
        }
    }
    #pragma endscop
}
