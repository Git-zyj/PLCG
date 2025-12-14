/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~((var_7 ? (~-108) : ((13261 << (var_12 - 977289644)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_4 [1] [16] [i_0] = (((2147483647 ? -854986766 : 1)));
                var_21 = (((((0 > -854986782) || 29)) ? var_15 : -116));
                arr_5 [i_1] [i_0] = (((((var_5 ? -11 : 14102943500241598671)))) ? var_3 : (((-var_13 - (9223372036854775798 || var_11)))));
                var_22 = -3164049310;
            }
        }
    }
    var_23 = var_9;
    #pragma endscop
}
