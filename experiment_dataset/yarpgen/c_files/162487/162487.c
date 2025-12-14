/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                var_18 += ((max((max(var_8, var_2)), (arr_0 [i_0] [i_0]))));
                var_19 += (((max(2048704918, (arr_4 [i_0] [i_1 + 1] [7]))) ^ (arr_1 [i_1 + 1])));
            }
        }
    }
    var_20 = (max(var_20, -15490));
    var_21 = (min(var_21, (((1723402176 ? 1030282552 : var_3)))));
    var_22 = (min(var_22, 2294872563391280997));
    #pragma endscop
}
