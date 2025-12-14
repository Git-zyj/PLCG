/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (!var_5);
    var_17 = (min(var_17, (((var_7 ? (((255 % 18) ^ ((max(var_11, var_9))))) : var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 -= (min((arr_5 [i_0] [11] [i_0]), (max((((arr_2 [4]) ? (arr_1 [12]) : (arr_5 [6] [i_1] [7]))), (arr_4 [i_0] [i_0])))));
                var_19 -= ((116 ? 0 : 139));
            }
        }
    }
    #pragma endscop
}
