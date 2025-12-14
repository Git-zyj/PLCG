/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((1 ? 1 : 1440360389766142122)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((((((arr_4 [i_1] [i_1] [i_0]) ? (var_12 && var_8) : (arr_2 [i_0] [i_1])))) ? var_10 : var_4));
                arr_6 [i_0] = ((1 ? -1 : ((min((arr_3 [i_1]), (arr_0 [i_0] [i_1]))))));
                var_16 = (arr_5 [4] [i_1] [i_1]);
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
