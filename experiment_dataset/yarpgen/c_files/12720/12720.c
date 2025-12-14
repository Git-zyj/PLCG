/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((~-1533663500) >= (arr_1 [i_0 - 1])));
                var_16 = (((~var_10) ? (min(-var_7, ((var_0 ? var_10 : (arr_0 [i_0]))))) : (((max((min(var_4, var_2)), (!var_3)))))));
                var_17 = (min(var_17, ((((arr_2 [i_0 + 1] [i_0 + 1]) ? ((96 & (arr_0 [10]))) : 1)))));
            }
        }
    }
    var_18 = (((((((var_11 ? var_5 : var_11))) ? (var_7 + var_8) : -var_6)) % (((~(!var_5))))));
    #pragma endscop
}
