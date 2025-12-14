/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((max(var_8, var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 = (min((((~var_1) ? (max((arr_0 [i_0] [i_1]), (arr_1 [i_0]))) : ((((arr_5 [10]) * -32758))))), (arr_3 [i_1 + 3] [i_1 - 1])));
                    var_20 -= -32764;
                    var_21 = 32758;
                    var_22 ^= (arr_3 [i_0] [i_0]);
                }
            }
        }
    }
    var_23 ^= var_1;
    var_24 = ((var_12 & ((((min(var_7, var_7))) ? var_13 : (var_11 + 32758)))));
    var_25 = var_2;
    #pragma endscop
}
