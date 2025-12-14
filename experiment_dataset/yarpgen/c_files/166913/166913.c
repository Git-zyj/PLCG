/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -91;
    var_19 -= min((min(var_15, (((var_3 ? 480 : var_1))))), -6394322871068413206);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (((((1500081292 ? var_4 : 8))) ? (((min(481, -480)))) : ((-9 ? -502 : 8569701290558319669))));
                var_21 = (max(var_21, ((18446744073709551615 ? (min(var_14, (arr_2 [i_0]))) : (((var_17 ? 34070 : 1500081300)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_22 = (min(var_22, (((-2 ? (min(var_0, (arr_4 [i_1 + 1]))) : (((~(max(255, (arr_2 [i_2])))))))))));
                            var_23 &= 477;
                        }
                    }
                }
                var_24 = (max(((var_5 ? (((arr_2 [i_0 + 1]) & (arr_7 [i_0] [i_1] [12]))) : ((max((arr_4 [i_1 + 1]), 0))))), ((min(87, -1500081285)))));
            }
        }
    }
    #pragma endscop
}
