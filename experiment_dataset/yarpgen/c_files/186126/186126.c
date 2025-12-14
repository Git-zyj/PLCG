/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((48 ? var_7 : 112)))) ? var_16 : ((var_11 ? -111 : var_13))));
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 ^= ((((max((max(-83, -2217493592549925583)), (max(9223372036854775807, 9223372036854775807))))) ? (min(var_11, 137438953471)) : (((var_15 ? ((18446743936270598145 ? 9223372036854775807 : 0)) : (((min(var_13, -15)))))))));
                    var_21 = ((~(min((min(255, 137438953457)), 0))));
                }
            }
        }
    }
    #pragma endscop
}
