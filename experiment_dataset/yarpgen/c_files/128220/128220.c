/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((min(var_0, 21767))), (max(var_4, 121))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 ^= ((((((min((arr_2 [i_0] [i_0] [i_0]), (arr_0 [6] [i_1]))) < var_10))) * (max((~var_0), (!var_7)))));
                var_14 = (min(var_14, ((((max(var_10, 3958382587)))))));
                var_15 = (min(((139 << (-64 + 72))), (arr_3 [i_0] [i_1])));
            }
        }
    }
    var_16 = (var_0 / var_1);
    #pragma endscop
}
