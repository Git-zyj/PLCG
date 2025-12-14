/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = var_11;
                    var_20 ^= (((var_15 && var_11) ? 0 : ((max(var_14, (arr_1 [i_0 + 1]))))));
                    var_21 = (min((((arr_7 [i_2] [i_2] [i_1 - 1]) ? var_2 : (arr_7 [i_0] [i_0] [i_1 - 1]))), ((~((-(arr_7 [i_0] [i_1] [i_0])))))));
                }
            }
        }
    }
    var_22 = ((-29236 ? -17 : 1101051024195735264));
    var_23 = (max(var_23, (((var_12 ? (((((var_16 ? var_11 : var_7))) ? ((31456 >> (var_18 + 33))) : var_0)) : var_16)))));
    #pragma endscop
}
