/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((-(min(var_14, var_7)))) % ((min((~-38), 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 -= (arr_3 [23]);
                var_21 ^= (max(var_13, (arr_1 [i_1 + 1] [i_1 + 1])));
                var_22 ^= (arr_1 [i_1] [i_1 - 1]);
            }
        }
    }
    var_23 |= var_11;
    var_24 = max(((-6611052793333320609 ? -var_2 : ((var_13 ? var_8 : var_6)))), (-6611052793333320609 || 0));
    #pragma endscop
}
