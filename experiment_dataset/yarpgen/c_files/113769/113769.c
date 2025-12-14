/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_2] = (arr_6 [i_0] [i_0]);
                    var_13 ^= (((((((arr_2 [17] [i_1] [i_2]) | (arr_2 [i_0] [10] [i_0])))) ? (-127 - 1) : ((7723228452271600645 ? var_10 : var_3)))));
                }
            }
        }
    }
    var_14 = (((((((max(var_5, var_11))) << ((min(0, 110)))))) ? -var_5 : (var_7 * var_5)));
    var_15 = (min(((((min(var_12, 695680999518576810)) > (~0)))), var_7));
    var_16 = (((~18446744073709551615) ? (var_3 && var_6) : 223782800));
    #pragma endscop
}
