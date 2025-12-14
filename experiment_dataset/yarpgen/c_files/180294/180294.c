/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = ((((((3624703567 ? (arr_1 [i_0]) : var_4)) + (arr_5 [i_0] [i_1]))) + (min(var_4, (((arr_6 [i_0] [i_1] [18]) ? var_3 : (arr_0 [i_1])))))));
                var_11 = (min((((arr_6 [i_0] [i_1] [i_1]) ? ((var_0 ? 1006632960 : (-32767 - 1))) : 1)), 1));
            }
        }
    }
    var_12 = (min(var_12, (((((((~1) ? ((3166371387 ? var_8 : var_9)) : var_5))) ^ (var_3 && var_4))))));
    #pragma endscop
}
