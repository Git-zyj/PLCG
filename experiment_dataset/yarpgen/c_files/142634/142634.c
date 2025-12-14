/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142634
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
                var_13 = (max(((max(1, (max((arr_5 [23] [i_1] [i_1]), 176))))), (((max((arr_4 [11] [23]), (arr_6 [i_0] [19]))) * ((((0 >= (arr_6 [i_0] [i_1])))))))));
                var_14 = (((((arr_1 [i_0]) - 1)) * var_3));
            }
        }
    }
    var_15 = (min(var_15, 804515106));
    #pragma endscop
}
