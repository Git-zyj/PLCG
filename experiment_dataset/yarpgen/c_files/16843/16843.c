/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((((~var_16) << ((((min(-104, var_12))) - 134))))) && (10 || 10)));
        var_20 = (min(var_20, ((((var_9 ? var_15 : -11))))));
        arr_5 [i_0] = (max(1298023417, ((59 << (var_4 - 83)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 ^= ((((min(var_3, var_0))) % ((min(var_12, -12)))));
                    var_22 = var_13;
                    var_23 = (max(var_23, var_10));
                }
            }
        }
        arr_13 [10] &= (min((!var_14), (!var_1)));
    }
    var_24 *= ((var_17 ? (((var_15 ^ var_10) + var_14)) : (var_18 && var_10)));
    #pragma endscop
}
