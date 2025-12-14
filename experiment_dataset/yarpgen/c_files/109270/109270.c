/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [8] |= 35184355311616;
                var_15 = ((((25 ? 18446708889354239999 : 35184355311616)) + (arr_1 [i_1 + 1] [i_0])));
                var_16 = var_6;
                var_17 = (i_0 % 2 == 0) ? ((((((var_12 ? var_1 : var_10)) << ((((8795556151296 ? (arr_2 [i_0] [i_0]) : var_14)) + 16)))))) : ((((((var_12 ? var_1 : var_10)) << ((((((8795556151296 ? (arr_2 [i_0] [i_0]) : var_14)) + 16)) - 120))))));
                var_18 &= ((36028797018963967 ^ (arr_3 [i_0] [i_0])));
            }
        }
    }
    var_19 = -var_12;
    var_20 = (var_0 ? ((2058312451366462762 ? (var_12 % var_3) : (((var_11 ? var_1 : 5817367157266252078))))) : var_8);
    var_21 = var_0;
    var_22 = var_8;
    #pragma endscop
}
