/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    var_21 = var_14;
    var_22 = 147;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_23 = (4230229369 ? ((~(var_14 / -7620323772783772476))) : (((var_12 ? ((4162590703 >> (((arr_0 [i_1] [i_0]) + 35)))) : (((((arr_1 [i_1]) && 9223372036854775807))))))));
                var_24 -= var_5;
            }
        }
    }
    #pragma endscop
}
