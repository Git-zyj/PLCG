/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((~(!var_1)))) ? ((((min(var_5, var_4)) <= var_2))) : ((var_11 ? (max(var_9, 924119629)) : (var_4 || var_3)))));
    var_16 = var_6;
    var_17 = ((((((var_11 ? -8192 : var_14)))) ? (max(((var_5 ? 18446744073709551602 : var_13)), ((min(var_5, var_14))))) : (((var_8 ? ((58965 ? 2600242494 : var_10)) : 6571)))));
    var_18 = ((((((1 ? 143 : -924119626)))) || var_6));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 = var_2;
                    var_20 = ((0 << (273632043633536429 - 273632043633536397)));
                    arr_7 [8] [i_1] [i_1] [i_0 + 2] = (arr_5 [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
