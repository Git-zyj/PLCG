/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (((((+(((arr_0 [i_0] [i_1]) ? var_4 : 22))))) - (max((arr_0 [i_0] [i_1 - 2]), var_1))));
                arr_4 [6] [i_0] [13] = (((~(0 & 1))));
                arr_5 [i_0] [i_0] = (((~(max(var_7, 10224)))));
            }
        }
    }
    var_12 = (((+-357640972) / var_3));

    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        arr_10 [13] [i_2] = (882787040 == 20078);
        arr_11 [i_2] = arr_0 [2] [2];
    }
    var_13 = (min(-var_10, (max((-2147483647 - 1), (max(var_6, var_10))))));
    #pragma endscop
}
