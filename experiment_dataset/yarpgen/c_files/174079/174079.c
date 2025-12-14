/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((((var_1 ? 1 : var_9)) << ((((min(var_2, var_4))) + 81))))));
    var_19 ^= (((~-89) ? (((var_15 ? var_5 : var_4))) : var_7));
    var_20 |= ((((((((12188 ? 536869888 : var_11))) ? ((var_15 ? var_11 : 1513952946)) : (!var_9)))) ? (((var_0 != var_11) ? (var_7 ^ var_5) : -536869877)) : -var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = -var_15;
                var_22 = ((54444 ? (var_17 && 1) : -48831));
                var_23 = var_4;
                arr_4 [i_1] [i_1] = ((~(((((var_8 ? 1 : var_7))) ? ((var_17 ? (arr_3 [13] [i_1]) : (arr_3 [3] [i_1]))) : (arr_2 [i_1])))));
            }
        }
    }
    var_24 = ((var_14 & ((max(var_2, var_13)))));
    #pragma endscop
}
