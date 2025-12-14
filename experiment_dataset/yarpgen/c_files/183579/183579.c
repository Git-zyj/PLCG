/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_12 & (((min(var_8, var_2)) / var_12))));
    var_18 |= (((~var_3) | ((((var_5 & 4) ? var_7 : var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_19 ^= ((!(arr_5 [i_0 + 1] [i_0 + 2])));
                var_20 *= (((arr_1 [i_1 - 1]) ? ((max(4294967290, 2))) : ((((max(-24675, var_15)))))));
            }
        }
    }
    var_21 = (min(var_21, (((((((max(var_1, var_7))) ? (!var_12) : var_10)) * (((((var_13 ? var_10 : var_2))) ? var_16 : var_2)))))));
    var_22 += (max((max((~var_2), (min(var_3, var_14)))), (((((min(var_10, var_6))) ? var_1 : ((var_13 ? var_11 : var_4)))))));
    #pragma endscop
}
