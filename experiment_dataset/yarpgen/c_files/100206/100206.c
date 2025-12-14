/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (((arr_2 [4] [3]) ? var_16 : (arr_4 [i_0] [i_1])));
                var_19 = (~8265264295071795605);
                var_20 -= (arr_1 [i_1 - 2]);
            }
        }
    }
    var_21 = (((((33020 ^ 39) != (var_7 | var_10))) ? (((min(var_1, var_6)) & (var_13 && var_0))) : var_9));
    #pragma endscop
}
