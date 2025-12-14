/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(var_4, var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = ((((!(((11498 ? 11507 : 54013))))) ? (((((54032 ? 6960 : 0)) << ((((var_14 ? var_14 : -4268826332507164504)) - 2175))))) : (arr_0 [i_0])));
                var_22 = ((~((+(((arr_0 [i_1]) & var_2))))));
                var_23 = (((((arr_0 [i_1]) + (arr_2 [i_0] [i_1])))));
            }
        }
    }
    var_24 -= (((((7604595683501764982 ? var_1 : (1 && var_18)))) ? var_0 : var_3));
    var_25 = var_15;
    #pragma endscop
}
