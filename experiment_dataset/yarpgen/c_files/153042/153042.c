/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max((min(var_2, var_9)), var_7));
    var_15 = ((((min(((var_11 ? var_2 : 4294967295)), (var_1 - var_10)))) ? (min(((var_13 ? var_1 : 332093490)), (var_11 | var_11))) : var_1));
    var_16 = (((var_3 ^ var_8) <= (min((((var_10 ? var_7 : 17484))), var_4))));
    var_17 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = ((~(((((-7520173883549722290 + 9223372036854775807) >> (-922967305 + 922967358)))))));
                    arr_9 [i_1] [i_1] [i_1] &= (var_8 - var_13);
                }
            }
        }
    }
    #pragma endscop
}
