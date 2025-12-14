/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(((max(1, var_4))), ((var_2 ? var_2 : var_12))))) ? (((var_1 >= (46 / -25876)))) : (((((1337672161863558628 ? 0 : -126))) ? var_12 : var_11)));
    var_16 = (max(((max(((min(49432, var_12))), (-20 ^ var_1)))), (var_7 | var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_17 &= ((~(((~var_0) ^ var_9))));
                var_18 = (arr_3 [i_0] [i_0] [i_1 + 1]);
            }
        }
    }
    var_19 = var_14;
    var_20 = (~var_5);
    #pragma endscop
}
