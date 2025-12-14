/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = 20;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_20 -= ((((((-9223372036854775807 - 1) ? 112327477 : 12))) ? var_13 : (arr_3 [i_0 + 2] [i_0] [i_0])));
                var_21 = ((((var_5 ? ((max(var_15, 185))) : ((max(var_9, 1))))) >> (((max(((-30321 / (arr_0 [19]))), (max(37201, (arr_0 [i_0 + 4]))))) - 37189))));
                var_22 = (min(var_22, (((-(max(((var_9 ? 26 : var_1)), var_2)))))));
            }
        }
    }
    #pragma endscop
}
