/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_8, -3));
    var_18 = ((var_10 & (max(1225374847097635573, 65535))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = ((var_15 ? ((((!(~1))))) : (arr_0 [i_0])));
                var_20 &= ((0 << (((((((arr_5 [i_1] [i_1]) ? var_12 : 21481)) + (arr_2 [i_0 + 1]))) - 15664964012899401622))));
            }
        }
    }
    #pragma endscop
}
