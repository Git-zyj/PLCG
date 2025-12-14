/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((min(var_7, var_4)) >> (var_1 - 28008)))) & ((var_8 ? var_12 : (min(var_2, var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 += (~-2147483641);
                var_17 += (((((((13173 ? var_4 : -2147483620))) ? ((var_7 ? 18446744073709551612 : (arr_4 [i_0]))) : (((1 ? -1668275426 : 1))))) & ((min((min(var_13, (arr_0 [9]))), (!0))))));
            }
        }
    }
    #pragma endscop
}
