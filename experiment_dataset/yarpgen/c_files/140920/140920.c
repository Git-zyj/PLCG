/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((~131071) ? var_7 : var_1))) || var_0));
    var_18 = ((((min(var_16, var_16))) < ((var_15 % ((var_0 ? 2417946627 : var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 -= (((~var_3) < (((((((arr_3 [1] [i_1] [4]) ? (arr_3 [i_1] [i_1] [7]) : (arr_2 [i_0]))) <= 26639))))));
                var_20 = (min(var_16, (((2147483648 ? ((1877020668 ? (arr_0 [i_0]) : 1)) : var_1)))));
            }
        }
    }
    #pragma endscop
}
