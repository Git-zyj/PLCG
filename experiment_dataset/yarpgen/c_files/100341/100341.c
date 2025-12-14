/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((min((!var_11), (-4015 & 21297)))) ? -22216 : (1 - 6035635335081407961)));
                var_18 -= (min((arr_4 [i_1] [i_1] [5]), (((arr_4 [i_0] [12] [i_0]) - (arr_4 [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_19 = var_13;
    var_20 = ((var_8 && (!-6816323478597909322)));
    var_21 = (max(var_21, 147));
    #pragma endscop
}
