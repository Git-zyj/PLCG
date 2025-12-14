/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = ((-120 >> ((var_6 & (~138492418)))));
                var_11 = (arr_2 [i_0]);
                var_12 &= (((((((((arr_1 [6]) << (var_0 - 1117737692)))) & (max(var_5, 1560922393))))) % (max(var_1, 660758096))));
                arr_4 [i_1] [i_1] [i_1] = (!(((-54225 ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (arr_2 [i_0 + 1])))));
            }
        }
    }
    var_13 -= (min(var_5, ((1 ^ ((var_4 ? 989208807 : 48))))));
    #pragma endscop
}
