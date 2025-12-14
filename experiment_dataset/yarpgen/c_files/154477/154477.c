/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!(((+(((var_9 + 2147483647) >> (32767 - 32763)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((((((max(-32762, -32758))) || var_9))) & var_12))));
                var_15 = (min(var_15, ((((((~var_2) ? ((min(var_8, var_3))) : (arr_4 [i_0] [i_1])))) ? ((var_7 ? var_0 : (arr_2 [i_1] [i_0]))) : ((((arr_4 [i_1] [i_1]) - (arr_4 [i_0] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
